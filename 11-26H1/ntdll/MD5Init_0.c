/*
 * XREFs of MD5Init_0 @ 0x18010F948
 * Callers:
 *     RtlpMD5Init @ 0x18013B300 (RtlpMD5Init.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x180137700 (SymCryptWipeAsm.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall MD5Init_0(__int64 a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _DWORD v6[4]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v7; // [rsp+30h] [rbp-19h]
  __int64 v8; // [rsp+38h] [rbp-11h]
  __int128 v9; // [rsp+40h] [rbp-9h]
  __int128 v10; // [rsp+50h] [rbp+7h]
  __int128 v11; // [rsp+60h] [rbp+17h]
  __int128 v12; // [rsp+70h] [rbp+27h]
  __int128 v13; // [rsp+80h] [rbp+37h]

  v6[1] = 0;
  memset_thunk_772440563353939046(v6, 0, 0x6CuLL);
  SymCryptWipeAsm(v6, 112LL);
  v2 = v10;
  v13 = xmmword_1801767C8;
  *(_OWORD *)(a1 + 8) = xmmword_1801767C8;
  v8 = 0LL;
  *(_OWORD *)(a1 + 24) = v9;
  v6[0] = 0;
  v3 = v11;
  *(_OWORD *)(a1 + 40) = v2;
  v7 = 0LL;
  v4 = v12;
  *(_OWORD *)(a1 + 56) = v3;
  *(_QWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 72) = v4;
  return SymCryptWipeAsm(v6, 112LL);
}
