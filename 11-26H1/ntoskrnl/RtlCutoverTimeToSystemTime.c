/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x140800DE4
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x1408358B8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x140451D20 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x1404522E0 (RtlTimeFieldsToTime.c)
 */

char __fastcall RtlCutoverTimeToSystemTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time, PLARGE_INTEGER a3)
{
  __int16 Day; // r14
  __int16 Weekday; // r15
  __int16 v8; // bx
  __int16 v9; // r15
  __int16 v10; // si
  TIME_FIELDS v11; // [rsp+20h] [rbp-30h] BYREF
  TIME_FIELDS v12; // [rsp+30h] [rbp-20h] BYREF
  TIME_FIELDS TimeFieldsa; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Timea; // [rsp+80h] [rbp+30h] BYREF

  TimeFieldsa = 0LL;
  RtlTimeToTimeFields(a3, &TimeFieldsa);
  if ( TimeFields->Year )
  {
    if ( RtlTimeFieldsToTime(TimeFields, Time) )
      return 1;
  }
  else
  {
    Day = TimeFields->Day;
    v11.Day = 0;
    Timea.QuadPart = 0LL;
    v12 = 0LL;
    if ( Day <= 5 )
    {
      if ( Day )
      {
        Weekday = TimeFields->Weekday;
        v11.Year = TimeFieldsa.Year;
        v11.Month = TimeFields->Month;
        v8 = 1;
        v11.Hour = TimeFields->Hour;
        v11.Minute = TimeFields->Minute;
        v11.Second = TimeFields->Second;
        v11.Milliseconds = TimeFields->Milliseconds;
        v11.Day = 1;
        v11.Weekday = 0;
        if ( RtlTimeFieldsToTime(&v11, &Timea) )
        {
          RtlTimeToTimeFields(&Timea, &v12);
          if ( v12.Weekday <= Weekday )
          {
            if ( v12.Weekday < Weekday )
              v8 = Weekday - v12.Weekday + 1;
          }
          else
          {
            v8 = Weekday - v12.Weekday + 8;
          }
          v9 = v8;
          v10 = 1;
          if ( Day > 1 )
          {
            do
            {
              v8 += 7;
              v11.Day = v8;
              if ( !RtlTimeFieldsToTime(&v11, &Timea) )
                break;
              RtlTimeToTimeFields(&Timea, &v12);
              v9 = v12.Day;
              ++v10;
            }
            while ( v10 < Day );
          }
          v11.Day = v9;
          if ( RtlTimeFieldsToTime(&v11, &Timea) )
          {
            *Time = Timea;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
