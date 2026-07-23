/*
 * XREFs of CmpVolumeManagerGetContextForFilePath @ 0x14085D8EC
 * Callers:
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x140777A94 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateFile @ 0x140728A60 (ZwCreateFile.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140A2FA8C (CmpVolumeManagerGetContextForFile.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFilePath(__int64 a1, UNICODE_STRING *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  NTSTATUS ContextForFile; // ebx
  __int64 v7; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+67h] BYREF

  ObjectAttributes.ObjectName = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ContextForFile = ZwCreateFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0, 0LL, 0);
  if ( ContextForFile >= 0 )
    ContextForFile = CmpVolumeManagerGetContextForFile(v5, FileHandle, v7, a4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)ContextForFile;
}
