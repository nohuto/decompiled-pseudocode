/*
 * XREFs of UsbhBusPnpStop @ 0x1400466B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 *     UsbhDisableHardReset @ 0x14004C430 (UsbhDisableHardReset.c)
 */

__int64 __fastcall UsbhBusPnpStop(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  UsbhDisableHardReset();
  return UsbhDispatch_BusEvent(DeviceObject, a2, 3);
}
