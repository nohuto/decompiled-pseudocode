/*
 * XREFs of PopNetGetNextDueRefreshTime @ 0x1407DA57C
 * Callers:
 *     PopNetLowPowerEpochCallback @ 0x1407DA660 (PopNetLowPowerEpochCallback.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1407DA7F0 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x140215090 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x1404C6E60 (ExLocalTimeToSystemTime.c)
 */

char *PopNetGetNextDueRefreshTime()
{
  LARGE_INTEGER LocalTime; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp+10h] BYREF

  LocalTime.QuadPart = 0LL;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( stru_140F0F620.Spare32
    && MEMORY[0xFFFFF78000000014] < (__int64)stru_140F0F620.Spare32
    && (__int64)stru_140F0F620.Spare32 - MEMORY[0xFFFFF78000000014] >= 1200000000 )
  {
    return (char *)stru_140F0F620.Spare32 - 1200000000;
  }
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  LocalTime.QuadPart = LocalTime.QuadPart
                     + 18000000000LL
                     - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL
                     - 1200000000
                     + (-(__int64)((unsigned __int64)(18000000000LL
                                                    - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL) < 0x47868C00) & 0x430E23400LL);
  ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
  return (char *)LocalTime.QuadPart;
}
