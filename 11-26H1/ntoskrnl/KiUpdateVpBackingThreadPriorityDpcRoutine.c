/*
 * XREFs of KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1403BFD40
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403BFE80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KTHREAD *v4; // rdi
  struct _KTHREAD *AbWaitObject; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *v8; // rsi
  _KWAIT_BLOCK **p_WaitBlockList; // rbx
  struct _KTHREAD *v10; // r8
  struct _KTHREAD *v11; // rax
  struct _LIST_ENTRY *Flink; // rdx
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF
  int v14; // [rsp+20h] [rbp-18h] BYREF
  struct _SINGLE_LIST_ENTRY v15; // [rsp+28h] [rbp-10h] BYREF

  v4 = 0LL;
  v15.Next = 0LL;
  KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Blink);
  AbWaitObject = (struct _KTHREAD *)KiSupervisorXStateFeaturesLock.AbWaitObject;
  while ( AbWaitObject != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.AbWaitObject )
  {
    v10 = *(struct _KTHREAD **)&AbWaitObject->Header.Lock;
    v11 = AbWaitObject;
    AbWaitObject = v10;
    Flink = v11->Header.WaitListHead.Flink;
    if ( (struct _KTHREAD *)v10->Header.WaitListHead.Flink != v11 || (struct _KTHREAD *)Flink->Flink != v11 )
      __fastfail(3u);
    Flink->Flink = (struct _LIST_ENTRY *)v10;
    v10->Header.WaitListHead.Flink = Flink;
    *(_QWORD *)&v11->Header.Lock = v4;
    v4 = v11;
    v11->Header.WaitListHead.Flink = 0LL;
    _InterlockedAdd16((volatile signed __int16 *)&v11[-1].WpsFeedback + 2, 1u);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Blink);
  if ( v4 )
  {
    do
    {
      v8 = *(struct _KTHREAD **)&v4->Header.Lock;
      p_WaitBlockList = &v4[-1].WaitBlockList;
      *(_QWORD *)&v4->Header.Lock = 1LL;
      _InterlockedOr(v13, 0);
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v14);
        while ( p_WaitBlockList[8] );
      }
      if ( ((_DWORD)p_WaitBlockList[15] & 0x400000) != 0 )
        KiUpdateVpBackingThreadPriorityFromTopLevel((struct _KTHREAD *)((char *)v4 - 1008));
      p_WaitBlockList[8] = 0LL;
      v4 = v8;
      _InterlockedDecrement16((volatile signed __int16 *)p_WaitBlockList + 434);
    }
    while ( v8 );
  }
  LOBYTE(v6) = 2;
  KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v15, v6, v7);
}
