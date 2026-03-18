/*
 * XREFs of PiPnpRtlOperationListAcquireSharedLock @ 0x140A864B0
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN PiPnpRtlOperationListAcquireSharedLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
}
