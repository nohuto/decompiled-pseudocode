/*
 * XREFs of HalpUtcTimeToAcpiRealTime @ 0x140B28B24
 * Callers:
 *     HalSetRealTimeClock @ 0x14057A830 (HalSetRealTimeClock.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x1402153C0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     ExRealTimeIsUniversal @ 0x1404F2620 (ExRealTimeIsUniversal.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140B28C70 (HalpQueryAcpiRealTimeClock.c)
 */

__int64 __fastcall HalpUtcTimeToAcpiRealTime(PLARGE_INTEGER SystemTime, __int16 *OutputBuffer)
{
  __int64 v4; // rax
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp+18h] BYREF

  OutputBuffer[5] = 2047;
  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  HalpQueryAcpiRealTimeClock(OutputBuffer);
  v4 = OutputBuffer[5];
  if ( v4 < -1440 || v4 > 1440 )
  {
    if ( ExRealTimeIsUniversal() )
    {
      OutputBuffer[5] = 0;
      *((_BYTE *)OutputBuffer + 12) = 0;
      LocalTime = *SystemTime;
    }
    else
    {
      OutputBuffer[5] = (__int16)MEMORY[0xFFFFF78000000020] / 17920;
      ExSystemTimeToLocalTime(SystemTime, &LocalTime);
      if ( MEMORY[0xFFFFF78000000240] )
      {
        if ( MEMORY[0xFFFFF78000000240] == 1 )
        {
          *((_BYTE *)OutputBuffer + 12) = 1;
        }
        else if ( MEMORY[0xFFFFF78000000240] == 2 )
        {
          *((_BYTE *)OutputBuffer + 12) = 3;
        }
      }
      else
      {
        *((_BYTE *)OutputBuffer + 12) = 0;
      }
    }
  }
  else
  {
    LocalTime.QuadPart = SystemTime->QuadPart - 600000000 * v4;
  }
  RtlTimeToTimeFields(&LocalTime, &TimeFields);
  *OutputBuffer = TimeFields.Year;
  *((_BYTE *)OutputBuffer + 2) = TimeFields.Month;
  *((_BYTE *)OutputBuffer + 3) = TimeFields.Day;
  *((_BYTE *)OutputBuffer + 4) = TimeFields.Hour;
  *((_BYTE *)OutputBuffer + 5) = TimeFields.Minute;
  *((_BYTE *)OutputBuffer + 6) = TimeFields.Second;
  OutputBuffer[4] = TimeFields.Milliseconds;
  return 0LL;
}
