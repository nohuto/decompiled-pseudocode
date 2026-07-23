/*
 * XREFs of PopSetSleepMarker @ 0x140B30AB8
 * Callers:
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopGetTransitionsToOnCount @ 0x140424E54 (PopGetTransitionsToOnCount.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopSetSleepMarker(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  __int16 TransitionsToOnCount; // bx

  TransitionsToOnCount = -1;
  if ( (unsigned int)PopGetTransitionsToOnCount() < 0xFFFF )
    TransitionsToOnCount = PopGetTransitionsToOnCount();
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, v2, v3, v4);
  *((_WORD *)&stru_140E67200.ReservedPreviousReadyTimeValue + 2) = TransitionsToOnCount;
  LOBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) = (16 * a1) | stru_140E67200.ReservedPreviousReadyTimeValue & 0xF;
  *((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue + 6) = PopSleepCheckpointStatus & 0xF | *((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue + 6) & 0xF0;
  PopBsdHandleRequest(9u);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
