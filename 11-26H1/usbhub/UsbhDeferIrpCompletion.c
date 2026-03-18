/*
 * XREFs of UsbhDeferIrpCompletion @ 0x14003B100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhDeferIrpCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, struct _KEVENT *Context)
{
  KeSetEvent(Context, 1, 0);
  return 3221225494LL;
}
