/*
 * XREFs of IopCreateRootEnumeratedDeviceObject @ 0x1407AD67C
 * Callers:
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     IopFindLegacyDeviceNode @ 0x140A8B778 (IopFindLegacyDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x1409FEBC0 (IoCreateDevice.c)
 */

__int64 __fastcall IopCreateRootEnumeratedDeviceObject(PDEVICE_OBJECT *a1)
{
  NTSTATUS v2; // ebx
  PDEVICE_OBJECT v3; // rdx
  struct _DEVICE_OBJECT *v4; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  v2 = IoCreateDevice(PnpDriverObject, 4u, 0LL, 4u, 0x80u, 0, &DeviceObject);
  if ( v2 < 0 )
  {
    v4 = DeviceObject;
  }
  else
  {
    v3 = DeviceObject;
    *a1 = DeviceObject;
    *(_DWORD *)v3->DeviceExtension = 0;
    v4 = 0LL;
  }
  if ( v4 )
    IoDeleteDevice(v4);
  return (unsigned int)v2;
}
