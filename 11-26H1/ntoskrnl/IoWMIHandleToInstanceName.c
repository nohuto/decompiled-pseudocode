/*
 * XREFs of IoWMIHandleToInstanceName @ 0x140B2E460
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140AE8F00 (IoWMIDeviceObjectToInstanceName.c)
 *     WmipGetFilePDO @ 0x140B2E4D8 (WmipGetFilePDO.c)
 */

NTSTATUS __stdcall IoWMIHandleToInstanceName(PVOID DataBlockObject, HANDLE FileHandle, PUNICODE_STRING InstanceName)
{
  NTSTATUS FilePDO; // ebx
  UNICODE_STRING *v7; // r8
  PDEVICE_OBJECT v8; // rdi
  NTSTATUS v9; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp+20h] BYREF

  DeviceObject = 0LL;
  FilePDO = WmipGetFilePDO(FileHandle, 0LL, &DeviceObject);
  if ( FilePDO >= 0 )
  {
    v7 = InstanceName;
    v8 = DeviceObject;
    v9 = IoWMIDeviceObjectToInstanceName(DataBlockObject, DeviceObject, v7);
    FilePDO = 0;
    if ( v9 < 0 )
      FilePDO = v9;
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  return FilePDO;
}
