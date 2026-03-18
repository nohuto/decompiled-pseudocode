/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x140B31790
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopSetConnectedStandbyMarker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // ebx
  __int64 v5; // rdi
  __int64 result; // rax

  v4 = a2;
  v5 = qword_140F0F5D0;
  if ( !LOBYTE(stru_140F12D20.SchedulerAssist) )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, a2, a3, a4);
    stru_140E66FF0.SavedApcStateFill[32] |= 2u;
    *(_QWORD *)&stru_140E66FF0.ForegroundLossTime = v5;
    stru_140E66FF0.SavedApcStateFill[34] = v4 & 0x3F | stru_140E66FF0.SavedApcStateFill[34] & 0xC0;
    stru_140E66FF0.Spare6 = stru_140E66FF0.Spare6 & 0xF0 | HIBYTE(v4) & 0xF;
    PopBsdHandleRequest(3u);
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
  }
  return result;
}
