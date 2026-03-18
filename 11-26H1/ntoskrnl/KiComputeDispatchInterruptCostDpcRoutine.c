/*
 * XREFs of KiComputeDispatchInterruptCostDpcRoutine @ 0x1405EA950
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

LONG __fastcall KiComputeDispatchInterruptCostDpcRoutine(__int64 a1, __int64 a2)
{
  *(LARGE_INTEGER *)(a2 + 72) = KeQueryPerformanceCounter(0LL);
  return KeSetEvent((PRKEVENT)(a2 + 80), 0, 0);
}
