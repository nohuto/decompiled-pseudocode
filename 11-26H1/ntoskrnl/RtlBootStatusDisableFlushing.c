/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x140532BD0
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x1407CC060 (PopRecordLongPowerButtonPressDetected.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlBootStatusDisableFlushing(char a1)
{
  LOBYTE(NormalizationListLock.KernelStack) = a1;
}
