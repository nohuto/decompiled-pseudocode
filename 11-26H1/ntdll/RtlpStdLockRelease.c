/*
 * XREFs of RtlpStdLockRelease @ 0x18007C50C
 * Callers:
 *     RtlpStdExtendUpperWatermark @ 0x18007C34C (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18007C424 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x18007C530 (RtlStdReleaseStackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18007C648 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FC45C (RtlpStdExtendLowerWatermark.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpStdLockRelease(volatile signed __int64 *a1)
{
  struct _TEB *result; // rax

  if ( !byte_1801CB8C8 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
