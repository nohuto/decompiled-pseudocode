/*
 * XREFs of KiAltReturnDpcRoutine @ 0x1405FCD00
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void KiAltReturnDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&KsepShimDbLock.Timer.Header.WaitListHead.Blink, CriticalWorkQueue);
}
