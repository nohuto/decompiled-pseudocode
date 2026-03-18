/*
 * XREFs of ExpGetPartitionTableInfo @ 0x140A9594C
 * Callers:
 *     ExpDiskEnumCallback @ 0x1406CFDB0 (ExpDiskEnumCallback.c)
 *     ExpFindDiskSignature @ 0x140A9578C (ExpFindDiskSignature.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x1407234D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpGetPartitionTableInfo(PCWSTR SourceString, _QWORD *a2)
{
  NTSTATUS result; // eax
  ULONG OutputBufferLength; // ebx
  void *OutputBuffer; // rax
  void *v6; // rsi
  NTSTATUS v7; // edi
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+77h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
  if ( result >= 0 )
  {
    for ( OutputBufferLength = 2352; ; OutputBufferLength *= 2 )
    {
      OutputBuffer = (void *)ExAllocatePool2(0x40uLL);
      v6 = OutputBuffer;
      if ( !OutputBuffer )
      {
        ZwClose(FileHandle);
        return -1073741670;
      }
      v7 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x70050u,
             0LL,
             0,
             OutputBuffer,
             OutputBufferLength);
      if ( v7 >= 0 )
        break;
      ExFreePoolWithTag(v6, 0);
      if ( v7 != -1073741789 )
        goto LABEL_8;
    }
    *a2 = v6;
LABEL_8:
    ZwClose(FileHandle);
    return v7;
  }
  return result;
}
