/*
 * XREFs of PopClearSystemShutdownMarker @ 0x140B4665C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopClearSystemShutdownMarker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  LOBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) &= ~8u;
  LOBYTE(stru_140E67200.Spare35[0]) = -1;
  PopBsdHandleRequest(0xBu);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
