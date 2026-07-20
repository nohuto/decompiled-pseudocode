/*
 * XREFs of SmpCheckDirectoryWritable @ 0x140013498
 * Callers:
 *     SmpShuffleMove @ 0x140018310 (SmpShuffleMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpCheckDirectoryWritable(struct _UNICODE_STRING *a1)
{
  unsigned int v1; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+80h] [rbp+10h] BYREF

  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenFile(&FileHandle, 2u, &ObjectAttributes, &IoStatusBlock, 3u, 0);
  if ( FileHandle )
    NtClose(FileHandle);
  return v1;
}
