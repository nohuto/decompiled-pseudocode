/*
 * XREFs of ExpTypeToPriority @ 0x1403831D0
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemExFromIo @ 0x1402030B4 (ExQueueWorkItemExFromIo.c)
 *     ExQueueWorkItemEx @ 0x140203EF0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPartition @ 0x1403830D0 (ExQueueWorkItemToPartition.c)
 *     ExpWorkQueueUpdateHealthMetricsOnRemove @ 0x1406D0E94 (ExpWorkQueueUpdateHealthMetricsOnRemove.c)
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
