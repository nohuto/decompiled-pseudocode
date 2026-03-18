/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1405306D0
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x1407C8FC0 (PopRecordLongPowerButtonPressDetected.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlBootStatusDisableFlushing(char a1)
{
  LOBYTE(NormalizationListLock.StateSaveArea) = a1;
}
