/*
 * XREFs of RtlFileMapInitializeByNtPath @ 0x18009AAF0
 * Callers:
 *     AslFileMappingCreate @ 0x18009A09C (AslFileMappingCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFileMapInitializeByNtPath(__int64 a1, struct _UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  void *v4; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+C0h] [rbp+6Fh] BYREF

  ObjectAttributes.ObjectName = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 5u, 1u, 0x60u, 0LL, 0);
  if ( v3 < 0 )
  {
    v4 = FileHandle;
  }
  else
  {
    v4 = 0LL;
    *(_QWORD *)a1 = FileHandle;
    v3 = 0;
    FileHandle = 0LL;
    *(_BYTE *)(a1 + 40) = 1;
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)v3;
}
