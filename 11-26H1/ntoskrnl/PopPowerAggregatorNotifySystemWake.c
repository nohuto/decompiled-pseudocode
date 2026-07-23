/*
 * XREFs of PopPowerAggregatorNotifySystemWake @ 0x1407D9EF4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorNotifySystemWake(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  dword_140F0D9E4 = a1;
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
}
