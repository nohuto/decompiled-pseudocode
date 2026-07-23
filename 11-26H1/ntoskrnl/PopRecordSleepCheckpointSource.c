/*
 * XREFs of PopRecordSleepCheckpointSource @ 0x1407CC278
 * Callers:
 *     PopCheckShutdownMarker @ 0x140CD620C (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpointSource(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  BYTE1(stru_140E67200.Spare35[0]) = BYTE1(stru_140E67200.Spare35[0]) & 0xF3 | (4 * (a1 & 3));
  PopBsdHandleRequest(0xAu);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
