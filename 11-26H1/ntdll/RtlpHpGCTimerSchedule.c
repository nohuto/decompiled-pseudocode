/*
 * XREFs of RtlpHpGCTimerSchedule @ 0x1800961E4
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800DF844 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpHpTlLogGCScheduled @ 0x180096B64 (RtlpHpTlLogGCScheduled.c)
 */

__int64 RtlpHpGCTimerSchedule()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1801C7268 )
  {
    if ( byte_1801CB8C8 )
    {
      return (unsigned int)-1073741558;
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, 0) )
    {
      return 259;
    }
    else
    {
      TpSetTimerEx(qword_1801C7268, (__int64)&qword_1801C7270, 0, 1000);
      if ( (RtlpHpHeapFeatures & 0x10) != 0 )
        RtlpHpTlLogGCScheduled();
    }
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v0;
}
