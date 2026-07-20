/*
 * XREFs of SmpCheckDirectoryWritable @ 0x140013868
 * Callers:
 *     SmpShuffleMove @ 0x140018644 (SmpShuffleMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpCheckDirectoryWritable(struct _UNICODE_STRING *a1)
{
  unsigned int v1; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+80h] [rbp+10h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.Attributes = 64;
  v1 = NtOpenFile(&FileHandle, 2u, &ObjectAttributes, &IoStatusBlock, 3u, 0);
  if ( FileHandle )
    NtClose(FileHandle);
  return v1;
}
