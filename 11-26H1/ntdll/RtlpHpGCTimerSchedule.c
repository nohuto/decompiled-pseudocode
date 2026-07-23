/*
 * XREFs of RtlpHpGCTimerSchedule @ 0x180063B84
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpTlLogGCScheduled @ 0x180064504 (RtlpHpTlLogGCScheduled.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 */

__int64 RtlpHpGCTimerSchedule()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( Timer )
  {
    if ( byte_1801CA908 )
    {
      return (unsigned int)-1073741558;
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, 0) )
    {
      return 259;
    }
    else
    {
      TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
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
