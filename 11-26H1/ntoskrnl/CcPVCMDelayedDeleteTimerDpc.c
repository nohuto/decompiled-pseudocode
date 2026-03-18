/*
 * XREFs of CcPVCMDelayedDeleteTimerDpc @ 0x1405B2140
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1403830D0 (ExQueueWorkItemToPartition.c)
 */

char __fastcall CcPVCMDelayedDeleteTimerDpc(__int64 a1, __int64 a2)
{
  return ExQueueWorkItemToPartition((_QWORD *)(a2 + 1512), 0, 0xFFFFFFFF);
}
