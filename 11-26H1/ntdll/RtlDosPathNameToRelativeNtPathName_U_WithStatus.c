/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18002DEB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

NTSTATUS __cdecl RtlDosPathNameToRelativeNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  int v6; // esi
  size_t v7; // rax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v9[1] = DosFileName;
  v9[0] = 0LL;
  v6 = (int)NtFileName;
  if ( !DosFileName )
    return RtlpDosPathNameToRelativeNtPathName(
             2,
             (unsigned int)v9,
             0,
             v6,
             0LL,
             (__int64)FilePart,
             (__int64)RelativeName);
  v7 = wcslen(DosFileName);
  if ( v7 <= 0x7FFE )
  {
    LOWORD(v9[0]) = 2 * v7;
    WORD1(v9[0]) = 2 * v7 + 2;
    return RtlpDosPathNameToRelativeNtPathName(
             2,
             (unsigned int)v9,
             0,
             v6,
             0LL,
             (__int64)FilePart,
             (__int64)RelativeName);
  }
  return -1073741562;
}
