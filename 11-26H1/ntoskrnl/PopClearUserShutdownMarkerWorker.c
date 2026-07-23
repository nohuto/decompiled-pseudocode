/*
 * XREFs of PopClearUserShutdownMarkerWorker @ 0x1407CBC70
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopClearUserShutdownMarkerWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  LOBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) &= ~4u;
  PopBsdHandleRequest(9u);
  PopOkayToQueueNextWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
