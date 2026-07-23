/*
 * XREFs of IopPassiveInterruptDpc @ 0x1403F0650
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     EtwTraceEnqueueWork @ 0x140267678 (EtwTraceEnqueueWork.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeOtherQueueWaiters @ 0x14030DBC0 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x1403F07C0 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x1403F0C80 (KeIsThreadRunning.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  struct _LIST_ENTRY *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 CurrentThread; // rsi
  char IsThreadRunning; // al
  LONG v10; // ecx
  struct _LIST_ENTRY *Blink; // rax

  v4 = (struct _LIST_ENTRY *)(DeferredContext + 72);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Dpc) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Dpc, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, (__int64)v4, IsThreadRunning);
  }
  KiAcquireKobjectLockSafe(&PassiveInterruptRealtimeWorkQueue.Header.Lock, v6, SystemArgument1);
  if ( PassiveInterruptRealtimeWorkQueue.Header.WaitListHead.Flink == &PassiveInterruptRealtimeWorkQueue.Header.WaitListHead
    || PassiveInterruptRealtimeWorkQueue.CurrentCount >= PassiveInterruptRealtimeWorkQueue.MaximumCount
    || *(struct _KQUEUE **)(CurrentThread + 232) == &PassiveInterruptRealtimeWorkQueue
    && *(_BYTE *)(CurrentThread + 643) == 15
    || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, &PassiveInterruptRealtimeWorkQueue, v4) )
  {
    v10 = PassiveInterruptRealtimeWorkQueue.Header.SignalState++;
    Blink = PassiveInterruptRealtimeWorkQueue.EntryListHead.Blink;
    if ( PassiveInterruptRealtimeWorkQueue.EntryListHead.Blink->Flink != &PassiveInterruptRealtimeWorkQueue.EntryListHead )
      __fastfail(3u);
    v4->Flink = &PassiveInterruptRealtimeWorkQueue.EntryListHead;
    v4->Blink = Blink;
    Blink->Flink = v4;
    PassiveInterruptRealtimeWorkQueue.EntryListHead.Blink = v4;
    if ( !v10
      && PassiveInterruptRealtimeWorkQueue.Header.WaitListHead.Flink != &PassiveInterruptRealtimeWorkQueue.Header.WaitListHead )
    {
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)&PassiveInterruptRealtimeWorkQueue);
    }
  }
  else
  {
    v4->Flink = 0LL;
  }
  _InterlockedAnd((volatile signed __int32 *)&PassiveInterruptRealtimeWorkQueue, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
}
