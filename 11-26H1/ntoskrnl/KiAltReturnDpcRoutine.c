/*
 * XREFs of KiAltReturnDpcRoutine @ 0x1405FF750
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void KiAltReturnDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&KsepShimDbLock.320, CriticalWorkQueue);
}
