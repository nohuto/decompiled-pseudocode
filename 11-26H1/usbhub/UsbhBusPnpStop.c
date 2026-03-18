/*
 * XREFs of UsbhBusPnpStop @ 0x1400461F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 *     UsbhDisableHardReset @ 0x14004BFFC (UsbhDisableHardReset.c)
 */

__int64 __fastcall UsbhBusPnpStop(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v4; // r9

  UsbhDisableHardReset();
  return UsbhDispatch_BusEvent(a1, a2, 3LL, v4);
}
