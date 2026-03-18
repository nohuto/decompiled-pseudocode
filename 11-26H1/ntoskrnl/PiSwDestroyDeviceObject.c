/*
 * XREFs of PiSwDestroyDeviceObject @ 0x140A7B2DC
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14090C0D0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140910204 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x140A7B310 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
