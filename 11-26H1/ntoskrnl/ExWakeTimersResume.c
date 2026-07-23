/*
 * XREFs of ExWakeTimersResume @ 0x1404EEC28
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExpTimerResume @ 0x1404B9C14 (ExpTimerResume.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall ExWakeTimersResume(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r14
  struct _KTHREAD *v4; // rdi
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
  v4 = *(struct _KTHREAD **)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor;
  while ( v4 != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor )
  {
    p_ThreadTimerDelay = (KSPIN_LOCK *)&v4[-1].ThreadTimerDelay;
    v4 = *(struct _KTHREAD **)&v4->Header.Lock;
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
          (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.1008);
}
