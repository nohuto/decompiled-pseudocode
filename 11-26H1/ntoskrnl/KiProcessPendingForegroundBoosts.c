/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x1404F7DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 */

void __fastcall KiProcessPendingForegroundBoosts(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KTHREAD *v4; // rdi
  int v5; // ebx
  struct _KTHREAD *KernelShadowStack; // rcx
  struct _KTHREAD *v7; // rax
  struct _LIST_ENTRY *Flink; // rdx
  bool v9; // bl
  struct _KTHREAD *v10; // rsi
  unsigned __int8 *p_WaitType; // rbx
  int v12; // [rsp+20h] [rbp-38h] BYREF
  struct _SINGLE_LIST_ENTRY v13; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v13.Next = 0LL;
  v4 = 0LL;
  v5 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.KernelShadowStackBase);
  KernelShadowStack = (struct _KTHREAD *)KiSupervisorXStateFeaturesLock.KernelShadowStack;
  while ( KernelShadowStack != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.KernelShadowStack )
  {
    v7 = KernelShadowStack;
    KernelShadowStack = *(struct _KTHREAD **)&KernelShadowStack->Header.Lock;
    if ( v5 != LODWORD(v7[-1].Padding[4]) )
    {
      Flink = v7->Header.WaitListHead.Flink;
      if ( (struct _KTHREAD *)KernelShadowStack->Header.WaitListHead.Flink != v7
        || (struct _KTHREAD *)Flink->Flink != v7 )
      {
        __fastfail(3u);
      }
      Flink->Flink = (struct _LIST_ENTRY *)KernelShadowStack;
      KernelShadowStack->Header.WaitListHead.Flink = Flink;
      *(_QWORD *)&v7->Header.Lock = v4;
      v4 = v7;
      v7->Header.WaitListHead.Flink = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)&v7[-1].Padding[3] + 2, 1u);
    }
  }
  v9 = KiSupervisorXStateFeaturesLock.KernelShadowStack != &KiSupervisorXStateFeaturesLock.KernelShadowStack;
  KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.KernelShadowStackBase);
  if ( v9 )
  {
    v14[0] = 0LL;
    v14[1] = -1LL;
    KeSetTimer2((__int64)&KiSupervisorXStateFeaturesLock.ThreadListEntry.Blink, -150000LL, 0LL, (__int64)v14);
  }
  if ( v4 )
  {
    do
    {
      v10 = *(struct _KTHREAD **)&v4->Header.Lock;
      p_WaitType = &v4[-1].WaitBlock[0].WaitType;
      *(_QWORD *)&v4->Header.Lock = 1LL;
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitType + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v12);
        while ( *((_QWORD *)p_WaitType + 8) );
      }
      KiApplyForegroundBoostThread((struct _KTHREAD *)((char *)v4 - 880));
      *((_QWORD *)p_WaitType + 8) = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)p_WaitType + 434, 0xFFFFu);
      v4 = v10;
    }
    while ( v10 );
  }
  KiReadyDeferredReadyList(KeGetCurrentPrcb(), &v13);
}
