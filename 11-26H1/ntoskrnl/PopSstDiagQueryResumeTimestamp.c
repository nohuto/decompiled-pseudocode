/*
 * XREFs of PopSstDiagQueryResumeTimestamp @ 0x140C08C90
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140AF5348 (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F0B0D0);
}
