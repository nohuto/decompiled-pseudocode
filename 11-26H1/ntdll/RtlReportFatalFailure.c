/*
 * XREFs of RtlReportFatalFailure @ 0x180091238
 * Callers:
 *     RtlReportCriticalFailure @ 0x18008F548 (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1800914F8 (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlReportException @ 0x18010B740 (RtlReportException.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
