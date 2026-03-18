/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x1406D0A90
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&ExSaPageGroupDescriptorArrayLock.648, DelayedWorkQueue);
}
