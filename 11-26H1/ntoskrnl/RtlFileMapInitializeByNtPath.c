/*
 * XREFs of RtlFileMapInitializeByNtPath @ 0x1404FBA70
 * Callers:
 *     AslFileMappingCreate @ 0x140A37E7C (AslFileMappingCreate.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateFile @ 0x140728A60 (ZwCreateFile.c)
 */

__int64 __fastcall RtlFileMapInitializeByNtPath(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  HANDLE v4; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+6Fh] BYREF

  ObjectAttributes.ObjectName = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
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
    *(_BYTE *)(a1 + 48) = 1;
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)v3;
}
