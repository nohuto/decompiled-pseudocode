/*
 * XREFs of ExWakeTimersPause @ 0x1404B2BF0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExpTimerPause @ 0x1404B2CF0 (ExpTimerPause.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 ExWakeTimersPause()
{
  $06DA74891900ABA548658392A057F771 *v0; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r14
  __int64 v4; // r15
  struct _KTHREAD *v5; // rdi
  KSPIN_LOCK *p_ThreadTimerDelay; // rsi
  __int64 result; // rax

  v0 = &ExSaPageGroupDescriptorArrayLock.1008;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.1008, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.1008,
      0LL,
      (__int64)&ExSaPageGroupDescriptorArrayLock.1008);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v0) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v0, 2LL);
  }
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = MEMORY[0xFFFFF78000000014];
  v5 = *(struct _KTHREAD **)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor;
  while ( v5 != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor )
  {
    p_ThreadTimerDelay = (KSPIN_LOCK *)&v5[-1].ThreadTimerDelay;
    v5 = *(struct _KTHREAD **)&v5->Header.Lock;
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
