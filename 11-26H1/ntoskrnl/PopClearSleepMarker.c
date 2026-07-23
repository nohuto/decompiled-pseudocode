/*
 * XREFs of PopClearSleepMarker @ 0x140B51754
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopClearSleepMarker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  LOBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) &= 0xFu;
  stru_140E67200.AbWaitObject = 0LL;
  PopBsdHandleRequest(9u);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
