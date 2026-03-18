/*
 * XREFs of EtwpUpdateFileInfoDriverRegistration @ 0x140828208
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14095A8C0 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140B11B94 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     ZwDeviceIoControlFile @ 0x1407234D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverRegistration(int a1)
{
  struct _LIST_ENTRY *v2; // rax
  struct _LIST_ENTRY *v3; // rdi
  NTSTATUS v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+17h] BYREF
  __int64 InputBuffer; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+77h] BYREF

  InputBuffer = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  DestinationString = 0LL;
  v2 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
  v3 = PsAttachSiloToCurrentThread(v2);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\FileInfo");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v4 >= 0 )
  {
    LODWORD(InputBuffer) = 1;
    HIDWORD(InputBuffer) = a1;
    v4 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220020u, &InputBuffer, 8u, 0LL, 0);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  PsDetachSiloFromCurrentThread(v3);
  return (unsigned int)v4;
}
