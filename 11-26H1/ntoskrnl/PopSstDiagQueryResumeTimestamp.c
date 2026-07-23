/*
 * XREFs of PopSstDiagQueryResumeTimestamp @ 0x140C0EEA0
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140AF79E8 (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PopDirectedDripsDiagLock.WriteOperationCount);
}
