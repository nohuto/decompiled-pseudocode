/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800C9170
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

NTSTATUS __cdecl RtlDosPathNameToNtPathName_U_WithStatus(
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
    return RtlpDosPathNameToRelativeNtPathName(
             0,
             &v9,
             0LL,
             &NtFileName->Length,
             0LL,
             (const void **)FilePart,
             (__int64)RelativeName);
  v7 = wcslen(DosFileName);
  if ( v7 <= 0x7FFE )
  {
    v9.m128i_i16[0] = 2 * v7;
    v9.m128i_i16[1] = 2 * v7 + 2;
    return RtlpDosPathNameToRelativeNtPathName(
             0,
             &v9,
             0LL,
             &NtFileName->Length,
             0LL,
             (const void **)FilePart,
             (__int64)RelativeName);
  }
  return -1073741562;
}
