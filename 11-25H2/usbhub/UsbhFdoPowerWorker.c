/*
 * XREFs of UsbhFdoPowerWorker @ 0x14004AFC0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoPowerWorkerInternal @ 0x140035468 (UsbhFdoPowerWorkerInternal.c)
 */

NTSTATUS __fastcall UsbhFdoPowerWorker(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return UsbhFdoPowerWorkerInternal(a1, a2);
}
