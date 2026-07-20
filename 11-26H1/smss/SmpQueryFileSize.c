/*
 * XREFs of SmpQueryFileSize @ 0x140012380
 * Callers:
 *     SmpCopyFile @ 0x14001196C (SmpCopyFile.c)
 *     SmpGetDumpDestination @ 0x140011F7C (SmpGetDumpDestination.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpQueryFileSize(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  __int128 FileInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  result = NtQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
    *a2 = FileInformation;
  return result;
}
