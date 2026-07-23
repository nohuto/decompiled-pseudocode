/*
 * XREFs of PopNetArmRefreshTimer @ 0x1407DE2B8
 * Callers:
 *     PopNetLowPowerEpochCallback @ 0x1407DE550 (PopNetLowPowerEpochCallback.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1407DE6E0 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     PopTraceNetRefreshTimerArmed @ 0x1407D8EE8 (PopTraceNetRefreshTimerArmed.c)
 */

void __fastcall PopNetArmRefreshTimer(__int64 a1, char a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  v4 = -a1;
  if ( a2 )
    v4 = a1;
  KeSetTimer2((__int64)&PopPdcDeviceListLock.OtherOperationCount, v4, 0LL, 0LL);
  v5 = a1;
  if ( a2 )
  {
    v5 = a1 - MEMORY[0xFFFFF78000000014];
    if ( MEMORY[0xFFFFF78000000014] >= a1 )
      v5 = 0LL;
  }
  PopTraceNetRefreshTimerArmed(v5);
}
