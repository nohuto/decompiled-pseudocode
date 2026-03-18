/*
 * XREFs of MiUnlockStealVm @ 0x140294D10
 * Callers:
 *     MiTradePageMarkedActive @ 0x1402931C0 (MiTradePageMarkedActive.c)
 *     MiInitializePageTradePacket @ 0x140293510 (MiInitializePageTradePacket.c)
 *     MiLockStealSystemVm @ 0x140455630 (MiLockStealSystemVm.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x140247450 (KiSetAddressPolicy.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiReleaseThreadLockLowerIrql @ 0x1402C45E0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402C4710 (KiAcquireThreadLockRaiseToDpc.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402C79B0 (HvlSwitchVirtualAddressSpace.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     MiUnlockSystemVa @ 0x1402E5200 (MiUnlockSystemVa.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     KiMoveApcState @ 0x140433500 (KiMoveApcState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 */

unsigned __int8 __fastcall MiUnlockStealVm(__int64 a1)
{
  unsigned __int8 result; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  _OWORD *v5; // rcx
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned int v10; // ebx
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v11; // rbx
  $B3FD53340A977CC9CDA66D808670C106 *v12; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *v15; // r8
  _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  unsigned __int64 CurrentPrcb; // rcx
  _KPROCESS *v19; // r8
  unsigned __int64 v20; // r15
  __int64 v21; // r14
  unsigned __int64 DirectoryTableBase; // rbp
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  char v25; // al
  __int64 v26; // r8
  int v27; // edx
  char v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // r14
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  unsigned __int8 v34[8]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v35; // [rsp+28h] [rbp-70h] BYREF
  __int128 v36; // [rsp+2Ch] [rbp-6Ch]
  _OWORD v37[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  result = MiUnlockSystemVa();
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(_BYTE *)(a1 + 64) )
    {
      v5 = v37;
      v37[0] = 0LL;
      if ( a1 != -72 )
        v5 = (_OWORD *)(a1 + 72);
      memset(&v37[1], 0, 32);
      v6 = *((_QWORD *)v5 + 4);
      if ( v6 != 1 )
      {
        if ( v6 )
        {
          KiDetachProcess((__int64)v5, 1);
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          Process = CurrentThread->ApcState.Process;
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v3) = 2;
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v3);
          }
          v34[0] = CurrentIrql;
          v10 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v10 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5, v3, v4) )
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
          for ( ; CurrentThread->ApcState.KernelApcPending; CurrentIrql = v34[0] )
          {
            if ( CurrentThread->SpecialApcDisable )
              break;
            if ( CurrentIrql )
              break;
            KiReleaseThreadLockLowerIrql(CurrentThread, 0LL);
            KiAcquireThreadLockRaiseToDpc(CurrentThread, v34);
          }
          if ( !CurrentThread->ApcStateIndex
            || (CurrentThread->ApcState.InProgressFlags & 1) != 0
            || (v11 = &CurrentThread->152, ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v11->ApcState.ApcListHead[0].Flink != v11)
            || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
          {
            KeBugCheck(6u);
          }
          CurrentThread->MiscFlags |= 0x800u;
          v12 = &CurrentThread->600;
          CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
          CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
          CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
          CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
          Flink = CurrentThread->SavedApcState.ApcListHead[0].Flink;
          if ( ($B3FD53340A977CC9CDA66D808670C106 *)v12->SavedApcState.ApcListHead[0].Flink == v12 )
          {
            CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
            v11->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
            CurrentThread->ApcState.KernelApcPending = 0;
          }
          else
          {
            Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
            v11->ApcState.ApcListHead[0].Flink = Flink;
            CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
            Flink->Blink = (struct _LIST_ENTRY *)v11;
            Blink->Flink = (struct _LIST_ENTRY *)v11;
          }
          v15 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
          v16 = &CurrentThread->ApcState.ApcListHead[1];
          if ( v15 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
          {
            CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
            v16->Flink = v16;
            CurrentThread->ApcState.UserApcPendingAll = 0;
          }
          else
          {
            v17 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
            v16->Flink = (struct _LIST_ENTRY *)v15;
            CurrentThread->ApcState.ApcListHead[1].Blink = v17;
            v15->Header.WaitListHead.Flink = v16;
            v17->Flink = v16;
          }
          CurrentThread->SavedApcState.Process = 0LL;
          CurrentThread->ApcStateIndex = 0;
          CurrentThread->ThreadLock = 0LL;
          CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
          v19 = CurrentThread->ApcState.Process;
          v20 = *(unsigned __int8 *)(CurrentPrcb + 209);
          v21 = 8LL * *(unsigned __int8 *)(CurrentPrcb + 208);
          _interlockedbittestandset64((volatile signed __int32 *)((char *)&v19->ActiveProcessors->8 + v21), v20);
          DirectoryTableBase = v19->DirectoryTableBase;
          if ( KiKvaShadow )
          {
            v23 = DirectoryTableBase | 0x8000000000000000uLL;
            if ( (DirectoryTableBase & 2) == 0 )
              v23 = v19->DirectoryTableBase;
            __writegsqword(0xB000u, v23);
            KiSetAddressPolicy(v19->AddressPolicy, (__int64)v12);
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
              v24 = __readcr3();
              __writecr3(v24);
            }
          }
          _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->ActiveProcessors->8 + v21), v20);
          CurrentThread->MiscFlags &= ~0x800u;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v11->ApcState.ApcListHead[0].Flink != v11 )
          {
            CurrentThread->ApcState.KernelApcPending = 1;
            v36 = 0LL;
            if ( (KiTrapFeatures & 0x10) != 0 )
            {
              v25 = HalpDisableInterrupts(CurrentPrcb, v12, KeGetCurrentPrcb());
              v27 = *(_DWORD *)(v26 + 168);
              v28 = v25;
              *(_DWORD *)(v26 + 168) = v27 | 2;
              if ( !v27 )
                __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
              if ( v28 )
                _enable();
            }
            v35 = 5;
            HalpInterruptSendIpi(&v35, 0x1Fu);
          }
        }
      }
    }
    v29 = *(_QWORD *)(a1 + 56);
    v30 = *(_QWORD *)(v29 + 16);
    v31 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v29 + 174));
    result = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v31 + 21384));
    v32 = result;
    --*(_DWORD *)(v30 + 56);
    v33 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 72LL);
    if ( v33 )
      result = KeSignalGate(v33, 1LL);
    if ( (_BYTE)v32 != 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
        || (result = stru_140F11D08.WaitStatus, LODWORD(stru_140F11D08.WaitStatus)) )
      {
        *(_DWORD *)(v31 + 21384) = 0;
      }
      else
      {
        result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v31 + 21384), retaddr);
      }
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
      __writecr8(v32);
    }
  }
  return result;
}
