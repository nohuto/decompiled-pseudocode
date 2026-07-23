/*
 * XREFs of ExpReleaseFastResourceShared @ 0x140271F10
 * Callers:
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     ExpCommitWakeFastResource @ 0x140273060 (ExpCommitWakeFastResource.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExpReleaseFastResourceShared(struct _KTHREAD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  signed __int64 v6; // rax
  signed __int64 v7; // rcx
  signed __int64 v8; // rtt
  __int64 v9; // rcx
  _QWORD *v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // rdi
  unsigned __int8 v15; // si
  int v16; // r12d
  struct _KPRCB *v17; // rcx
  unsigned __int32 *v18; // r8
  signed __int8 v19; // al
  signed __int8 v20; // tt
  signed __int8 v21; // al
  signed __int8 v22; // tt
  char v23; // r8
  __int64 v24; // rbx
  int v25; // ecx
  struct _KPRCB *v26; // r9
  unsigned __int32 *v27; // r8
  struct _KTHREAD *v28; // rcx
  unsigned __int8 CurrentIrql; // si
  signed __int64 v30; // rax
  struct _LIST_ENTRY *Blink; // r10
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  signed __int64 v36; // rtt
  struct _LIST_ENTRY *v37; // r10
  struct _LIST_ENTRY *v38; // rcx
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v40; // rdx
  unsigned int v41; // edi
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  _QWORD *v47; // rax
  struct _KLOCK_ENTRY *CurrentThread; // rdx
  __int64 v49; // rax
  unsigned __int32 v50; // eax
  unsigned __int32 v51; // ett
  unsigned __int32 v52; // eax
  unsigned __int32 v53; // ett
  unsigned __int32 v54; // eax
  __int64 v55; // rdx
  unsigned __int32 v56; // ett
  __int64 StackBase_low; // r10
  struct _LIST_ENTRY *v58; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  struct _LIST_ENTRY *v60; // [rsp+88h] [rbp+10h] BYREF

  --*(_DWORD *)(a2 + 32);
  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(int *)(a2 + 32) > 0 )
    return;
  _m_prefetchw(a1);
  v6 = *(_QWORD *)&a1->Header.Lock;
  do
  {
    v7 = v6 ^ (v6 ^ ((v6 & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v7 & 2) != 0 && (v7 < 0 || (v7 & 0xFFFFFFFFFFFFFFFCuLL) == 0) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&a1->StackLimit;
      LockHandle.LockQueue.Next = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _InterlockedExchange64((volatile __int64 *)&a1->StackLimit, (__int64)&LockHandle) )
          KxWaitForLockOwnerShip(&LockHandle);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, &a1->StackLimit);
      }
      _m_prefetchw(a1);
      v30 = *(_QWORD *)&a1->Header.Lock;
      do
      {
        Blink = a1->Header.WaitListHead.Blink;
        v32 = (v30 >> 2) - 1;
        if ( Blink || LODWORD(a1->StackBase) )
        {
          v33 = 1;
          v34 = 2LL;
        }
        else
        {
          v33 = 0;
          v34 = 0LL;
        }
        v35 = (v34 | v30 & 0xFFFFFFFFFFFFFFFDuLL) ^ ((v34 | v30 & 0xFFFFFFFFFFFFFFFDuLL) ^ ((v34 & 0xFFFFFFFFFFFFFFFCuLL | v30 & 0xFFFFFFFFFFFFFFFCuLL)
                                                                                          - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v30 >> 2 == 1 )
        {
          if ( Blink )
          {
            v35 |= 1uLL;
          }
          else
          {
            StackBase_low = LODWORD(a1->StackBase);
            if ( (_DWORD)StackBase_low )
              v35 ^= (v35 ^ (v35 + 4 * StackBase_low)) & 0xFFFFFFFFFFFFFFFCuLL;
          }
        }
        if ( v35 == v30 )
          break;
        v36 = v30;
        v30 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v35, v30);
      }
      while ( v36 != v30 );
      v37 = 0LL;
      if ( !v32 )
      {
        v38 = a1->Header.WaitListHead.Blink;
        if ( v38 )
        {
          if ( v38->Flink == v38 )
          {
            a1->Header.WaitListHead.Blink = 0LL;
          }
          else
          {
            a1->Header.WaitListHead.Blink = v38->Flink;
            Flink = v38->Flink;
            v40 = v38->Blink;
            if ( v38->Flink->Blink != v38 || v40->Flink != v38 )
              goto LABEL_39;
            v40->Flink = Flink;
            Flink->Blink = v40;
          }
          v37 = v38[1].Flink;
          v38->Blink = v38;
          v38->Flink = v38;
          v60 = v38;
LABEL_65:
          v41 = 0;
          if ( v33 )
            v41 = 2;
          if ( v37 )
            v41 |= 1u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          ExpCommitWakeFastResource(&v60, v42, v43, v41);
          v46 = *(_QWORD *)v4;
          v47 = *(_QWORD **)(v4 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) == v4 && *v47 == v4 )
          {
            *v47 = v46;
            *(_QWORD *)(v46 + 8) = v47;
            *(_QWORD *)v4 = 0LL;
            *(_QWORD *)(v4 + 8) = 0LL;
            *(_QWORD *)(v4 + 24) = 0LL;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            if ( *(_BYTE *)(v4 + 36) )
            {
              KeAbPostReleaseEx(a1, *(unsigned __int8 *)(v4 + 36), v44, v45);
              goto LABEL_33;
            }
            return;
          }
LABEL_39:
          __fastfail(3u);
        }
        if ( LODWORD(a1->StackBase) )
        {
          v58 = a1->Header.WaitListHead.Flink;
          a1->Header.WaitListHead.Flink = 0LL;
          LODWORD(a1->StackBase) = 0;
          v60 = v58;
          goto LABEL_65;
        }
      }
      v60 = 0LL;
      goto LABEL_65;
    }
    v8 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v7, v6);
  }
  while ( v8 != v6 );
  _disable();
  v9 = *(_QWORD *)a2;
  v10 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v10 != a2 )
    goto LABEL_39;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v50 = *SchedulerAssist;
    do
    {
      a2 = v50;
      LODWORD(a2) = v50 & 0xFFDFFFFF;
      v51 = v50;
      v50 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v50 & 0xFFDFFFFF, v50);
    }
    while ( v51 != v50 );
    if ( (v50 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2, SchedulerAssist, a4);
  }
  _enable();
  v13 = *(unsigned __int8 *)(v4 + 36);
  *(_QWORD *)(v4 + 24) = 0LL;
  if ( (_BYTE)v13 )
  {
    v14 = (unsigned int)v13;
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      _disable();
      if ( (v13 & 3) == 3 )
      {
        a2 = (v13 >> 2) & 3;
        v14 = *((_QWORD *)KeGetCurrentThread()->AutoBoostThreadState + a2) + 48 * (v13 >> 4) + 16;
        v28 = *(struct _KTHREAD **)v14;
        if ( (*(_BYTE *)(v14 + 32) & 2) != 0 )
          v28 = (struct _KTHREAD *)v28->SListFaultAddress;
        if ( v28 != a1 )
          KeBugCheckEx(0x162u, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)a1, v14, 0LL);
      }
      v15 = -1;
      v16 = 1;
      *(_BYTE *)(v14 + 33) = *(_BYTE *)(v14 + 33) & 0xFC | 1;
      if ( (*(_BYTE *)(v14 + 32) & 2) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          KiRaiseIrqlProcessIrqlFlags(v15, a2);
        }
        v17 = KeGetCurrentPrcb();
        v18 = (unsigned __int32 *)v17->SchedulerAssist;
        if ( v18 )
        {
          _m_prefetchw(v18);
          v52 = *v18;
          do
          {
            a2 = v52;
            LODWORD(a2) = v52 & 0xFFDFFFFF;
            v53 = v52;
            v52 = _InterlockedCompareExchange((volatile signed __int32 *)v18, v52 & 0xFFDFFFFF, v52);
          }
          while ( v53 != v52 );
          if ( (v52 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v17, a2, v18, a4);
        }
        _enable();
        v16 = 0;
        _m_prefetchw((const void *)(v14 + 35));
        v19 = *(_BYTE *)(v14 + 35);
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange8((volatile signed __int8 *)(v14 + 35), v19 | 1, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 1) != 0 )
        {
          do
          {
            while ( (*(_BYTE *)(v14 + 35) & 1) != 0 )
              _mm_pause();
            _m_prefetchw((const void *)(v14 + 35));
            v21 = *(_BYTE *)(v14 + 35);
            do
            {
              v22 = v21;
              v21 = _InterlockedCompareExchange8((volatile signed __int8 *)(v14 + 35), v21 | 1, v21);
            }
            while ( v22 != v21 );
          }
          while ( (v21 & 1) != 0 );
        }
        AutoBoost::KiAbpEntryUnlink((AutoBoost *)v14, (struct AutoBoost::_AB_THREAD_ENTRY *)a2);
        _InterlockedAnd8((volatile signed __int8 *)(v14 + 35), 0xFEu);
      }
      v23 = *(_BYTE *)(v14 + 36);
      v24 = *(_QWORD *)(v14 + 40);
      *(_DWORD *)(v14 + 40) = 0;
      *(_QWORD *)v14 = 0LL;
      *(_WORD *)(v14 + 32) = 0;
      *(_WORD *)(v14 - 48LL * (v23 & 0x7F) - 8) |= 1 << (v23 & 0xF);
      v25 = v24;
      if ( v16 )
      {
        v26 = KeGetCurrentPrcb();
        v27 = (unsigned __int32 *)v26->SchedulerAssist;
        if ( v27 )
        {
          _m_prefetchw(v27);
          v54 = *v27;
          do
          {
            v55 = v54;
            LODWORD(v55) = v54 & 0xFFDFFFFF;
            v56 = v54;
            v54 = _InterlockedCompareExchange((volatile signed __int32 *)v27, v54 & 0xFFDFFFFF, v54);
          }
          while ( v56 != v54 );
          if ( (v54 & 0x200000) != 0 )
          {
            KiRemoveSystemWorkPriorityKick(v26, v55, v27, v26);
            v25 = v24;
          }
        }
        _enable();
      }
      else
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
          v25 = v24;
        }
        __writecr8(v15);
      }
      if ( v25 )
        AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v14 - 48LL * (*(_BYTE *)(v14 + 36) & 0x7F) - 16), a1, v24, 0LL);
    }
    else
    {
      if ( (v13 & 1) != 0 )
      {
        CurrentThread = (struct _KLOCK_ENTRY *)KeGetCurrentThread();
        v14 = 88 * ((unsigned __int64)(unsigned int)v13 >> 1) + CurrentThread[12].BoostBitmap.AllFields + 16;
        v49 = *(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL;
        if ( v49 && *(char *)(v14 + 8) >= 0 )
          v49 |= 0x8000000000000000uLL;
        if ( (struct _KTHREAD *)v49 != a1 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)a1, v14, 0LL);
      }
      else
      {
        CurrentThread = *(struct _KLOCK_ENTRY **)((unsigned int)v13 - 88LL * (*(_BYTE *)(v13 + 8) & 0x3F) - 16);
      }
      _disable();
      *(_BYTE *)(v14 + 10) = 0;
      LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts((LegacyAutoBoost *)v14, CurrentThread, a1, (void *)1, 0LL);
    }
LABEL_33:
    *(_BYTE *)(v4 + 36) = 0;
  }
}
