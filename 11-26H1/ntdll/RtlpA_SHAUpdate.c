/*
 * XREFs of RtlpA_SHAUpdate @ 0x18013B230
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptSha1Append @ 0x180024260 (SymCryptSha1Append.c)
 *     ScRsa32Compat_Sha1ExportAndWipe @ 0x1801589D8 (ScRsa32Compat_Sha1ExportAndWipe.c)
 *     ScRsa32Compat_Sha1Import @ 0x180158A28 (ScRsa32Compat_Sha1Import.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpA_SHAUpdate(__int64 a1, char *a2, unsigned int a3)
{
  unsigned int v7[32]; // [rsp+20h] [rbp-A8h] BYREF

  v7[1] = 0;
  memset_thunk_772440563353939046(v7, 0, 0x7CuLL);
  ScRsa32Compat_Sha1Import(a1, v7);
  SymCryptSha1Append(v7, a2, a3);
  return ScRsa32Compat_Sha1ExportAndWipe(v7, a1);
}
