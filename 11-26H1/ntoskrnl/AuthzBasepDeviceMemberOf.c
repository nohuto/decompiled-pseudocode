/*
 * XREFs of AuthzBasepDeviceMemberOf @ 0x14051165C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepGetNextValue @ 0x1402FB294 (AuthzBasepGetNextValue.c)
 *     SepSidInTokenSidHash @ 0x1403CA5B0 (SepSidInTokenSidHash.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall AuthzBasepDeviceMemberOf(__int64 a1, __int64 a2, char a3, char a4, char a5, _BYTE *a6)
{
  char v7; // bl
  int NextValue; // eax
  unsigned int v12; // edi
  size_t v13; // r8
  __int64 v14; // rdx
  bool v15; // al
  __int128 v17; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+48h] [rbp-A0h]
  void *Src; // [rsp+58h] [rbp-90h]
  unsigned __int8 v20[80]; // [rsp+60h] [rbp-88h] BYREF

  LODWORD(Src) = 0;
  v7 = a5 != 0;
  WORD2(Src) = 0;
  *a6 = 0;
  v17 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    NextValue = AuthzBasepGetNextValue(a1, (__int64)&v17);
    v12 = NextValue;
    if ( NextValue == -2147483622 )
      break;
    if ( NextValue < 0 )
      return v12;
    v13 = DWORD2(v18);
    if ( DWORD2(v18) >= 0x44 )
      v13 = 68LL;
    memmove(v20, Src, v13);
    v14 = *(_QWORD *)(a2 + 1096);
    if ( v14 )
      v15 = SepSidInTokenSidHash(v14 + 32 + (a4 != 0 ? 0x110 : 0), 0LL, v20, a3, a4, 0);
    else
      v15 = 0;
    if ( a5 )
    {
      v7 &= v15;
      if ( !v7 )
        goto LABEL_15;
    }
    else
    {
      v7 |= v15;
      if ( v7 )
        goto LABEL_15;
    }
  }
  v12 = 0;
LABEL_15:
  *a6 = v7;
  return v12;
}
