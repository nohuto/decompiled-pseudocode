/*
 * XREFs of ExpDeleteTimer @ 0x1403AC3E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsRemoveVirtualizedTimer @ 0x1403AB258 (PsRemoveVirtualizedTimer.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LIST_ENTRY *p_WaitListHead; // rdi
  KIRQL v6; // al
  unsigned __int64 v7; // rsi
  void *v9; // rbp
  struct _KTHREAD *CurrentThread; // r14
  AutoBoost *v11; // rax
  AutoBoost *v12; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v15; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( a1[4].Header.WaitListHead.Flink )
  {
    v9 = *(void **)&a1[4].Header.Lock;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime, 0LL, 0LL, a4);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        &ExSaPageGroupDescriptorArrayLock.KernelWaitTime,
        v11,
        (__int64)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v12 + 33) |= 2u;
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    Flink = p_WaitListHead->Flink;
    if ( p_WaitListHead->Flink->Blink != p_WaitListHead
      || (Blink = p_WaitListHead->Blink, Blink->Flink != p_WaitListHead) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_WaitListHead->Flink = 0LL;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
    KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v15);
    if ( v9 )
      PoDestroyReasonContext(v9);
  }
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v7 = v6;
  if ( a1[4].DueTime.QuadPart )
  {
    PsRemoveVirtualizedTimer((PVOID *)&a1[4].DueTime, &a1[4].TimerListEntry.Flink, (KSPIN_LOCK *)&a1[1], v6);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      _InterlockedAnd64((volatile signed __int64 *)&a1[1].Header.Lock, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&a1[1].Header.Lock, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    __writecr8(v7);
  }
  return KeCancelTimer(a1);
}
