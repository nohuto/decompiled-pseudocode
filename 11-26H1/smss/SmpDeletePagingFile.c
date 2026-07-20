/*
 * XREFs of SmpDeletePagingFile @ 0x1400108B8
 * Callers:
 *     SmpSaveOldPageFiles @ 0x140009C20 (SmpSaveOldPageFiles.c)
 *     SmpCleanupStalePageFiles @ 0x14000F040 (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagefileOnVolume @ 0x14000F6B8 (SmpCreatePagefileOnVolume.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 */

__int64 __fastcall SmpDeletePagingFile(struct _UNICODE_STRING *a1)
{
  NTSTATUS v1; // eax
  NTSTATUS v2; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  char FileInformation; // [rsp+80h] [rbp+10h] BYREF
  void *FileHandle; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.ObjectName = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenFile(&FileHandle, 0x10000u, &ObjectAttributes, &IoStatusBlock, 7u, 0x40u);
  v2 = v1;
  if ( v1 >= 0 )
  {
    FileInformation = 1;
    v2 = NtSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
    SmpLogFailure((__int64)"SmpDeletePagingFile", ((v2 >> 31) & 4) + 4017, v2);
    NtClose(FileHandle);
  }
  else
  {
    SmpLogFailure((__int64)"SmpDeletePagingFile", 4002, v1);
  }
  return (unsigned int)v2;
}
