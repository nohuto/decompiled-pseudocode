/*
 * XREFs of ExpSetSystemTime @ 0x140C09314
 * Callers:
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140C08734 (ExUpdateSystemTimeFromCmos.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x140215090 (ExSystemTimeToLocalTime.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetSystemTime @ 0x1403C1C20 (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14043919C (PoNotifySystemTimeSet.c)
 *     RtlTimeToTimeFields @ 0x140451D20 (RtlTimeToTimeFields.c)
 *     HalSetRealTimeClock @ 0x140578300 (HalSetRealTimeClock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 */

__int64 ExpSetSystemTime(char a1, char a2, int a3, ...)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r14
  int v8; // [rsp+28h] [rbp-38h]
  LARGE_INTEGER LocalTime; // [rsp+40h] [rbp-20h] BYREF
  TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+98h] [rbp+38h] BYREF
  va_list SystemTimea; // [rsp+98h] [rbp+38h]
  __int64 *v13; // [rsp+A0h] [rbp+40h]
  va_list va1; // [rsp+A8h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(SystemTimea, a3);
  SystemTime.QuadPart = va_arg(va1, _QWORD);
  v13 = va_arg(va1, __int64 *);
  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( ExpRealTimeIsUniversal )
    LocalTime = SystemTime;
  else
    ExSystemTimeToLocalTime((PLARGE_INTEGER)SystemTimea, &LocalTime);
  KeSetSystemTime((__int64)SystemTimea, (__int64)v13, a2 != 0 ? 3 : 0);
  if ( a1 )
  {
    ExpRefreshTimeZoneInformation(0);
    if ( !ExpSystemIsInCmosMode )
    {
      if ( ExpRealTimeIsUniversal )
        LocalTime = SystemTime;
      else
        ExSystemTimeToLocalTime((PLARGE_INTEGER)SystemTimea, &LocalTime);
      RtlTimeToTimeFields(&LocalTime, &TimeFields);
      HalSetRealTimeClock((unsigned __int8 *)&TimeFields);
    }
  }
  return PoNotifySystemTimeSet(
           (void **)SystemTimea,
           v13,
           a3,
           (int)&LocalTime,
           HIDWORD(CurrentServerSiloGlobals[76].Blink[27].Flink),
           v8,
           ExpSystemIsInCmosMode);
}
