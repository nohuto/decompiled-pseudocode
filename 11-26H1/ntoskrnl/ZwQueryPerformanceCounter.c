/*
 * XREFs of ZwQueryPerformanceCounter @ 0x1407285E0
 * Callers:
 *     DifZwQueryPerformanceCounterWrapper @ 0x1406B7030 (DifZwQueryPerformanceCounterWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PerformanceCounter);
}
