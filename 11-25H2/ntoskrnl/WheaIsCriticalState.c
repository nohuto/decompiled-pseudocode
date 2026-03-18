/*
 * XREFs of WheaIsCriticalState @ 0x140478350
 * Callers:
 *     WheaReportHwError @ 0x140353D30 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x1404782FC (WheapGenerateETWEvents.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 */

bool WheaIsCriticalState()
{
  return ObGetCurrentIrql() >= 2u && WheapCriticalStateRefCount > 0;
}
