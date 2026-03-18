/*
 * XREFs of PopPushPowerStateTransitionRecord @ 0x140C09EE4
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     PoPushPowerStateTransitionRecord @ 0x140607684 (PoPushPowerStateTransitionRecord.c)
 *     PopInitSystemSleeperThread @ 0x140A03F00 (PopInitSystemSleeperThread.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060769C (PopPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecord(void *a1, void *a2)
{
  return PopPushPowerStateTransitionRecordWithCallback(a1, a2, 0LL, 0LL, 0LL);
}
