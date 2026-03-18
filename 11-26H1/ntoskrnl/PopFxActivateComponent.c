/*
 * XREFs of PopFxActivateComponent @ 0x14037AB40
 * Callers:
 *     PoFxActivateComponent @ 0x14037AAB0 (PoFxActivateComponent.c)
 *     PopFxActivateComponentDependencies @ 0x140469FA0 (PopFxActivateComponentDependencies.c)
 *     PopFxNotifyPreDIrpIssue @ 0x140518984 (PopFxNotifyPreDIrpIssue.c)
 *     PoFxAddComponentRelation @ 0x140603F90 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140604200 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140604610 (PoFxRemoveComponentRelation.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1BA40 (PopFxRegisterDeviceWorker.c)
 *     PopFxRegisterDevice @ 0x140B4F9A0 (PopFxRegisterDevice.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402436D0 (KiFlushSoftwareInterruptBatch.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x14037AE70 (PopFxActivateComponentWorker.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037B2F0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KiCheckForThreadDispatch @ 0x14037CA70 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall PopFxActivateComponent(__int64 BugCheckParameter2, __int64 a2, char a3, char a4)
{
  __int64 v5; // r15
  ULONG_PTR v6; // r13
  struct _KTHREAD *CurrentThread; // rax
  char v8; // bp
  char v9; // si
  int v10; // eax
  struct _KTHREAD *v11; // rax
  struct _KTHREAD *v13; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned int v15; // edi
  unsigned __int8 v16; // al
  KIRQL v17; // al
  bool v18; // cc
  struct _KPRCB *CurrentPrcb; // rdi
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int8 v23; // [rsp+30h] [rbp-88h]
  struct _SINGLE_LIST_ENTRY v24; // [rsp+C0h] [rbp+8h] BYREF
  char v25; // [rsp+D8h] [rbp+20h]

  v25 = a4;
  v5 = a2;
  v6 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 864) & 1) != 0 )
    return;
  if ( (a3 & 6) == 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 1;
    --CurrentThread->SpecialApcDisable;
  }
  else
  {
    v8 = 0;
  }
  v9 = 0;
  v10 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
  if ( v10 == 1 )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      v13 = KeGetCurrentThread();
      v24.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      v23 = CurrentIrql;
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v13->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v15);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( v13->ThreadLock );
      }
      v16 = v13->PriorityFloorCounts[16];
      if ( v16 == 0xFF )
        KeBugCheckEx(0x157u, (ULONG_PTR)v13, 0x10uLL, 1uLL, 0LL);
      v13->PriorityFloorCounts[16] = v16 + 1;
      v18 = v13->Priority < 16;
      v13->PriorityFloorSummary |= 0x10000u;
      if ( v18 )
        KiSetPriorityThread(v13, &v24, 16LL);
      v13->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      Next = v24.Next;
      if ( v24.Next )
      {
        v24.Next = v24.Next->Next;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v24, 0LL);
          Next = v24.Next;
          ++v9;
          if ( v24.Next )
            v24.Next = v24.Next->Next;
          if ( (v9 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
        }
        while ( Next );
      }
      KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      KiCheckForThreadDispatch(CurrentPrcb, v23, v21, v22);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 88));
    PopFxActivateComponentWorker(v6);
    if ( KeGetCurrentIrql() < 2u )
    {
      LODWORD(v24.Next) = 16;
      KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), (int *)&v24);
    }
    goto LABEL_42;
  }
  if ( v10 >= 0 )
  {
    LOBYTE(BugCheckParameter2) = (v10 & 0x40000000) != 0;
    if ( ((unsigned __int8)BugCheckParameter2 & ((a3 & 8) == 0)) != 0 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 128), v17);
    }
LABEL_42:
    if ( (a3 & 1) != 0 )
      KeWaitForSingleObject((PVOID)(v5 + 104), Executive, 0, 0, 0LL);
  }
  if ( v8 )
  {
    v11 = KeGetCurrentThread();
    if ( v11->SpecialApcDisable++ == -1
      && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    {
      KiCheckForKernelApcDelivery(BugCheckParameter2, a2);
    }
  }
}
