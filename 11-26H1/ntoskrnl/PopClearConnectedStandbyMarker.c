/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x140B337C0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopClearConnectedStandbyMarker(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax

  if ( !LOBYTE(stru_140F12D20.SchedulerAssist) )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, a2, a3, a4);
    stru_140E66FF0.SavedApcStateFill[32] &= ~2u;
    stru_140E66FF0.SavedApcState.ApcListHead[1].Blink = 0LL;
    stru_140E66FF0.SavedApcStateFill[35] = a1 & 0x3F | stru_140E66FF0.SavedApcStateFill[35] & 0xC0;
    stru_140E66FF0.Spare6 = stru_140E66FF0.Spare6 & 0xF | (16 * HIBYTE(a1));
    PopBsdHandleRequest(3u);
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
  }
  return result;
}
