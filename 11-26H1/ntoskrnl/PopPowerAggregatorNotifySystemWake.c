/*
 * XREFs of PopPowerAggregatorNotifySystemWake @ 0x1407D6DC4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorNotifySystemWake(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  HIDWORD(PopPowerAggregatorLock.Timer.Dpc) = a1;
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
