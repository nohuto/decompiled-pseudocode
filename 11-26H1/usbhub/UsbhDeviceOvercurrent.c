/*
 * XREFs of UsbhDeviceOvercurrent @ 0x140056760
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDeviceOvercurrentPopup @ 0x14003F924 (UsbhDeviceOvercurrentPopup.c)
 */

NTSTATUS __fastcall UsbhDeviceOvercurrent(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  FdoExt((__int64)DeviceObject);
  return UsbhDeviceOvercurrentPopup(DeviceObject, *(_WORD *)(a2 + 20));
}
