/*
 * XREFs of RtlIsPartialPlaceholderFileHandle @ 0x1801101E0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationFile @ 0x18015F060 (NtQueryInformationFile.c)
 */

NTSTATUS __cdecl RtlIsPartialPlaceholderFileHandle(HANDLE FileHandle, PBOOLEAN IsPartialPlaceholder)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  result = NtQueryInformationFile(FileHandle, &v4, &v5, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    *IsPartialPlaceholder = (v5 & 0x440000) != 0;
    return 0;
  }
  if ( result == -1073741811 )
  {
    *IsPartialPlaceholder = 0;
    return 0;
  }
  return result;
}
