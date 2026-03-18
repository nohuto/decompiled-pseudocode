/*
 * XREFs of PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140A38CE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A38D30 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A38E44 (PopPowerAggregatorNotifyCsStateExited.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffActiveToActiveStateHandler(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  _DWORD v5[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v5, 0, 32);
  v5[0] = 2;
  PopPowerAggregatorSetCurrentState(a1, v5);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopPowerAggregatorNotifyCsStateExited();
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v1, v2, v3);
  return 0LL;
}
