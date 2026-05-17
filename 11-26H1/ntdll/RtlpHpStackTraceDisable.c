/*
 * XREFs of RtlpHpStackTraceDisable @ 0x18014F998
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180121038 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x18010C76C (RtlStackDbContextCleanup.c)
 */

struct _TEB *__fastcall RtlpHpStackTraceDisable(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext, a2);
  if ( (dword_1801C7858 & 1) != 0 )
  {
    dword_1801C7858 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup((__int64)&qword_1801C7860);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
