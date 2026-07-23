/*
 * XREFs of PopPushPowerStateTransitionRecord @ 0x140C100F4
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     PoPushPowerStateTransitionRecord @ 0x14060A1E0 (PoPushPowerStateTransitionRecord.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopInitSystemSleeperThread @ 0x140A77BF0 (PopInitSystemSleeperThread.c)
 * Callees:
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060A1F8 (PopPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecord(void *a1, void *a2)
{
  return PopPushPowerStateTransitionRecordWithCallback(a1, a2, 0LL, 0LL, 0LL);
}
