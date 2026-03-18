/*
 * XREFs of ExWakeTimersResume @ 0x1404F5668
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     ExpTimerResume @ 0x1404C03C4 (ExpTimerResume.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall ExWakeTimersResume(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r14
  struct _KTHREAD *SchedulerAssist; // rdi
  KSPIN_LOCK *p_ThreadTimerDelay; // rsi
  KSPIN_LOCK v6; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v3 = MEMORY[0xFFFFF78000000008];
  SchedulerAssist = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.SchedulerAssist;
  while ( SchedulerAssist != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssist )
  {
    p_ThreadTimerDelay = (KSPIN_LOCK *)&SchedulerAssist[-1].ThreadTimerDelay;
    SchedulerAssist = *(struct _KTHREAD **)&SchedulerAssist->Header.Lock;
    KxAcquireSpinLock(p_ThreadTimerDelay + 8);
    if ( p_ThreadTimerDelay[32] )
    {
      v6 = p_ThreadTimerDelay[35];
      if ( !v6 || (*(_DWORD *)(v6 + 136) & 8) == 0 )
        ExpTimerResume((PKTIMER)p_ThreadTimerDelay, v3);
    }
    KxReleaseSpinLock(p_ThreadTimerDelay + 8);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
}
