/*
 * XREFs of UsbhDeviceOvercurrent @ 0x140056200
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDeviceOvercurrentPopup @ 0x14003FE34 (UsbhDeviceOvercurrentPopup.c)
 */

NTSTATUS __fastcall UsbhDeviceOvercurrent(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  FdoExt((__int64)DeviceObject);
  return UsbhDeviceOvercurrentPopup(DeviceObject, *(_WORD *)(a2 + 20));
}
