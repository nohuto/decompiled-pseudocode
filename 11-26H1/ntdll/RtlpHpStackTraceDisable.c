/*
 * XREFs of RtlpHpStackTraceDisable @ 0x18014F848
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180120DE8 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x18010C2BC (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801C68A8 & 1) != 0 )
  {
    dword_1801C68A8 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup((__int64)&qword_1801C68B0);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
