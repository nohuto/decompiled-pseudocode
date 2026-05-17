/*
 * XREFs of MD4Update @ 0x1801589C0
 * Callers:
 *     RtlpMD4Update @ 0x18013B570 (RtlpMD4Update.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x18003898C (SymCryptHashAppendInternal.c)
 *     ScRsa32Compat_Md4ExportAndWipe @ 0x180158A50 (ScRsa32Compat_Md4ExportAndWipe.c)
 *     ScRsa32Compat_Md4Import @ 0x180158AA0 (ScRsa32Compat_Md4Import.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall MD4Update(__int64 a1, char *a2, unsigned int a3)
{
  unsigned int v7[28]; // [rsp+20h] [rbp-98h] BYREF

  v7[1] = 0;
  memset_thunk_772440563353939046(v7, 0, 0x6CuLL);
  ScRsa32Compat_Md4Import(a1, v7);
  SymCryptHashAppendInternal((__int64)SymCryptMd4Algorithm_default, v7, a2, a3);
  return ScRsa32Compat_Md4ExportAndWipe(v7, a1);
}
