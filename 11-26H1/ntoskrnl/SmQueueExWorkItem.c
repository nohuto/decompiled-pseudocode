/*
 * XREFs of SmQueueExWorkItem @ 0x1404DFE54
 * Callers:
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1404DFDD0 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 */

void __fastcall SmQueueExWorkItem(struct _WORK_QUEUE_ITEM *a1, WORK_QUEUE_TYPE a2, __int64 a3)
{
  if ( a3 )
    ExQueueWorkItemToPartition(a1, a2, 0xFFFFFFFF);
  else
    ExQueueWorkItem(a1, a2);
}
