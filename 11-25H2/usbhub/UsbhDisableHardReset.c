/*
 * XREFs of UsbhDisableHardReset @ 0x14004C430
 * Callers:
 *     UsbhBusPnpStop @ 0x1400466B0 (UsbhBusPnpStop.c)
 *     UsbhAsyncStop @ 0x14004F794 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x140050220 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051940 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1400329CC (UsbhDispatch_HardResetEvent.c)
 */

__int64 __fastcall UsbhDisableHardReset(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192749, 0LL, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, v1 + 2);
}
