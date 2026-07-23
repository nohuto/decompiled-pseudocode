/*
 * XREFs of CcPVCMDelayedDeleteTimerDpc @ 0x1405B4950
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 */

char __fastcall CcPVCMDelayedDeleteTimerDpc(__int64 a1, __int64 a2)
{
  return ExQueueWorkItemToPartition((_QWORD *)(a2 + 1512), 0, 0xFFFFFFFF);
}
