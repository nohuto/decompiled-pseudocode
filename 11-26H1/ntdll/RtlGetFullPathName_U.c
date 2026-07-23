/*
 * XREFs of RtlGetFullPathName_U @ 0x1800212E0
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 *     RtlDosSearchPath_U @ 0x1800A3770 (RtlDosSearchPath_U.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

ULONG __cdecl RtlGetFullPathName_U(PCWSTR FileName, ULONG BufferLength, PWSTR Buffer, PWSTR *FilePart)
{
  size_t v7; // rax
  ULONG result; // eax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v9[0] = 0LL;
  v9[1] = FileName;
  if ( !FileName )
  {
LABEL_4:
    result = ((__int64 (__fastcall *)(_QWORD *, _QWORD, PWSTR, PWSTR *, _QWORD, __int64 *))RtlGetFullPathName_Ustr)(
               v9,
               BufferLength,
               Buffer,
               FilePart,
               0LL,
               &v10);
    if ( result )
      return result;
    return 0;
  }
  v7 = wcslen(FileName);
  if ( v7 <= 0x7FFE )
  {
    LOWORD(v9[0]) = 2 * v7;
    WORD1(v9[0]) = 2 * v7 + 2;
    goto LABEL_4;
  }
  return 0;
}
