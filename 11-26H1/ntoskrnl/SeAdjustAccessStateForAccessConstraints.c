/*
 * XREFs of SeAdjustAccessStateForAccessConstraints @ 0x140A51E80
 * Callers:
 *     <none>
 * Callees:
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1403AB850 (SepLocateTokenTrustLevel.c)
 *     SeGetTrustLabelAce @ 0x1403AE560 (SeGetTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x1403AF7B0 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SeAdjustAccessStateForAccessConstraints(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // esi
  __int64 result; // rax
  int v9; // ebp
  int v10; // eax
  int v11; // r14d
  __int64 v12; // r8
  __int64 TrustLabelAce; // rax
  __int64 v14; // r15
  int v15; // ebx
  int v16; // r14d
  int v17; // ecx
  void *v18; // r13
  _DWORD *TokenTrustLevel; // rax
  BOOLEAN DominatesTrust; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  DominatesTrust = 0;
  v21 = 0LL;
  v5 = -1;
  result = *(unsigned int *)(a3 + 12);
  v9 = -1;
  if ( (result & 6) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 68);
    if ( v10 == 1 )
    {
      v4 = 17957001;
      v11 = 18809110;
    }
    else if ( v10 == 256 )
    {
      v4 = 16908313;
      v11 = 17760262;
    }
    else
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)(a3 + 32);
    if ( !v12 )
      v12 = *(_QWORD *)(a3 + 48);
    LOBYTE(a4) = 1;
    SepFilterCheck(a2, 0LL, v12, a4, (int *)&v21);
    if ( BYTE4(v21) )
      v5 = v21;
    TrustLabelAce = SeGetTrustLabelAce(a2);
    v14 = TrustLabelAce;
    if ( TrustLabelAce )
    {
      v18 = (void *)(TrustLabelAce + 8);
      if ( TrustLabelAce == -8
        || (TokenTrustLevel = SepLocateTokenTrustLevel((_QWORD *)(a3 + 32)),
            RtlSidDominatesForTrust(TokenTrustLevel, v18, &DominatesTrust),
            !DominatesTrust) )
      {
        v9 = *(_DWORD *)(v14 + 4);
      }
    }
    result = ~(v5 & (unsigned int)v9);
    v15 = result & v4;
    v16 = result & v11;
    if ( v9 != -1 || v5 != -1 )
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
