/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x140A5DC10
 * Callers:
 *     <none>
 * Callees:
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1403AB850 (SepLocateTokenTrustLevel.c)
 *     SeGetTrustLabelAce @ 0x1403AE560 (SeGetTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x1403AF7B0 (RtlSidDominatesForTrust.c)
 */

bool __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  BOOLEAN v5; // bp
  __int64 TrustLabelAce; // rax
  __int64 v7; // r9
  void *v8; // rsi
  _DWORD *TokenTrustLevel; // rax
  __int64 v10; // r8
  BOOLEAN DominatesTrust; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v5 = 1;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  v8 = (void *)(TrustLabelAce + 8);
  if ( !TrustLabelAce )
    v8 = 0LL;
  if ( v8 )
  {
    DominatesTrust = 0;
    TokenTrustLevel = SepLocateTokenTrustLevel((_QWORD *)(a3 + 32));
    RtlSidDominatesForTrust(TokenTrustLevel, v8, &DominatesTrust);
    v5 = DominatesTrust;
  }
  v10 = *(_QWORD *)(a3 + 32);
  if ( !v10 )
    v10 = *(_QWORD *)(a3 + 48);
  LOBYTE(v7) = 1;
  SepFilterCheck(a2, 0LL, v10, v7, (int *)&v13);
  return v5 && ((unsigned int)v13 & *(_DWORD *)(a3 + 16)) == *(_DWORD *)(a3 + 16);
}
