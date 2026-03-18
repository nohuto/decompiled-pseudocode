/*
 * XREFs of ExWakeTimersPause @ 0x1404B93C0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     ExpTimerPause @ 0x1404B94C0 (ExpTimerPause.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 ExWakeTimersPause()
{
  unsigned __int64 *p_KernelWaitTime; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r14
  __int64 v4; // r15
  struct _KTHREAD *SchedulerAssist; // rdi
  KSPIN_LOCK *p_ThreadTimerDelay; // rsi
  __int64 result; // rax

  p_KernelWaitTime = &ExSaPageGroupDescriptorArrayLock.KernelWaitTime;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &ExSaPageGroupDescriptorArrayLock.KernelWaitTime,
      0LL,
      (__int64)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(p_KernelWaitTime) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(p_KernelWaitTime, 2LL);
  }
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = MEMORY[0xFFFFF78000000014];
  SchedulerAssist = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.SchedulerAssist;
  while ( SchedulerAssist != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssist )
  {
    p_ThreadTimerDelay = (KSPIN_LOCK *)&SchedulerAssist[-1].ThreadTimerDelay;
    SchedulerAssist = *(struct _KTHREAD **)&SchedulerAssist->Header.Lock;
    KxAcquireSpinLock(p_ThreadTimerDelay + 8);
    if ( p_ThreadTimerDelay[32] )
      ExpTimerPause(p_ThreadTimerDelay, v4, v3);
    KxReleaseSpinLock(p_ThreadTimerDelay + 8);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
