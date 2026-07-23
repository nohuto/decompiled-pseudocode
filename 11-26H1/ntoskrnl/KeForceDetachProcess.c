/*
 * XREFs of KeForceDetachProcess @ 0x1403118D0
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 *     MiSharePagesCleanup @ 0x140311260 (MiSharePagesCleanup.c)
 *     MiDeleteActiveTrimView @ 0x1404657B4 (MiDeleteActiveTrimView.c)
 *     MmQueryCommitReleaseState @ 0x1404C1D8C (MmQueryCommitReleaseState.c)
 *     MiEmptyThisWorkingSet @ 0x1404FA1B4 (MiEmptyThisWorkingSet.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E9508 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406EA1AC (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiDetachProcess @ 0x140248800 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x140248DB0 (KiSetAddressPolicy.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140312650 (HvlSwitchVirtualAddressSpace.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 */

__int64 __fastcall KeForceDetachProcess(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  char v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r13
  int v8; // r14d
  unsigned __int8 CurrentIrql; // si
  unsigned int v10; // edi
  $241382875694CED3D471BC5892DE3337 *v11; // rdi
  struct _KTHREAD *Flink; // rdx
  struct _KTHREAD *v13; // r8
  _LIST_ENTRY *v14; // rdx
  unsigned __int64 CurrentPrcb; // rcx
  _KPROCESS *v16; // r8
  unsigned __int64 v17; // r12
  __int64 v18; // r15
  unsigned __int64 DirectoryTableBase; // rbp
  unsigned __int64 v20; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v22; // rax
  char v23; // al
  __int64 v24; // r8
  int v25; // edx
  char v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int8 v28[8]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-70h] BYREF
  __int128 v30; // [rsp+2Ch] [rbp-6Ch]
  _OWORD v31[3]; // [rsp+40h] [rbp-58h] BYREF

  result = (__int64)v31;
  if ( a1 )
    result = a1;
  v3 = a2 & 1;
  memset(v31, 0, sizeof(v31));
  v4 = 2 * v3 + 1;
  v5 = *(_QWORD *)(result + 32);
  if ( v5 != 1 )
  {
    if ( v5 )
    {
      return (__int64)KiDetachProcess(result, v4);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      v8 = v4 & 2;
      if ( v8 )
      {
        CurrentIrql = 15;
        v28[0] = 15;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v3) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v3);
        }
        v28[0] = CurrentIrql;
        v10 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v10 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v10);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
      }
      for ( ; CurrentThread->ApcState.KernelApcPending; CurrentIrql = v28[0] )
      {
        if ( CurrentIrql )
          break;
        if ( CurrentThread->SpecialApcDisable )
          break;
        KiReleaseThreadLockLowerIrql((__int64)CurrentThread, 0);
        KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, v28);
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v11 = &CurrentThread->152, ($241382875694CED3D471BC5892DE3337 *)v11->ApcState.ApcListHead[0].Flink != v11)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
      CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
      CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
      CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
      Flink = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[0].Flink;
      if ( Flink == (struct _KTHREAD *)&CurrentThread->600 )
      {
        CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
        v11->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
        CurrentThread->ApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
        v11->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v11;
        Blink->Flink = (struct _LIST_ENTRY *)v11;
      }
      v13 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v14 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v13 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
      {
        CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
        v14->Flink = v14;
        CurrentThread->ApcState.UserApcPendingAll = 0;
      }
      else
      {
        v22 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
        v14->Flink = (struct _LIST_ENTRY *)v13;
        CurrentThread->ApcState.ApcListHead[1].Blink = v22;
        v13->Header.WaitListHead.Flink = v14;
        v22->Flink = v14;
      }
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( !v8 )
        CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
      v16 = CurrentThread->ApcState.Process;
      v17 = *(unsigned __int8 *)(CurrentPrcb + 209);
      v18 = 8LL * *(unsigned __int8 *)(CurrentPrcb + 208);
      _interlockedbittestandset64((volatile signed __int32 *)((char *)&v16->ActiveProcessors->8 + v18), v17);
      DirectoryTableBase = v16->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v20 = DirectoryTableBase | 0x8000000000000000uLL;
        if ( (DirectoryTableBase & 2) == 0 )
          v20 = v16->DirectoryTableBase;
        __writegsqword(0xB000u, v20);
        KiSetAddressPolicy(v16->AddressPolicy, (__int64)v14);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        CurrentPrcb = __readcr4();
        if ( (CurrentPrcb & 0x20080) != 0 )
        {
          __writecr4(CurrentPrcb ^ 0x80);
          __writecr4(CurrentPrcb);
        }
        else
        {
          v27 = __readcr3();
          __writecr3(v27);
        }
      }
      result = (__int64)Process->ActiveProcessors;
      _interlockedbittestandreset64((volatile signed __int32 *)(result + v18 + 8), v17);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v8 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      if ( ($241382875694CED3D471BC5892DE3337 *)v11->ApcState.ApcListHead[0].Flink != v11 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        v30 = 0LL;
        if ( (KiTrapFeatures & 0x10) != 0 )
        {
          v23 = HalpDisableInterrupts(CurrentPrcb, v14, KeGetCurrentPrcb());
          v25 = *(_DWORD *)(v24 + 168);
          v26 = v23;
          *(_DWORD *)(v24 + 168) = v25 | 2;
          if ( !v25 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v26 )
            _enable();
        }
        v29 = 5;
        return HalpInterruptSendIpi(&v29, 0x1Fu);
      }
    }
  }
  return result;
}
