/*
 * XREFs of ExpTypeToPriority @ 0x140384F80
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemExFromIo @ 0x140203194 (ExQueueWorkItemExFromIo.c)
 *     ExQueueWorkItemEx @ 0x140203FD0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     ExpWorkQueueUpdateHealthMetricsOnRemove @ 0x1406D4EC4 (ExpWorkQueueUpdateHealthMetricsOnRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return (unsigned int)ExpBuiltinPriorities[a1];
}
