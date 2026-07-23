/*
 * XREFs of RtlpHpStackTraceEnable @ 0x180122A60
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180120DE8 (RtlpHpStackTraceConfig.c)
 *     RtlpHpSetLowFragHeapGlobalFlags @ 0x1801451E4 (RtlpHpSetLowFragHeapGlobalFlags.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801C68A8 & 1) == 0 )
  {
    memset_thunk_772440563353939046(&qword_1801C68B0, 0, 0x48uLL);
    dword_1801C68A8 = 3;
    qword_1801C68B0 = 0LL;
    qword_1801C68E0 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_1801C68E8 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_1801C68B8 = 0LL;
    qword_1801C68C0 = 0LL;
    qword_1801C68C8 = 0LL;
    qword_1801C68D8 = 0LL;
    stru_1801C68D0.0 = 0LL;
    qword_1801C68F0 = 0LL;
    if ( NtCurrentPeb()->ProcessHeap )
      RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpHpStackTraceHeapEnable, 1LL, 0);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
