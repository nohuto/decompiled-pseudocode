/*
 * XREFs of PopSetCleanShutdownMarker @ 0x1407CC2C8
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopSetCleanShutdownMarker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  LOBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) &= ~1u;
  PopBsdHandleRequest(9u);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
