/*
 * XREFs of SmQueueExWorkItem @ 0x1404E69B4
 * Callers:
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1404E6930 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1403830D0 (ExQueueWorkItemToPartition.c)
 */

void __fastcall SmQueueExWorkItem(struct _WORK_QUEUE_ITEM *a1, WORK_QUEUE_TYPE a2, __int64 a3)
{
  if ( a3 )
    ExQueueWorkItemToPartition(a1, a2, 0xFFFFFFFF);
  else
    ExQueueWorkItem(a1, a2);
}
