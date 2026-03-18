/*
 * XREFs of EngQueryPerformanceFrequency @ 0x1401F3A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngQueryPerformanceFrequency(LONGLONG *pFrequency)
{
  KeQueryPerformanceCounter((PLARGE_INTEGER)pFrequency);
}
