/*
 * XREFs of RtlpHpStackTraceEnable @ 0x180122CF0
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180121038 (RtlpHpStackTraceConfig.c)
 *     RtlpHpSetLowFragHeapGlobalFlags @ 0x180145334 (RtlpHpSetLowFragHeapGlobalFlags.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpStackTraceEnable(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext, a2);
  if ( (dword_1801C7858 & 1) == 0 )
  {
    memset_thunk_772440563353939046(&qword_1801C7860, 0, 0x48uLL);
    dword_1801C7858 = 3;
    qword_1801C7860 = 0LL;
    qword_1801C7890 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_1801C7898 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_1801C7868 = 0LL;
    qword_1801C7870 = 0LL;
    qword_1801C7878 = 0LL;
    qword_1801C7888 = 0LL;
    qword_1801C7880 = 0LL;
    qword_1801C78A0 = 0LL;
    if ( NtCurrentPeb()->ProcessHeap )
      RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpHpStackTraceHeapEnable, 1LL, 0);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
