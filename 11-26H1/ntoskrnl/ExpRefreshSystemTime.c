/*
 * XREFs of ExpRefreshSystemTime @ 0x14083C564
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x1402153C0 (ExSystemTimeToLocalTime.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetSystemTime @ 0x1403CBB20 (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x140427DFC (PoNotifySystemTimeSet.c)
 *     HalQueryRealTimeClock @ 0x1404495B0 (HalQueryRealTimeClock.c)
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x14044A410 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x1404C0810 (ExLocalTimeToSystemTime.c)
 *     HalSetRealTimeClock @ 0x14057A830 (HalSetRealTimeClock.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 */

__int64 ExpRefreshSystemTime()
{
  struct _LIST_ENTRY *Blink; // rbx
  __int64 v1; // rcx
  unsigned __int8 v2; // di
  int Flink_high; // esi
  LARGE_INTEGER v4; // rax
  int v6; // [rsp+28h] [rbp-28h]
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+70h] [rbp+20h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+78h] [rbp+28h] BYREF
  LARGE_INTEGER v10; // [rsp+80h] [rbp+30h] BYREF

  SystemTime.QuadPart = 0LL;
  TimeFields = 0LL;
  v10.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  ExAcquireTimeRefreshLockExclusive(v1);
  v2 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      Flink_high = HIDWORD(Blink[27].Flink);
      if ( (unsigned __int8)ExpRefreshTimeZoneInformation(0LL) )
      {
        if ( Flink_high != HIDWORD(Blink[27].Flink) )
        {
          v4.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !ExpRealTimeIsUniversal )
          {
            if ( v2 )
            {
              ExLocalTimeToSystemTime(&Time, &v10);
              KeSetSystemTime((__int64)&v10, (__int64)&SystemTime, 0);
              goto LABEL_9;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock((unsigned __int8 *)&TimeFields);
            v4 = SystemTime;
          }
          v10 = v4;
LABEL_9:
          PoNotifySystemTimeSet(
            (__int64 *)&v10,
            (__int64 *)&SystemTime,
            3,
            (int)&Time,
            HIDWORD(Blink[27].Flink),
            v6,
            v2);
        }
      }
    }
  }
  return ExReleaseTimeRefreshLockExclusive();
}
