/*
 * XREFs of RtlpA_SHAInit @ 0x18013B1B0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptSha1Init @ 0x180024290 (SymCryptSha1Init.c)
 *     SymCryptWipeAsm @ 0x180137700 (SymCryptWipeAsm.c)
 *     ScRsa32Compat_Sha1ExportAndWipe @ 0x1801589D8 (ScRsa32Compat_Sha1ExportAndWipe.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpA_SHAInit(__int64 a1)
{
  _BYTE v3[4]; // [rsp+20h] [rbp-98h] BYREF
  int v4; // [rsp+24h] [rbp-94h]

  v4 = 0;
  memset_thunk_772440563353939046(v3, 0, 0x7CuLL);
  SymCryptWipeAsm((__int64)v3, 0x80uLL);
  SymCryptSha1Init((__int64)v3);
  return ScRsa32Compat_Sha1ExportAndWipe(v3, a1);
}
