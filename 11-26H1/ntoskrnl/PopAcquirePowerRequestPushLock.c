/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x140AECCA4
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1404A65D0 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x1404A68A0 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x1407C9450 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1407C9510 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x1407C9544 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1407C95DC (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407C9624 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140AF1C64 (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  if ( a1 )
    return PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20, a2, a3, a4);
  else
    return (struct _KTHREAD *)PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F12D20.Header.Lock, a2, a3, a4);
}
