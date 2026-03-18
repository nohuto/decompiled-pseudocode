/*
 * XREFs of WheaFlushETWEventsDpcRoutine @ 0x1406D6FF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpCallbackListLock.SuspendEvent.Header.WaitListHead, DelayedWorkQueue);
}
