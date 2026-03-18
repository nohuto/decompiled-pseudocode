/*
 * XREFs of TtmpReleaseQueueLock @ 0x1407ED3A0
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x1407E6BDC (TtmiWriteEventToAllQueues.c)
 *     TtmiRetrieveEventFromQueue @ 0x1407ECFA0 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407ED0EC (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void __fastcall TtmpReleaseQueueLock(__int64 a1)
{
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
}
