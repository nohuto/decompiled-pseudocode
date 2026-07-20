/*
 * XREFs of SmpDeleteFile @ 0x140014588
 * Callers:
 *     SmpGetDumpDestination @ 0x140011F7C (SmpGetDumpDestination.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140017924 (SmpReplaceSystemHiveOnSoftReboot.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpDeleteTargetFile @ 0x140014684 (SmpDeleteTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140018268 (SmpSetTargetAttributes.c)
 */

__int64 __fastcall SmpDeleteFile(struct _UNICODE_STRING *a1)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  __int64 Buffer; // r8
  unsigned int v5; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+80h] [rbp+10h] BYREF

  ObjectAttributes.ObjectName = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = NtOpenFile(&FileHandle, 0x10100u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4040u);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( a1 )
      Buffer = (__int64)a1->Buffer;
    else
      Buffer = 0LL;
    v5 = 11963;
LABEL_6:
    SmpLogFailureString((__int64)"SmpDeleteFile", v5, Buffer, v2);
    goto LABEL_13;
  }
  v2 = SmpSetTargetAttributes(FileHandle, 128LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( a1 )
      Buffer = (__int64)a1->Buffer;
    else
      Buffer = 0LL;
    v5 = 11976;
    goto LABEL_6;
  }
  v3 = SmpDeleteTargetFile(FileHandle);
LABEL_13:
  if ( FileHandle )
    NtClose(FileHandle);
  return v3;
}
