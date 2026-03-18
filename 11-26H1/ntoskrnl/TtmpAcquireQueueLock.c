/*
 * XREFs of TtmpAcquireQueueLock @ 0x1407ED230
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x1407E6BDC (TtmiWriteEventToAllQueues.c)
 *     TtmiRetrieveEventFromQueue @ 0x1407ECFA0 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407ED0EC (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall TtmpAcquireQueueLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
}
