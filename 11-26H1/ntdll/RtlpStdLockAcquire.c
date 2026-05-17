/*
 * XREFs of RtlpStdLockAcquire @ 0x18007C4EC
 * Callers:
 *     RtlpStdExtendUpperWatermark @ 0x18007C34C (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18007C424 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x18007C530 (RtlStdReleaseStackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18007C648 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FC45C (RtlpStdExtendLowerWatermark.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(volatile signed __int64 *a1, __int64 a2)
{
  if ( !byte_1801CB8C8 )
    RtlAcquireSRWLockExclusive(a1, a2);
  return 1;
}
