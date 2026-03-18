/*
 * XREFs of TtmpAcquireQueueLock @ 0x140761328
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x14075A98C (TtmiWriteEventToAllQueues.c)
 *     TtmiRetrieveEventFromQueue @ 0x140761098 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407611E4 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall TtmpAcquireQueueLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
}
