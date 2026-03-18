/*
 * XREFs of CmFcpManagerPublishUsageTimerRoutine @ 0x1406E2D30
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x140356AAC (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerPublishUsageTimerRoutine(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 1616));
}
