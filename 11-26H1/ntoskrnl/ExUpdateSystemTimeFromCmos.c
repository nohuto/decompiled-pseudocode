/*
 * XREFs of ExUpdateSystemTimeFromCmos @ 0x140C08734
 * Callers:
 *     ExpTimeRefreshWork @ 0x140BFF300 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140C15460 (KdpTimeSlipWork.c)
 * Callees:
 *     HalQueryRealTimeClock @ 0x140451480 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1404522E0 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x1404C6E60 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x140C09314 (ExpSetSystemTime.c)
 */

char __fastcall ExUpdateSystemTimeFromCmos(char a1, unsigned int a2)
{
  unsigned int v2; // ebx
  char result; // al
  LARGE_INTEGER v5; // r9
  unsigned __int64 v6; // rdx
  LARGE_INTEGER Time; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF

  SystemTime.QuadPart = 0LL;
  v2 = a2;
  Time.QuadPart = 0LL;
  if ( !a2 )
    v2 = ExpMaxTimeSeperationBeforeCorrect;
  TimeFields = 0LL;
  result = HalQueryRealTimeClock((__int64)&TimeFields);
  if ( result )
  {
    result = RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( result )
    {
      if ( ExpRealTimeIsUniversal )
      {
        v5 = Time;
      }
      else
      {
        ExLocalTimeToSystemTime(&Time, &SystemTime);
        v5 = SystemTime;
      }
      v9 = MEMORY[0xFFFFF78000000014];
      if ( v5.QuadPart <= MEMORY[0xFFFFF78000000014] )
        v6 = MEMORY[0xFFFFF78000000014] - v5.QuadPart;
      else
        v6 = v5.QuadPart - MEMORY[0xFFFFF78000000014];
      result = v2;
      if ( v6 > 10000000 * (unsigned __int64)v2 )
      {
        LOBYTE(v6) = a1;
        return ExpSetSystemTime(0, v6, 2, v5.LowPart, (__int64)&v9);
      }
    }
  }
  return result;
}
