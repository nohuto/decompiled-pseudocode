/*
 * XREFs of RtlpStdLockAcquire @ 0x18006AD0C
 * Callers:
 *     RtlpStdExtendUpperWatermark @ 0x18006AB6C (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18006AC44 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x18006AD50 (RtlStdReleaseStackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18006AE68 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FBBAC (RtlpStdExtendLowerWatermark.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(_RTL_SRWLOCK *a1)
{
  if ( !byte_1801CA908 )
    RtlAcquireSRWLockExclusive(a1);
  return 1;
}
