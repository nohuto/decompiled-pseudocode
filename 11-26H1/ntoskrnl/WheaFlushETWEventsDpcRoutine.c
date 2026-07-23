/*
 * XREFs of WheaFlushETWEventsDpcRoutine @ 0x1406DB180
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem(&stru_140EFE500, DelayedWorkQueue);
}
