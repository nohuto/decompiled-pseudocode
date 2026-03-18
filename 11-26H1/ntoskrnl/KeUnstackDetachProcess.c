/*
 * XREFs of KeUnstackDetachProcess @ 0x1402C7110
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x140247450 (KiSetAddressPolicy.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiReleaseThreadLockLowerIrql @ 0x1402C45E0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402C4710 (KiAcquireThreadLockRaiseToDpc.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402C79B0 (HvlSwitchVirtualAddressSpace.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  _KPROCESS *Process; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *v3; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned int v5; // esi
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v6; // rcx
  $B3FD53340A977CC9CDA66D808670C106 *v7; // rdx
  struct _LIST_ENTRY *Flink; // r8
  struct _KTHREAD *v9; // r9
  _LIST_ENTRY *v10; // r8
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 p_ThreadListHead; // rcx
  __int64 Group; // r14
  unsigned __int64 GroupIndex; // r15
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v19; // rax
  unsigned int i; // ecx
  __int64 v21; // rdx
  __int64 v22; // r9
  unsigned __int8 v23; // di
  unsigned __int32 Value; // eax
  unsigned __int32 v25; // ett
  _SINGLE_LIST_ENTRY *p_SwapListEntry; // rbp
  struct _SINGLE_LIST_ENTRY *SListFaultAddress; // rax
  char v28; // al
  __int64 v29; // r8
  int v30; // edx
  char v31; // r9
  unsigned __int64 v32; // rax
  unsigned int v33; // [rsp+20h] [rbp-48h] BYREF
  __int128 v34; // [rsp+24h] [rbp-44h]
  unsigned __int8 v35; // [rsp+70h] [rbp+8h] BYREF

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( Process )
    {
      KiDetachProcess((__int64)ApcState, 0);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v3 = CurrentThread->ApcState.Process;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      v35 = CurrentIrql;
      v5 = 0;
LABEL_8:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        while ( 1 )
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
          {
            if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
            {
LABEL_51:
              HvlNotifyLongSpinWait(v5);
              goto LABEL_11;
            }
            for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
            {
              v21 = KiProcessorBlock[i];
              if ( (*(_BYTE *)(v21 + 35) & 1) != 0 )
              {
                v22 = *(_QWORD *)(v21 + 36600);
                if ( !v22 || !*(_BYTE *)(v22 + 65) || !*(_BYTE *)(v22 + 64) )
                  goto LABEL_51;
              }
            }
          }
          _mm_pause();
LABEL_11:
          if ( !CurrentThread->ThreadLock )
            goto LABEL_8;
        }
      }
      for ( ; CurrentThread->ApcState.KernelApcPending; CurrentIrql = v35 )
      {
        if ( CurrentIrql )
          break;
        if ( CurrentThread->SpecialApcDisable )
          break;
        KiReleaseThreadLockLowerIrql((__int64)CurrentThread, 0);
        KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, &v35);
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v6 = &CurrentThread->152, ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v6->ApcState.ApcListHead[0].Flink != v6)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      v7 = &CurrentThread->600;
      CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
      CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
      CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
      CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
      Flink = CurrentThread->SavedApcState.ApcListHead[0].Flink;
      if ( ($B3FD53340A977CC9CDA66D808670C106 *)v7->SavedApcState.ApcListHead[0].Flink == v7 )
      {
        CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
        v6->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v6;
        CurrentThread->ApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
        v6->ApcState.ApcListHead[0].Flink = Flink;
        CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
        Flink->Blink = (struct _LIST_ENTRY *)v6;
        Blink->Flink = (struct _LIST_ENTRY *)v6;
      }
      v9 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v10 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v9 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
      {
        CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
        v10->Flink = v10;
        CurrentThread->ApcState.UserApcPendingAll = 0;
      }
      else
      {
        v19 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
        v10->Flink = (struct _LIST_ENTRY *)v9;
        CurrentThread->ApcState.ApcListHead[1].Blink = v19;
        v9->Header.WaitListHead.Flink = v10;
        v19->Flink = v10;
      }
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      p_ThreadListHead = (unsigned __int64)CurrentThread->ApcState.Process;
      Group = CurrentPrcb->Group;
      GroupIndex = CurrentPrcb->GroupIndex;
      _interlockedbittestandset64(
        (volatile signed __int32 *)(*(_QWORD *)(p_ThreadListHead + 128) + 8 * Group + 8),
        GroupIndex);
      v15 = *(_QWORD *)(p_ThreadListHead + 40);
      if ( KiKvaShadow )
      {
        v16 = v15 | 0x8000000000000000uLL;
        if ( (v15 & 2) == 0 )
          v16 = *(_QWORD *)(p_ThreadListHead + 40);
        __writegsqword(0xB000u, v16);
        KiSetAddressPolicy(*(unsigned __int8 *)(p_ThreadListHead + 352), (__int64)v7);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(v15);
      else
        __writecr3(v15);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        p_ThreadListHead = __readcr4();
        if ( (p_ThreadListHead & 0x20080) != 0 )
        {
          __writecr4(p_ThreadListHead ^ 0x80);
          __writecr4(p_ThreadListHead);
        }
        else
        {
          v32 = __readcr3();
          __writecr3(v32);
        }
      }
      v17 = GroupIndex;
      _interlockedbittestandreset64((volatile signed __int32 *)&v3->ActiveProcessors->Bitmap[Group], GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( (_InterlockedExchangeAdd(&v3->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8) == 8 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v23, 2LL);
        KiAcquireKobjectLockSafe(&v3->Header.Lock, v17, (__int64)v10);
        Value = v3->StackCount.Value;
        if ( (Value & 7) == 0 )
        {
          p_ThreadListHead = (unsigned __int64)&v3->ThreadListHead;
          if ( *(_QWORD *)p_ThreadListHead != p_ThreadListHead )
          {
            while ( Value < 8 )
            {
              p_ThreadListHead = Value & 0xFFFFFFF8 | 3;
              v25 = Value;
              Value = _InterlockedCompareExchange(&v3->StackCount.Value, p_ThreadListHead, Value);
              if ( v25 == Value )
              {
                _InterlockedAnd(&v3->Header.Lock, 0xFFFFFF7F);
                p_SwapListEntry = &v3->SwapListEntry;
                _m_prefetchw(&KiSupervisorXStateFeaturesLock.SListFaultAddress);
                SListFaultAddress = (struct _SINGLE_LIST_ENTRY *)KiSupervisorXStateFeaturesLock.SListFaultAddress;
                do
                {
                  p_SwapListEntry->Next = SListFaultAddress;
                  p_ThreadListHead = (unsigned __int64)SListFaultAddress;
                  SListFaultAddress = (struct _SINGLE_LIST_ENTRY *)_InterlockedCompareExchange64(
                                                                     (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.SListFaultAddress,
                                                                     (signed __int64)p_SwapListEntry,
                                                                     (signed __int64)SListFaultAddress);
                }
                while ( SListFaultAddress != (struct _SINGLE_LIST_ENTRY *)p_ThreadListHead );
                if ( !SListFaultAddress )
                  KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.StackLimit, 10, 0);
                goto LABEL_65;
              }
            }
          }
        }
        _InterlockedAnd(&v3->Header.Lock, 0xFFFFFF7F);
LABEL_65:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
        __writecr8(v23);
      }
      if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        v34 = 0LL;
        if ( (KiTrapFeatures & 0x10) != 0 )
        {
          v28 = HalpDisableInterrupts(p_ThreadListHead, v17, KeGetCurrentPrcb());
          v30 = *(_DWORD *)(v29 + 168);
          v31 = v28;
          *(_DWORD *)(v29 + 168) = v30 | 2;
          if ( !v30 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v31 )
            _enable();
        }
        v33 = 5;
        HalpInterruptSendIpi(&v33, 0x1Fu);
      }
    }
  }
}
