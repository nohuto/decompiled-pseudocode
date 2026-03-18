/*
 * XREFs of UsbhSyncBusDisconnect @ 0x14003A318
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x14004C548 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x14004CD8C (Usbh_HRS_Queued.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

__int64 __fastcall UsbhSyncBusDisconnect(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 2048, 1111774014, 0LL, 0LL);
  v5 = UsbhDispatch_BusEvent(DeviceObject, a2, v4 + 11);
  Log((__int64)DeviceObject, 2048, 1111774012, 0LL, v5);
  return v6;
}
