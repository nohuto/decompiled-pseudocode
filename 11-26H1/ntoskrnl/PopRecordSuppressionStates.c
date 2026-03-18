/*
 * XREFs of PopRecordSuppressionStates @ 0x14077C208
 * Callers:
 *     PopEvaluatePowerButtonSuppressionState @ 0x140B31ED4 (PopEvaluatePowerButtonSuppressionState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSuppressionStates(unsigned __int8 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int8 v4; // bl
  __int64 result; // rax

  v4 = a2;
  if ( !LOBYTE(stru_140F12D20.SchedulerAssist) )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, a2, a3, a4);
    stru_140E66FF0.PriorityFloorCounts[27] = a1;
    stru_140E66FF0.PriorityFloorCounts[28] = v4;
    PopBsdHandleRequest(2u);
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
  }
  return result;
}
