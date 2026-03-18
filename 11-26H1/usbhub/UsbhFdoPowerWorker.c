/*
 * XREFs of UsbhFdoPowerWorker @ 0x14004AB70
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoPowerWorkerInternal @ 0x1400336E8 (UsbhFdoPowerWorkerInternal.c)
 */

NTSTATUS __fastcall UsbhFdoPowerWorker(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return UsbhFdoPowerWorkerInternal(a1, a2);
}
