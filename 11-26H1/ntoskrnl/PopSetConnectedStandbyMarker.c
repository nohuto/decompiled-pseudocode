/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x140B33990
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopSetConnectedStandbyMarker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // ebx
  struct _SINGLE_LIST_ENTRY *v5; // rdi
  __int64 result; // rax

  v4 = a2;
  v5 = (struct _SINGLE_LIST_ENTRY *)PopWnfCsEnterScenarioId;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
    LOBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) |= 2u;
    stru_140E67200.SystemAffinityTokenListHead.Next = v5;
    BYTE2(stru_140E67200.ReservedPreviousReadyTimeValue) = v4 & 0x3F | BYTE2(stru_140E67200.ReservedPreviousReadyTimeValue) & 0xC0;
    HIBYTE(stru_140E67200.ModeHistory) = HIBYTE(stru_140E67200.ModeHistory) & 0xF0 | HIBYTE(v4) & 0xF;
    PopBsdHandleRequest(3u);
    return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
  }
  return result;
}
