/*
 * XREFs of SmpQueryFileExists @ 0x1400122F4
 * Callers:
 *     SmpCreateTempFile @ 0x140011D04 (SmpCreateTempFile.c)
 *     SmpGetDumpDestination @ 0x140011F7C (SmpGetDumpDestination.c)
 * Callees:
 *     <none>
 */

char __fastcall SmpQueryFileExists(struct _UNICODE_STRING *a1)
{
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+80h] [rbp+10h] BYREF

  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.RootDirectory = 0LL;
  FileHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) < 0 )
    return 0;
  NtClose(FileHandle);
  return 1;
}
