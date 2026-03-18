/*
 * XREFs of TtmpReleaseQueueLock @ 0x1407614A0
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x14075A98C (TtmiWriteEventToAllQueues.c)
 *     TtmiRetrieveEventFromQueue @ 0x140761098 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407611E4 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 */

void __fastcall TtmpReleaseQueueLock(__int64 a1)
{
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
}
