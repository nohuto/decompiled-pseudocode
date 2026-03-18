/*
 * XREFs of UsbhBusAdd @ 0x140045FE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhBusAdd(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  UsbhDispatch_BusEvent(a1, a2, 1);
  return 0LL;
}
