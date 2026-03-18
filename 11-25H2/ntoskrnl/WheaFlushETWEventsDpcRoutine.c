/*
 * XREFs of WheaFlushETWEventsDpcRoutine @ 0x140651F20
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem(&stru_140EF7680, DelayedWorkQueue);
}
