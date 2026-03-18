/*
 * XREFs of PopRecordSleepCheckpointSource @ 0x1407C91D8
 * Callers:
 *     PopCheckShutdownMarker @ 0x140CD0064 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpointSource(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, a2, a3, a4);
  stru_140E66FF0.PriorityFloorCounts[25] = stru_140E66FF0.PriorityFloorCounts[25] & 0xF3 | (4 * (a1 & 3));
  PopBsdHandleRequest(0xAu);
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
}
