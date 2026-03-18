/*
 * XREFs of PopPowerRequestNotifySystemIdleStateChanged @ 0x140A3C238
 * Callers:
 *     PopUpdatePdcSystemIdleState @ 0x140A3C144 (PopUpdatePdcSystemIdleState.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409467E0 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x140A3ADC0 (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 */

__int64 __fastcall PopPowerRequestNotifySystemIdleStateChanged(
        char a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20, a2, a3, a4);
  if ( stru_140F10828.WaitBlockFill5[44] && BYTE3(stru_140F12D20.StateSaveArea) != a1 )
  {
    BYTE3(stru_140F12D20.StateSaveArea) = a1;
    if ( a1 )
    {
      stru_140F12D20.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)MEMORY[0xFFFFF78000000008];
      PopPowerRequestSetExecutionRequiredTimeoutTimer();
    }
    else
    {
      stru_140F12D20.SchedulingGroup = 0LL;
      KeCancelTimer2((__int64)&stru_140F12D20.512);
    }
    PopPowerRequestHandleExecutionEnablementUpdate();
  }
  return PopReleaseRwLock(&stru_140F12D20);
}
