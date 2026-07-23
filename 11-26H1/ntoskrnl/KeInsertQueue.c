/*
 * XREFs of KeInsertQueue @ 0x1403F0500
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

LONG __stdcall KeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  __int64 v2; // r8
  LIST_ENTRY *p_WaitListHead; // rbp
  PRKQUEUE v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // r14
  __int64 CurrentThread; // rsi
  char IsThreadRunning; // al
  LONG SignalState; // r12d
  LONG v13; // edx
  struct _LIST_ENTRY *Blink; // rcx

  p_WaitListHead = &Queue->Header.WaitListHead;
  v5 = Queue;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Queue) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Queue, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, (__int64)Entry, IsThreadRunning);
  }
  KiAcquireKobjectLockSafe(&v5->Header.Lock, v7, v2);
  SignalState = v5->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || v5->CurrentCount >= v5->MaximumCount
    || *(PRKQUEUE *)(CurrentThread + 232) == v5 && *(_BYTE *)(CurrentThread + 643) == 15
    || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v5, Entry) )
  {
    v13 = v5->Header.SignalState;
    v5->Header.SignalState = v13 + 1;
    Blink = v5->EntryListHead.Blink;
    if ( Blink->Flink != &v5->EntryListHead )
      __fastfail(3u);
    Entry->Flink = &v5->EntryListHead;
    Entry->Blink = Blink;
    Blink->Flink = Entry;
    v5->EntryListHead.Blink = Entry;
    if ( !v13 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)v5);
  }
  else
  {
    Entry->Flink = 0LL;
  }
  _InterlockedAnd(&v5->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return SignalState;
}
