/*
 * XREFs of UsbhPdoPowerWorker @ 0x14004B8C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoPowerWorkerInternal @ 0x14003404C (UsbhPdoPowerWorkerInternal.c)
 */

__int64 __fastcall UsbhPdoPowerWorker(ULONG_PTR a1, IRP *a2)
{
  return UsbhPdoPowerWorkerInternal(a1, a2);
}
