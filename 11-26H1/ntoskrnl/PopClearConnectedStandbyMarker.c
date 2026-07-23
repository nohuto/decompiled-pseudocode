/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x140B35C10
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopClearConnectedStandbyMarker(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax

  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
    LOBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) &= ~2u;
    stru_140E67200.AbWaitObject = 0LL;
    HIBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) = a1 & 0x3F | HIBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) & 0xC0;
    HIBYTE(stru_140E67200.ModeHistory) = HIBYTE(stru_140E67200.ModeHistory) & 0xF | (16 * HIBYTE(a1));
    PopBsdHandleRequest(3u);
    return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
  }
  return result;
}
