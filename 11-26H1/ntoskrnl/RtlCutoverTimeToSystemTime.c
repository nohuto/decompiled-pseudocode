/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x140806884
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x14083BAF8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x14044A410 (RtlTimeFieldsToTime.c)
 */

BOOLEAN __cdecl RtlCutoverTimeToSystemTime(
        PTIME_FIELDS CutoverTime,
        PLARGE_INTEGER SystemTime,
        PLARGE_INTEGER CurrentSystemTime,
        BOOLEAN ThisYear)
{
  __int16 Day; // r14
  __int16 Weekday; // r15
  __int16 v9; // bx
  __int16 v10; // r15
  __int16 v11; // si
  _TIME_FIELDS v12; // [rsp+20h] [rbp-30h] BYREF
  _TIME_FIELDS v13; // [rsp+30h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+80h] [rbp+30h] BYREF

  TimeFields = 0LL;
  RtlTimeToTimeFields(CurrentSystemTime, &TimeFields);
  if ( CutoverTime->Year )
  {
    if ( RtlTimeFieldsToTime(CutoverTime, SystemTime) )
      return 1;
  }
  else
  {
    Day = CutoverTime->Day;
    v12.Day = 0;
    Time.QuadPart = 0LL;
    v13 = 0LL;
    if ( Day <= 5 )
    {
      if ( Day )
      {
        Weekday = CutoverTime->Weekday;
        v12.Year = TimeFields.Year;
        v12.Month = CutoverTime->Month;
        v9 = 1;
        v12.Hour = CutoverTime->Hour;
        v12.Minute = CutoverTime->Minute;
        v12.Second = CutoverTime->Second;
        v12.Milliseconds = CutoverTime->Milliseconds;
        v12.Day = 1;
        v12.Weekday = 0;
        if ( RtlTimeFieldsToTime(&v12, &Time) )
        {
          RtlTimeToTimeFields(&Time, &v13);
          if ( v13.Weekday <= Weekday )
          {
            if ( v13.Weekday < Weekday )
              v9 = Weekday - v13.Weekday + 1;
          }
          else
          {
            v9 = Weekday - v13.Weekday + 8;
          }
          v10 = v9;
          v11 = 1;
          if ( Day > 1 )
          {
            do
            {
              v9 += 7;
              v12.Day = v9;
              if ( !RtlTimeFieldsToTime(&v12, &Time) )
                break;
              RtlTimeToTimeFields(&Time, &v13);
              v10 = v13.Day;
              ++v11;
            }
            while ( v11 < Day );
          }
          v12.Day = v10;
          if ( RtlTimeFieldsToTime(&v12, &Time) )
          {
            *SystemTime = Time;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
