/*
 * XREFs of A_SHAFinal @ 0x1801587A8
 * Callers:
 *     RtlpA_SHAFinal @ 0x18013B430 (RtlpA_SHAFinal.c)
 * Callees:
 *     SymCryptSha1Result @ 0x180039BD0 (SymCryptSha1Result.c)
 *     ScRsa32Compat_Sha1ExportAndWipe @ 0x180158B08 (ScRsa32Compat_Sha1ExportAndWipe.c)
 *     ScRsa32Compat_Sha1Import @ 0x180158B58 (ScRsa32Compat_Sha1Import.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall A_SHAFinal(__int64 a1, _QWORD *a2)
{
  unsigned int v5[32]; // [rsp+20h] [rbp-98h] BYREF

  v5[1] = 0;
  memset_thunk_772440563353939046(v5, 0, 0x7CuLL);
  ScRsa32Compat_Sha1Import(a1, v5);
  SymCryptSha1Result(v5, a2);
  return ScRsa32Compat_Sha1ExportAndWipe(v5, a1);
}
