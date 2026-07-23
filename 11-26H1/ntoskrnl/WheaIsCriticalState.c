/*
 * XREFs of WheaIsCriticalState @ 0x1403E2EB0
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x1403E2E58 (WheapGenerateETWEvents.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 */

bool WheaIsCriticalState()
{
  return KeGetEffectiveIrql() >= 2u && WheapCriticalStateRefCount > 0;
}
