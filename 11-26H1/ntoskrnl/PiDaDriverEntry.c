/*
 * XREFs of PiDaDriverEntry @ 0x140CCCC50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 */

__int64 __fastcall PiDaDriverEntry(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING DeviceName; // [rsp+40h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)PiDaDispatch;
  DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)PiDaDispatch;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)PiDaDispatch;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)PiDaDispatch;
  *(_QWORD *)&DeviceName.Length = 2359330LL;
  memset_0(&FastIoDispatch, 0, 0xE0uLL);
  FastIoDispatch = 224;
  qword_140F82A90 = (__int64)PiDaFastIoDispatch;
  DriverObject->FastIoDispatch = (PFAST_IO_DISPATCH)&FastIoDispatch;
  DeviceName.Buffer = L"\\Device\\DeviceApi";
  v2 = IoCreateDevice(DriverObject, 0, &DeviceName, 0x22u, 0x20000u, 0, &DeviceObject);
  if ( v2 < 0 )
  {
    if ( DeviceObject )
      ObfDereferenceObjectWithTag(DeviceObject, 0x746C6644u);
  }
  else
  {
    DeviceObject->Flags &= ~0x80u;
  }
  return (unsigned int)v2;
}
