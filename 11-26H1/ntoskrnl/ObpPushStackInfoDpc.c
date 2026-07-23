/*
 * XREFs of ObpPushStackInfoDpc @ 0x140602600
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void ObpPushStackInfoDpc()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&ObpStackTraceLock.SuspendEvent.Header.WaitListHead, DelayedWorkQueue);
}
