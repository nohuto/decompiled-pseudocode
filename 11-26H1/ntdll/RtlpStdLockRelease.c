/*
 * XREFs of RtlpStdLockRelease @ 0x18006AD2C
 * Callers:
 *     RtlpStdExtendUpperWatermark @ 0x18006AB6C (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18006AC44 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x18006AD50 (RtlStdReleaseStackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18006AE68 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FBBAC (RtlpStdExtendLowerWatermark.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpStdLockRelease(_RTL_SRWLOCK *a1)
{
  if ( !byte_1801CA908 )
    RtlReleaseSRWLockExclusive(a1);
}
