/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x1800D64C0
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800D6278 (LdrpResValidateFilePath.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

BOOLEAN __cdecl RtlDosPathNameToNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  size_t v7; // rax
  __m128i v9; // [rsp+40h] [rbp-18h] BYREF

  v9.m128i_i64[1] = (__int64)DosFileName;
  v9.m128i_i64[0] = 0LL;
  if ( !DosFileName )
    return (int)RtlpDosPathNameToRelativeNtPathName(
                  0,
                  &v9,
                  0LL,
                  &NtFileName->Length,
                  0LL,
                  (const void **)FilePart,
                  (__int64)RelativeName) >= 0;
  v7 = wcslen(DosFileName);
  if ( v7 <= 0x7FFE )
  {
    v9.m128i_i16[0] = 2 * v7;
    v9.m128i_i16[1] = 2 * v7 + 2;
    return (int)RtlpDosPathNameToRelativeNtPathName(
                  0,
                  &v9,
                  0LL,
                  &NtFileName->Length,
                  0LL,
                  (const void **)FilePart,
                  (__int64)RelativeName) >= 0;
  }
  return 0;
}
