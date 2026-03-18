/*
 * XREFs of WheaIsCriticalState @ 0x1403DFCC0
 * Callers:
 *     WheaReportHwError @ 0x1403DDD80 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x1403DFC68 (WheapGenerateETWEvents.c)
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 */

bool WheaIsCriticalState()
{
  return KeGetEffectiveIrql() >= 2u && WheapCriticalStateRefCount > 0;
}
