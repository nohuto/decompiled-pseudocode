/*
 * XREFs of MD4Init @ 0x180158800
 * Callers:
 *     RtlpMD4Init @ 0x18013B2D0 (RtlpMD4Init.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x180137700 (SymCryptWipeAsm.c)
 *     ScRsa32Compat_Md4ExportAndWipe @ 0x180158920 (ScRsa32Compat_Md4ExportAndWipe.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall MD4Init(__int64 a1)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+38h] [rbp-70h]
  __int128 v6; // [rsp+80h] [rbp-28h]

  v3[1] = 0;
  memset_thunk_772440563353939046(v3, 0, 0x6CuLL);
  SymCryptWipeAsm((__int64)v3, 0x70uLL);
  v4 = 0LL;
  v6 = xmmword_180194D20;
  v5 = 0LL;
  v3[0] = 0;
  return ScRsa32Compat_Md4ExportAndWipe(v3, a1);
}
