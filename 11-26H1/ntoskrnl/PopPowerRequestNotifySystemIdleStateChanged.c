/*
 * XREFs of PopPowerRequestNotifySystemIdleStateChanged @ 0x1409F7C58
 * Callers:
 *     PopUpdatePdcSystemIdleState @ 0x1409F7B64 (PopUpdatePdcSystemIdleState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409C2150 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x1409F69C0 (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 */

__int64 __fastcall PopPowerRequestNotifySystemIdleStateChanged(
        char a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, a2, a3, a4);
  if ( BYTE4(PpmIdlePolicyLock.Padding[3]) && BYTE3(stru_140F12EA0.Spare35[1]) != a1 )
  {
    BYTE3(stru_140F12EA0.Spare35[1]) = a1;
    if ( a1 )
    {
      *(_QWORD *)&stru_140F12EA0.Spare36 = MEMORY[0xFFFFF78000000008];
      PopPowerRequestSetExecutionRequiredTimeoutTimer();
    }
    else
    {
      *(_QWORD *)&stru_140F12EA0.Spare36 = 0LL;
      KeCancelTimer2((__int64)&stru_140F12EA0.WaitBlock[2].Object);
    }
    PopPowerRequestHandleExecutionEnablementUpdate();
  }
  return PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
}
