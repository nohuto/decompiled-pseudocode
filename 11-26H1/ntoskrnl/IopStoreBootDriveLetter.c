/*
 * XREFs of IopStoreBootDriveLetter @ 0x140CC4270
 * Callers:
 *     IopMarkBootPartition @ 0x140CC3960 (IopMarkBootPartition.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     RtlWriteRegistryValue @ 0x140A10F00 (RtlWriteRegistryValue.c)
 *     IoGetDeviceObjectPointer @ 0x140A30960 (IoGetDeviceObjectPointer.c)
 *     RtlGetHostNtSystemRoot @ 0x140B48FB0 (RtlGetHostNtSystemRoot.c)
 */

__int64 __fastcall IopStoreBootDriveLetter(__int64 a1)
{
  NTSTATUS DeviceObjectPointer; // ebx
  IRP *v3; // rax
  UNICODE_STRING *HostNtSystemRoot; // rdi
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+Fh] BYREF
  struct _KEVENT Object; // [rsp+78h] [rbp+1Fh] BYREF
  char OutputBuffer; // [rsp+C8h] [rbp+6Fh] BYREF
  int ValueData; // [rsp+D0h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D8h] [rbp+7Fh] BYREF

  ValueData = 0;
  DeviceObject = 0LL;
  DestinationString = 0LL;
  OutputBuffer = 0;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  FileObject = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.SignalState = 0;
    v3 = IoBuildDeviceIoControlRequest(0x6DC044u, DeviceObject, 0LL, 0, &OutputBuffer, 1u, 0, &Object, &IoStatusBlock);
    if ( v3 )
    {
      DeviceObjectPointer = IofCallDriver(DeviceObject, v3);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( DeviceObjectPointer >= 0 )
      {
        HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
        HostNtSystemRoot->MaximumLength = 520;
        HostNtSystemRoot->Buffer = (wchar_t *)(MmWriteableSharedUserData + 48);
        DeviceObjectPointer = RtlUnicodeStringPrintf(HostNtSystemRoot, L"%C:%S", (unsigned int)OutputBuffer, a1);
        if ( DeviceObjectPointer >= 0 )
        {
          HostNtSystemRoot->Length -= 2;
          HostNtSystemRoot->Buffer[(unsigned __int64)HostNtSystemRoot->Length >> 1] = 0;
          ValueData = OutputBuffer;
          DeviceObjectPointer = RtlWriteRegistryValue(2u, 0LL, L"SystemBootDriveLetter", 4u, &ValueData, 4u);
        }
      }
    }
    else
    {
      DeviceObjectPointer = -1073741670;
    }
  }
  if ( FileObject )
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  return (unsigned int)DeviceObjectPointer;
}
