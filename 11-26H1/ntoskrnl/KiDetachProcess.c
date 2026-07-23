/*
 * XREFs of KiDetachProcess @ 0x140248800
 * Callers:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140311DB0 (KeUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x1404C1CC0 (KeDetachProcess.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetAddressPolicy @ 0x140248DB0 (KiSetAddressPolicy.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140312650 (HvlSwitchVirtualAddressSpace.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall KiDetachProcess(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // esi
  $241382875694CED3D471BC5892DE3337 *v8; // rcx
  $A4FCC2D77D2C8DA06473821DBD6C3FF5 *v9; // rdx
  struct _LIST_ENTRY *Flink; // r8
  struct _KTHREAD *v11; // r9
  _LIST_ENTRY *v12; // r8
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 p_ThreadListHead; // rcx
  __int64 Group; // r15
  unsigned __int64 GroupIndex; // r12
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  $241382875694CED3D471BC5892DE3337 *result; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v22; // rax
  unsigned int i; // ecx
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned __int8 v26; // di
  unsigned __int32 Value; // eax
  unsigned __int32 v28; // ett
  signed __int64 *p_SwapListEntry; // r14
  signed __int64 QuadPart; // rax
  struct _LIST_ENTRY *v31; // rdx
  struct _LIST_ENTRY *v32; // r8
  _LIST_ENTRY *v33; // rdx
  struct _LIST_ENTRY *v34; // rax
  struct _LIST_ENTRY *v35; // rax
  char v36; // al
  __int64 v37; // r8
  int v38; // edx
  char v39; // r9
  unsigned __int64 v40; // rax
  unsigned int v41; // [rsp+20h] [rbp-48h] BYREF
  __int128 v42; // [rsp+24h] [rbp-44h]
  char v43; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (a2 & 2) != 0 )
  {
    CurrentIrql = 15;
    v43 = 15;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v43 = CurrentIrql;
    v7 = 0;
LABEL_7:
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      while ( 1 )
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
          {
LABEL_57:
            HvlNotifyLongSpinWait(v7);
            goto LABEL_10;
          }
          for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
          {
            v24 = KiProcessorBlock[i];
            if ( (*(_BYTE *)(v24 + 35) & 1) != 0 )
            {
              v25 = *(_QWORD *)(v24 + 36600);
              if ( !v25 || !*(_BYTE *)(v25 + 65) || !*(_BYTE *)(v25 + 64) )
                goto LABEL_57;
            }
          }
        }
        _mm_pause();
LABEL_10:
        if ( !CurrentThread->ThreadLock )
          goto LABEL_7;
      }
    }
  }
  for ( ; CurrentThread->ApcState.KernelApcPending; CurrentIrql = v43 )
  {
    if ( CurrentIrql )
      break;
    if ( CurrentThread->SpecialApcDisable )
      break;
    KiReleaseThreadLockLowerIrql(CurrentThread, 0LL);
    KiAcquireThreadLockRaiseToDpc(CurrentThread, &v43);
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v8 = &CurrentThread->152, ($241382875694CED3D471BC5892DE3337 *)v8->ApcState.ApcListHead[0].Flink != v8)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v9 = &CurrentThread->600;
  if ( ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)a1 == &CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
    Flink = v9->SavedApcState.ApcListHead[0].Flink;
    if ( ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)v9->SavedApcState.ApcListHead[0].Flink == v9 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v8->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v8;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v8->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v8;
      Blink->Flink = (struct _LIST_ENTRY *)v8;
    }
    v11 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
    v12 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v11 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v12->Flink = v12;
      CurrentThread->ApcState.UserApcPendingAll = 0;
    }
    else
    {
      v22 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v12->Flink = (struct _LIST_ENTRY *)v11;
      CurrentThread->ApcState.ApcListHead[1].Blink = v22;
      v11->Header.WaitListHead.Flink = v12;
      v22->Flink = v12;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    CurrentThread->ApcState.Process = *(_KPROCESS **)(a1 + 32);
    CurrentThread->ApcState.InProgressFlags = *(_BYTE *)(a1 + 40);
    CurrentThread->ApcState.KernelApcPending = *(_BYTE *)(a1 + 41);
    CurrentThread->ApcState.UserApcPendingAll = *(_BYTE *)(a1 + 42);
    v31 = *(struct _LIST_ENTRY **)a1;
    if ( *(_QWORD *)a1 == a1 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v8->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v8;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      v34 = *(struct _LIST_ENTRY **)(a1 + 8);
      v8->ApcState.ApcListHead[0].Flink = v31;
      CurrentThread->ApcState.ApcListHead[0].Blink = v34;
      v31->Blink = (struct _LIST_ENTRY *)v8;
      v34->Flink = (struct _LIST_ENTRY *)v8;
    }
    v32 = *(struct _LIST_ENTRY **)(a1 + 16);
    v33 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v32 == (struct _LIST_ENTRY *)(a1 + 16) )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v33->Flink = v33;
      CurrentThread->ApcState.UserApcPendingAll = 0;
    }
    else
    {
      v35 = *(struct _LIST_ENTRY **)(a1 + 24);
      v33->Flink = v32;
      CurrentThread->ApcState.ApcListHead[1].Blink = v35;
      v32->Blink = v33;
      v35->Flink = v33;
    }
  }
  if ( (a2 & 2) == 0 )
    CurrentThread->ThreadLock = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  p_ThreadListHead = (unsigned __int64)CurrentThread->ApcState.Process;
  Group = CurrentPrcb->Group;
  GroupIndex = CurrentPrcb->GroupIndex;
  _interlockedbittestandset64(
    (volatile signed __int32 *)(*(_QWORD *)(p_ThreadListHead + 128) + 8 * Group + 8),
    GroupIndex);
  v17 = *(_QWORD *)(p_ThreadListHead + 40);
  if ( KiKvaShadow )
  {
    v18 = v17 | 0x8000000000000000uLL;
    if ( (v17 & 2) == 0 )
      v18 = *(_QWORD *)(p_ThreadListHead + 40);
    __writegsqword(0xB000u, v18);
    KiSetAddressPolicy(*(unsigned __int8 *)(p_ThreadListHead + 352));
  }
  if ( (HvlEnlightenments & 1) != 0 )
    HvlSwitchVirtualAddressSpace(v17);
  else
    __writecr3(v17);
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
      v40 = __readcr3();
      __writecr3(v40);
    }
  }
  v19 = GroupIndex;
  _interlockedbittestandreset64((volatile signed __int32 *)&Process->ActiveProcessors->Bitmap[Group], GroupIndex);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( (a2 & 2) == 0 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&Process->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8) == 8 )
  {
    v26 = KeGetCurrentIrql();
    if ( v26 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v19) = 2;
      KiRaiseIrqlProcessIrqlFlags(v26, v19);
    }
    KiAcquireKobjectLockSafe(Process);
    Value = Process->StackCount.Value;
    if ( (Value & 7) == 0 )
    {
      p_ThreadListHead = (unsigned __int64)&Process->ThreadListHead;
      if ( *(_QWORD *)p_ThreadListHead != p_ThreadListHead )
      {
        while ( Value < 8 )
        {
          p_ThreadListHead = Value & 0xFFFFFFF8 | 3;
          v28 = Value;
          Value = _InterlockedCompareExchange(&Process->StackCount.Value, p_ThreadListHead, Value);
          if ( v28 == Value )
          {
            _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
            p_SwapListEntry = (signed __int64 *)&Process->SwapListEntry;
            _m_prefetchw(&KiSupervisorXStateFeaturesLock.Timer.DueTime);
            QuadPart = KiSupervisorXStateFeaturesLock.Timer.DueTime.QuadPart;
            do
            {
              *p_SwapListEntry = QuadPart;
              p_ThreadListHead = QuadPart;
              QuadPart = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.Timer.DueTime.QuadPart,
                           (signed __int64)p_SwapListEntry,
                           QuadPart);
            }
            while ( QuadPart != p_ThreadListHead );
            if ( !QuadPart )
              KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.Timer.TimerListEntry, 10, 0);
            goto LABEL_71;
          }
        }
      }
    }
    _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
LABEL_71:
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
    __writecr8(v26);
  }
  result = &CurrentThread->152;
  if ( ($241382875694CED3D471BC5892DE3337 *)result->ApcState.ApcListHead[0].Flink != result )
  {
    CurrentThread->ApcState.KernelApcPending = 1;
    v42 = 0LL;
    if ( (KiTrapFeatures & 0x10) != 0 )
    {
      v36 = HalpDisableInterrupts(p_ThreadListHead, v19, KeGetCurrentPrcb());
      v38 = *(_DWORD *)(v37 + 168);
      v39 = v36;
      *(_DWORD *)(v37 + 168) = v38 | 2;
      if ( !v38 )
        __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
      if ( v39 )
        _enable();
    }
    v41 = 5;
    return ($241382875694CED3D471BC5892DE3337 *)HalpInterruptSendIpi(&v41, 0x1Fu);
  }
  return result;
}
