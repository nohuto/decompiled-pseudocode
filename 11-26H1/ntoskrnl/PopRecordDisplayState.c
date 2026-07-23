/*
 * XREFs of PopRecordDisplayState @ 0x1409F7D28
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x1409F877C (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordDisplayState(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  *((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue + 6) = *((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue
                                                                   + 6) & 0x3F | ((a1 + 1) << 6);
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
