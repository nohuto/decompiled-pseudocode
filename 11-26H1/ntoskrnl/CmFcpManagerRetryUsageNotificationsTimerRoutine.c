/*
 * XREFs of CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x1406E2D50
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x140356AAC (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerRetryUsageNotificationsTimerRoutine(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 568));
}
