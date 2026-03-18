/*
 * XREFs of PopNetArmRefreshTimer @ 0x1407DA3D0
 * Callers:
 *     PopNetLowPowerEpochCallback @ 0x1407DA660 (PopNetLowPowerEpochCallback.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1407DA7F0 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     PopTraceNetRefreshTimerArmed @ 0x1407D5D38 (PopTraceNetRefreshTimerArmed.c)
 */

void __fastcall PopNetArmRefreshTimer(__int64 a1, char a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  v4 = -a1;
  if ( a2 )
    v4 = a1;
  KeSetTimer2((__int64)&stru_140F0C428.StackBase, v4, 0LL, 0LL);
  v5 = a1;
  if ( a2 )
  {
    v5 = a1 - MEMORY[0xFFFFF78000000014];
    if ( MEMORY[0xFFFFF78000000014] >= a1 )
      v5 = 0LL;
  }
  PopTraceNetRefreshTimerArmed(v5);
}
