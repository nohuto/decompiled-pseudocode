/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x140AEFCB4
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14049FC60 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14049FF30 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x1407CC4F0 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1407CC5B0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x1407CC5E4 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1407CC67C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407CC6C4 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140AF4534 (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  if ( a1 )
    return PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, a2, a3, a4);
  else
    return (struct _KTHREAD *)PopAcquireRwLockShared(
                                (volatile signed __int64 *)stru_140F12EA0.TracingPrivate,
                                a2,
                                a3,
                                a4);
}
