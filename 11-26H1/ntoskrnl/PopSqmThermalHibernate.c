/*
 * XREFs of PopSqmThermalHibernate @ 0x1407E35A0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1404ED080 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1407E33B4 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 188), 0);
}
