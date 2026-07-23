/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x1406D4AC0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&ExSaPageGroupDescriptorArrayLock.SchedulerApcFill5[40], DelayedWorkQueue);
}
