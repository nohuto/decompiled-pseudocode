/*
 * XREFs of ExGetNextWakeTimeForDeepSleep @ 0x140532230
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x1404F5E20 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     KeQueryTimerDueTime @ 0x1404C2994 (KeQueryTimerDueTime.c)
 */

unsigned __int64 __fastcall ExGetNextWakeTimeForDeepSleep(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 TimerDueTime; // rdx
  __int64 p_ThreadTimerDelay; // rcx

  v3 = *(struct _KTHREAD **)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor;
  v4 = -1LL;
  TimerDueTime = -1LL;
  while ( v3 != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor )
  {
    p_ThreadTimerDelay = (__int64)&v3[-1].ThreadTimerDelay;
    v3 = *(struct _KTHREAD **)&v3->Header.Lock;
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
