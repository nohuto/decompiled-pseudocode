/*
 * XREFs of PopPowerRequestExecutionRequiredSettingCallback @ 0x1409C1C20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409C2150 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x1409F69C0 (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 */

__int64 __fastcall PopPowerRequestExecutionRequiredSettingCallback(
        _QWORD *a1,
        int *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v5; // ebp
  unsigned int v7; // ebx
  __int64 v8; // r9

  v5 = a3;
  v7 = -1073741811;
  PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, (__int64)a2, a3, a4);
  v8 = *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 == *a1 )
    v8 = *(_QWORD *)GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data4 - a1[1];
  if ( !v8 && v5 == 4 && a2 )
  {
    KeCancelTimer2((__int64)&stru_140F12EA0.WaitBlock[2].Object);
    PopExecutionRequiredTimeout = *a2;
    PopPowerRequestSetExecutionRequiredTimeoutTimer();
    PopPowerRequestHandleExecutionEnablementUpdate();
    v7 = 0;
  }
  PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
  return v7;
}
