/*
 * XREFs of SmscpIsDebuggerPresent @ 0x14001943C
 * Callers:
 *     SmscpParseArgs @ 0x140002180 (SmscpParseArgs.c)
 * Callees:
 *     <none>
 */

__int64 SmscpIsDebuggerPresent()
{
  NTSTATUS v0; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+80h] [rbp+10h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L":<";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( v0 >= 0 )
    NtClose(FileHandle);
  return (unsigned int)v0;
}
