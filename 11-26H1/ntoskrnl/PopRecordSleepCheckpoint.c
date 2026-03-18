/*
 * XREFs of PopRecordSleepCheckpoint @ 0x140B2E82C
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140CD0064 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpoint(unsigned __int8 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, a2, a3, a4);
  stru_140E66FF0.PriorityFloorCounts[26] = a1;
  PopBsdHandleRequest(0xAu);
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
}
