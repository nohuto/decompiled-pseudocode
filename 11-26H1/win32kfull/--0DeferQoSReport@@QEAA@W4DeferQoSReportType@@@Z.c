/*
 * XREFs of ??0DeferQoSReport@@QEAA@W4DeferQoSReportType@@@Z @ 0x14021DD18
 * Callers:
 *     NtUserSetCoveredWindowStates @ 0x14027A070 (NtUserSetCoveredWindowStates.c)
 * Callees:
 *     <none>
 */

QualityOfService *__fastcall DeferQoSReport::DeferQoSReport(QualityOfService *a1, int a2)
{
  *(_BYTE *)a1 = a2 == 0;
  QualityOfService::BeginDeferReport(a1);
  return a1;
}
