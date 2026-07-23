/*
 * XREFs of KiComputeDispatchInterruptCostDpcRoutine @ 0x1405ED2C0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG __fastcall KiComputeDispatchInterruptCostDpcRoutine(__int64 a1, __int64 a2)
{
  *(LARGE_INTEGER *)(a2 + 72) = KeQueryPerformanceCounter(0LL);
  return KeSetEvent((PRKEVENT)(a2 + 80), 0, 0);
}
