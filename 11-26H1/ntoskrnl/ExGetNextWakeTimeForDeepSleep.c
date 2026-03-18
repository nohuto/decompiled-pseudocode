/*
 * XREFs of ExGetNextWakeTimeForDeepSleep @ 0x14052FD30
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x1404FC8E0 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     KeQueryTimerDueTime @ 0x140439548 (KeQueryTimerDueTime.c)
 */

unsigned __int64 __fastcall ExGetNextWakeTimeForDeepSleep(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *SchedulerAssist; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 TimerDueTime; // rdx
  __int64 p_ThreadTimerDelay; // rcx

  SchedulerAssist = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.SchedulerAssist;
  v4 = -1LL;
  TimerDueTime = -1LL;
  while ( SchedulerAssist != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssist )
  {
    p_ThreadTimerDelay = (__int64)&SchedulerAssist[-1].ThreadTimerDelay;
    SchedulerAssist = *(struct _KTHREAD **)&SchedulerAssist->Header.Lock;
    if ( (*(_BYTE *)(p_ThreadTimerDelay + 304) & 4) != 0 )
    {
      if ( *(_QWORD *)(p_ThreadTimerDelay + 256) )
        TimerDueTime = KeQueryTimerDueTime(p_ThreadTimerDelay, TimerDueTime, a3);
      if ( TimerDueTime && TimerDueTime < v4 )
        v4 = TimerDueTime;
    }
  }
  return v4;
}
