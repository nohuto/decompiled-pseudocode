/*
 * XREFs of PopPowerAggregatorNotifyAcDcStateChange @ 0x1407D6BE0
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404FD400 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x140B2BBD4 (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopSmartSuspendMakePredictions @ 0x140B6B6EC (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyAcDcStateChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  PopSmartSuspendMakePredictions(3LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v2, v3, v4);
  PopPowerAggregatorEvaluateDozeTimers();
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return PopReleasePolicyLock(v6, v5, v7, v8, v10);
}
