/*
 * XREFs of BiGetPartitionVhdFilePathFromUnicodeString @ 0x140B1E470
 * Callers:
 *     BiGetPartitionVhdFilePath @ 0x140B1E440 (BiGetPartitionVhdFilePath.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1407280A0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     BiTranslateSymbolicLinkFile @ 0x140898FAC (BiTranslateSymbolicLinkFile.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

ULONG *__fastcall BiGetPartitionVhdFilePathFromUnicodeString(UNICODE_STRING *a1)
{
  ULONG *v1; // rbx
  ULONG OutputBufferLength; // esi
  int i; // r14d
  ULONG *OutputBuffer; // rax
  ULONG *v5; // rdi
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  int InputBuffer; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONG *v12; // [rsp+D0h] [rbp+77h] BYREF

  ObjectAttributes.ObjectName = a1;
  InputBuffer = 0;
  v12 = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v1 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  if ( ZwOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) >= 0 )
  {
    OutputBufferLength = 520;
    for ( i = 1; ; i = 2 )
    {
      OutputBuffer = (ULONG *)ExAllocatePool2(0x102uLL);
      v1 = OutputBuffer;
      v5 = OutputBuffer;
      if ( !OutputBuffer )
        break;
      InputBuffer = 1;
      v6 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x2D5928u,
             &InputBuffer,
             4u,
             OutputBuffer,
             OutputBufferLength);
      if ( v6 != -1073741789 )
      {
        if ( v6 < 0 )
        {
LABEL_6:
          ExFreePoolWithTag(v1, 0x4B444342u);
          v1 = 0LL;
          break;
        }
        if ( (int)BiTranslateSymbolicLinkFile((wchar_t *)v5, (wchar_t **)&v12) >= 0 )
        {
          ExFreePoolWithTag(v5, 0x4B444342u);
          v1 = v12;
        }
        break;
      }
      if ( i != 1 )
        goto LABEL_6;
      OutputBufferLength = *v1;
      ExFreePoolWithTag(v1, 0x4B444342u);
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return v1;
}
