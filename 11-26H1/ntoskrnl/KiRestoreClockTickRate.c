/*
 * XREFs of KiRestoreClockTickRate @ 0x14040CECC
 * Callers:
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x1405262C8 (KiResumeClockTimer.c)
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiLogClockIncrementUpdate @ 0x14021EFB8 (KiLogClockIncrementUpdate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     KiShouldRearmClockTimer @ 0x14040D55C (KiShouldRearmClockTimer.c)
 *     KiGetClockIntervalOneShot @ 0x140468CD0 (KiGetClockIntervalOneShot.c)
 *     KiSetPendingTick @ 0x140476614 (KiSetPendingTick.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiRestoreClockTickRate(unsigned __int64 a1, _QWORD *a2, int *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int *v4; // r14
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 LastRequestedTimeIncrement; // rax
  bool v9; // zf
  __int64 result; // rax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int ClockIntervalOneShot; // eax
  int v15; // r8d
  __int64 v16; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a3;
  v6 = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    LOBYTE(a3) = 1;
    CurrentPrcb->ClockTimerState.ClockArmedForIdle = 0;
    if ( (unsigned __int8)KiShouldRearmClockTimer(CurrentPrcb, v6, a3) )
    {
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiSetNextClockTickDueTime((LARGE_INTEGER)v6, 1);
    }
    *(_QWORD *)v4 = CurrentPrcb->ClockTimerState.TimeIncrement;
    LastRequestedTimeIncrement = CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement;
    CurrentPrcb->ClockKeepAlive = 1;
    CurrentPrcb->ClockTimerState.ClockActive = 1;
    v9 = KiIrqlFlags == 0;
    *a2 = LastRequestedTimeIncrement;
    if ( !v9 )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v11 = KiClockOwnerOneShotRequestState;
    v12 = (unsigned int)KiLastRequestedTimeIncrement;
    *a2 = (unsigned int)KiLastRequestedTimeIncrement;
    if ( v11 )
    {
      v13 = KiClockOwnerOneShotRequest;
      if ( KiClockOwnerOneShotCorrectiveRequest >= v6
        && KiClockOwnerOneShotCorrectiveRequest < (unsigned __int64)KiClockOwnerOneShotRequest )
      {
        v13 = KiClockOwnerOneShotCorrectiveRequest;
      }
      ClockIntervalOneShot = KiGetClockIntervalOneShot(v13, v6);
      *a2 = ClockIntervalOneShot;
      guard_dispatch_icall_no_overrides(1LL, ClockIntervalOneShot);
      KiLastRequestedTimeIncrement = *(_DWORD *)a2;
      KeTimeIncrement = *v4;
    }
    else
    {
      guard_dispatch_icall_no_overrides(0LL, v12);
    }
    v15 = *(_DWORD *)a2;
    CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = *(_DWORD *)a2;
    CurrentPrcb->ClockTimerState.OneShotState = v11;
    CurrentPrcb->ClockTimerState.TimeIncrement = *v4;
    *(_WORD *)&CurrentPrcb->ClockTimerState.ClockActive = 1;
    KiLogClockIncrementUpdate((__int64)CurrentPrcb, v6, v15, *v4, v11 == 1);
    LOBYTE(v16) = 1;
    return KiSetPendingTick(v16);
  }
  return result;
}
