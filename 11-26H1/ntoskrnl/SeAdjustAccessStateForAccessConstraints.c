/*
 * XREFs of SeAdjustAccessStateForAccessConstraints @ 0x140A48B90
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x1402AC130 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x1402ACB80 (RtlSidDominatesForTrust.c)
 *     SeGetTrustLabelAce @ 0x1402AE120 (SeGetTrustLabelAce.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 */

__int64 __fastcall SeAdjustAccessStateForAccessConstraints(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // esi
  __int64 result; // rax
  int v8; // ebp
  int v9; // eax
  int v10; // r14d
  __int64 v11; // r8
  __int64 TrustLabelAce; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  int v15; // ebx
  int v16; // r14d
  int v17; // ecx
  __int64 v18; // r13
  __int64 TokenTrustLevel; // rax
  bool v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v20 = 0;
  v21 = 0LL;
  v4 = -1;
  result = *(unsigned int *)(a3 + 12);
  v8 = -1;
  if ( (result & 6) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 68);
    if ( v9 == 1 )
    {
      v3 = 17957001;
      v10 = 18809110;
    }
    else if ( v9 == 256 )
    {
      v3 = 16908313;
      v10 = 17760262;
    }
    else
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)(a3 + 32);
    if ( !v11 )
      v11 = *(_QWORD *)(a3 + 48);
    SepFilterCheck(a2, 0LL, v11, 1, (int *)&v21);
    if ( BYTE4(v21) )
      v4 = v21;
    TrustLabelAce = SeGetTrustLabelAce(a2);
    v14 = TrustLabelAce;
    if ( TrustLabelAce )
    {
      v18 = TrustLabelAce + 8;
      if ( TrustLabelAce == -8
        || (TokenTrustLevel = SepLocateTokenTrustLevel((_QWORD *)(a3 + 32), v13),
            RtlSidDominatesForTrust(TokenTrustLevel, v18, &v20),
            !v20) )
      {
        v8 = *(_DWORD *)(v14 + 4);
      }
    }
    result = ~(v4 & (unsigned int)v8);
    v15 = result & v3;
    v16 = result & v10;
    if ( v8 != -1 || v4 != -1 )
    {
      v17 = *(_DWORD *)(a3 + 12);
      result = *(unsigned int *)(a3 + 20);
      if ( (v17 & 2) != 0 )
        result = ~v15 & (unsigned int)result;
      if ( (v17 & 4) != 0 )
        result = ~v16 & (unsigned int)result;
      *(_DWORD *)(a3 + 20) = result;
    }
  }
  return result;
}
