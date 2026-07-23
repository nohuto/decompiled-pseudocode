/*
 * XREFs of ExReleaseFastResource @ 0x14027A880
 * Callers:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpFastResourceLegacyRelease @ 0x140464DC0 (ExpFastResourceLegacyRelease.c)
 *     DifExReleaseFastResourceWrapper @ 0x140657FC0 (DifExReleaseFastResourceWrapper.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ?KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z @ 0x140270714 (-KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z.c)
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

void __fastcall ExReleaseFastResource(struct _KTHREAD *a1, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // r15
  __int64 v4; // r9
  unsigned __int64 *p_ThreadLock; // r8
  unsigned __int8 v6; // al
  struct _KTHREAD *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v10; // rax
  int v11; // eax
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  signed __int64 v14; // rtt
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int64 v19; // rcx
  ULONG_PTR v20; // rdi
  struct _KTHREAD *v21; // rcx
  int v22; // ecx
  unsigned __int8 v23; // si
  int v24; // r12d
  struct _KPRCB *v25; // rcx
  unsigned __int32 *v26; // r8
  signed __int8 v27; // al
  signed __int8 v28; // tt
  signed __int8 v29; // al
  signed __int8 v30; // tt
  char v31; // r8
  __int64 v32; // rbx
  struct _KPRCB *v33; // r9
  unsigned __int32 *v34; // r8
  unsigned __int8 v35; // si
  signed __int64 v36; // rax
  struct _LIST_ENTRY *Blink; // r10
  __int64 v38; // r8
  int v39; // r9d
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  signed __int64 v42; // rtt
  struct _LIST_ENTRY *v43; // r10
  struct _LIST_ENTRY *v44; // rcx
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v46; // rdx
  char v47; // di
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  _QWORD *v53; // rax
  struct _KLOCK_ENTRY *v54; // rdx
  __int64 v55; // rax
  unsigned __int32 v56; // eax
  unsigned __int32 v57; // ett
  unsigned __int32 v58; // eax
  unsigned __int32 v59; // ett
  unsigned __int32 v60; // eax
  __int64 v61; // rdx
  unsigned __int32 v62; // ett
  __int64 StackBase_low; // r10
  struct _LIST_ENTRY *v64; // rax
  struct _KTHREAD *v65; // rax
  bool v66; // zf
  unsigned __int64 *v67; // rbx
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rcx
  unsigned __int64 **CycleTime; // rax
  struct _KPRCB *v71; // rcx
  unsigned __int32 *v72; // r8
  signed __int64 v73; // rax
  signed __int64 v74; // rtt
  ULONG_PTR v75; // rdi
  struct _KTHREAD *v76; // rcx
  unsigned __int8 v77; // si
  int v78; // r12d
  struct _KPRCB *v79; // rcx
  unsigned __int32 *v80; // r8
  struct AutoBoost::_AB_THREAD_ENTRY *v81; // rdx
  AutoBoost *v82; // rcx
  char v83; // r8
  __int64 v84; // rbx
  int v85; // ecx
  struct _KPRCB *v86; // r9
  unsigned __int32 *v87; // r8
  unsigned __int32 v88; // eax
  unsigned __int32 v89; // ett
  unsigned __int32 v90; // eax
  unsigned __int32 v91; // ett
  unsigned __int32 v92; // eax
  __int64 v93; // rdx
  unsigned __int32 v94; // ett
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  struct _LIST_ENTRY *v96; // [rsp+80h] [rbp+8h] BYREF

  v2 = BugCheckParameter3;
  v4 = WORD1(a1->SListFaultAddress);
  LOWORD(v4) = WORD1(a1->SListFaultAddress) & 1;
  if ( (*(_QWORD *)&a1->Header.Lock & 1) == 0 )
  {
    if ( !(_WORD)v4 )
      goto LABEL_3;
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      goto LABEL_12;
    if ( (struct _KTHREAD *)(*(_QWORD *)(BugCheckParameter3 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
      KeBugCheckEx(0x1C6u, 9uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter3 + 37) & 2) == 0 )
    {
      v10 = *(struct _KTHREAD **)(BugCheckParameter3 + 24);
      if ( v10 != a1 )
      {
        if ( v10 )
          KeBugCheckEx(0x1C6u, 8uLL, (ULONG_PTR)a1, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 24));
      }
    }
    if ( (*(_QWORD *)(BugCheckParameter3 + 16) & 1) != 0 )
      KeBugCheckEx(0x1C6u, 0xAuLL, BugCheckParameter3, 0LL, 0LL);
    v11 = --*(_DWORD *)(BugCheckParameter3 + 32);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v11 > 0 )
      return;
    _m_prefetchw(a1);
    v12 = *(_QWORD *)&a1->Header.Lock;
    while ( 1 )
    {
      v13 = v12 ^ (v12 ^ ((v12 & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v13 & 2) != 0 && (v13 < 0 || (v13 & 0xFFFFFFFFFFFFFFFCuLL) == 0) )
        break;
      v14 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v13, v12);
      if ( v14 == v12 )
      {
        _disable();
        v15 = *(_QWORD *)BugCheckParameter3;
        v16 = *(_QWORD **)(BugCheckParameter3 + 8);
        if ( *(_QWORD *)(*(_QWORD *)BugCheckParameter3 + 8LL) == BugCheckParameter3 && *v16 == BugCheckParameter3 )
        {
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          *(_QWORD *)BugCheckParameter3 = 0LL;
          *(_QWORD *)(BugCheckParameter3 + 8) = 0LL;
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v56 = *SchedulerAssist;
            do
            {
              BugCheckParameter3 = v56;
              LODWORD(BugCheckParameter3) = v56 & 0xFFDFFFFF;
              v57 = v56;
              v56 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v56 & 0xFFDFFFFF, v56);
            }
            while ( v57 != v56 );
            if ( (v56 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb, BugCheckParameter3, SchedulerAssist, v4);
          }
          _enable();
          v19 = *(unsigned __int8 *)(v2 + 36);
          *(_QWORD *)(v2 + 24) = 0LL;
          if ( (_BYTE)v19 )
          {
            v20 = (unsigned int)v19;
            if ( (KiAbpGlobalState & 1) != 0 )
            {
              _disable();
              if ( (v19 & 3) == 3 )
              {
                BugCheckParameter3 = ((unsigned __int64)(unsigned int)v19 >> 2) & 3;
                v20 = *((_QWORD *)KeGetCurrentThread()->AutoBoostThreadState + BugCheckParameter3)
                    + 48 * (v19 >> 4)
                    + 16;
                v21 = *(struct _KTHREAD **)v20;
                if ( (*(_BYTE *)(v20 + 32) & 2) != 0 )
                  v21 = (struct _KTHREAD *)v21->SListFaultAddress;
                if ( v21 != a1 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)a1, v20, 0LL);
              }
              v23 = -1;
              v24 = 1;
              *(_BYTE *)(v20 + 33) = *(_BYTE *)(v20 + 33) & 0xFC | 1;
              if ( (*(_BYTE *)(v20 + 32) & 2) != 0 )
              {
                v23 = KeGetCurrentIrql();
                if ( v23 != 2 )
                  __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(BugCheckParameter3) = 2;
                  KiRaiseIrqlProcessIrqlFlags(v23, BugCheckParameter3);
                }
                v25 = KeGetCurrentPrcb();
                v26 = (unsigned __int32 *)v25->SchedulerAssist;
                if ( v26 )
                {
                  _m_prefetchw(v26);
                  v58 = *v26;
                  do
                  {
                    BugCheckParameter3 = v58;
                    LODWORD(BugCheckParameter3) = v58 & 0xFFDFFFFF;
                    v59 = v58;
                    v58 = _InterlockedCompareExchange((volatile signed __int32 *)v26, v58 & 0xFFDFFFFF, v58);
                  }
                  while ( v59 != v58 );
                  if ( (v58 & 0x200000) != 0 )
                    KiRemoveSystemWorkPriorityKick(v25, BugCheckParameter3, v26, v4);
                }
                _enable();
                v24 = 0;
                _m_prefetchw((const void *)(v20 + 35));
                v27 = *(_BYTE *)(v20 + 35);
                do
                {
                  v28 = v27;
                  v27 = _InterlockedCompareExchange8((volatile signed __int8 *)(v20 + 35), v27 | 1, v27);
                }
                while ( v28 != v27 );
                if ( (v27 & 1) != 0 )
                {
                  do
                  {
                    while ( (*(_BYTE *)(v20 + 35) & 1) != 0 )
                      _mm_pause();
                    _m_prefetchw((const void *)(v20 + 35));
                    v29 = *(_BYTE *)(v20 + 35);
                    do
                    {
                      v30 = v29;
                      v29 = _InterlockedCompareExchange8((volatile signed __int8 *)(v20 + 35), v29 | 1, v29);
                    }
                    while ( v30 != v29 );
                  }
                  while ( (v29 & 1) != 0 );
                }
                AutoBoost::KiAbpEntryUnlink((AutoBoost *)v20, (struct AutoBoost::_AB_THREAD_ENTRY *)BugCheckParameter3);
                _InterlockedAnd8((volatile signed __int8 *)(v20 + 35), 0xFEu);
              }
              v31 = *(_BYTE *)(v20 + 36);
              v32 = *(_QWORD *)(v20 + 40);
              *(_DWORD *)(v20 + 40) = 0;
              *(_QWORD *)v20 = 0LL;
              *(_WORD *)(v20 + 32) = 0;
              *(_WORD *)(v20 - 48LL * (v31 & 0x7F) - 8) |= 1 << (v31 & 0xF);
              v22 = v32;
              if ( v24 )
              {
                v33 = KeGetCurrentPrcb();
                v34 = (unsigned __int32 *)v33->SchedulerAssist;
                if ( v34 )
                {
                  _m_prefetchw(v34);
                  v60 = *v34;
                  do
                  {
                    v61 = v60;
                    LODWORD(v61) = v60 & 0xFFDFFFFF;
                    v62 = v60;
                    v60 = _InterlockedCompareExchange((volatile signed __int32 *)v34, v60 & 0xFFDFFFFF, v60);
                  }
                  while ( v62 != v60 );
                  if ( (v60 & 0x200000) != 0 )
                  {
                    KiRemoveSystemWorkPriorityKick(v33, v61, v34, v33);
                    v22 = v32;
                  }
                }
                _enable();
              }
              else
              {
                if ( KiIrqlFlags )
                {
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
                  v22 = v32;
                }
                __writecr8(v23);
              }
              if ( v22 )
                AutoBoost::KiAbpUnboostThread(
                  *(_QWORD *)(v20 - 48LL * (*(_BYTE *)(v20 + 36) & 0x7F) - 16),
                  a1,
                  v32,
                  0LL);
            }
            else
            {
              if ( (v19 & 1) != 0 )
              {
                v54 = (struct _KLOCK_ENTRY *)KeGetCurrentThread();
                v20 = 88 * ((unsigned __int64)(unsigned int)v19 >> 1) + v54[12].BoostBitmap.AllFields + 16;
                v55 = *(_QWORD *)v20 & 0x7FFFFFFFFFFFFFFCLL;
                if ( v55 && *(char *)(v20 + 8) >= 0 )
                  v55 |= 0x8000000000000000uLL;
                if ( (struct _KTHREAD *)v55 != a1 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v54, (ULONG_PTR)a1, v20, 0LL);
              }
              else
              {
                v54 = *(struct _KLOCK_ENTRY **)((unsigned int)v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16);
              }
              _disable();
              *(_BYTE *)(v20 + 10) = 0;
              LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts((LegacyAutoBoost *)v20, v54, a1, (void *)1, 0LL);
            }
LABEL_43:
            *(_BYTE *)(v2 + 36) = 0;
          }
          return;
        }
LABEL_62:
        __fastfail(3u);
      }
    }
    v35 = KeGetCurrentIrql();
    if ( v35 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v35, 2LL);
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
    v36 = *(_QWORD *)&a1->Header.Lock;
    do
    {
      Blink = a1->Header.WaitListHead.Blink;
      v38 = (v36 >> 2) - 1;
      if ( Blink || LODWORD(a1->StackBase) )
      {
        v39 = 1;
        v40 = 2LL;
      }
      else
      {
        v39 = 0;
        v40 = 0LL;
      }
      v41 = (v40 | v36 & 0xFFFFFFFFFFFFFFFDuLL) ^ ((v40 | v36 & 0xFFFFFFFFFFFFFFFDuLL) ^ ((v40 & 0xFFFFFFFFFFFFFFFCuLL | v36 & 0xFFFFFFFFFFFFFFFCuLL)
                                                                                        - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v36 >> 2 == 1 )
      {
        if ( Blink )
        {
          v41 |= 1uLL;
        }
        else
        {
          StackBase_low = LODWORD(a1->StackBase);
          if ( (_DWORD)StackBase_low )
            v41 ^= (v41 ^ (v41 + 4 * StackBase_low)) & 0xFFFFFFFFFFFFFFFCuLL;
        }
      }
      if ( v41 == v36 )
        break;
      v42 = v36;
      v36 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v41, v36);
    }
    while ( v42 != v36 );
    v43 = 0LL;
    if ( v38 )
      goto LABEL_124;
    v44 = a1->Header.WaitListHead.Blink;
    if ( v44 )
    {
      if ( v44->Flink == v44 )
      {
        a1->Header.WaitListHead.Blink = 0LL;
      }
      else
      {
        a1->Header.WaitListHead.Blink = v44->Flink;
        Flink = v44->Flink;
        v46 = v44->Blink;
        if ( v44->Flink->Blink != v44 || v46->Flink != v44 )
          goto LABEL_62;
        v46->Flink = Flink;
        Flink->Blink = v46;
      }
      v43 = v44[1].Flink;
      v44->Blink = v44;
      v44->Flink = v44;
      v96 = v44;
      goto LABEL_88;
    }
    if ( LODWORD(a1->StackBase) )
    {
      v64 = a1->Header.WaitListHead.Flink;
      a1->Header.WaitListHead.Flink = 0LL;
      LODWORD(a1->StackBase) = 0;
      v96 = v64;
    }
    else
    {
LABEL_124:
      v96 = 0LL;
    }
LABEL_88:
    v47 = 0;
    if ( v39 )
      v47 = 2;
    if ( v43 )
      v47 |= 1u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpCommitWakeFastResource((volatile signed __int32 **)&v96, v48, v49, v47);
    v52 = *(_QWORD *)v2;
    v53 = *(_QWORD **)(v2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) == v2 && *v53 == v2 )
    {
      *v53 = v52;
      *(_QWORD *)(v52 + 8) = v53;
      *(_QWORD *)v2 = 0LL;
      *(_QWORD *)(v2 + 8) = 0LL;
      *(_QWORD *)(v2 + 24) = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v35);
      __writecr8(v35);
      if ( *(_BYTE *)(v2 + 36) )
      {
        KeAbPostReleaseEx(a1, *(unsigned __int8 *)(v2 + 36), v50, v51);
        goto LABEL_43;
      }
      return;
    }
    goto LABEL_62;
  }
  p_ThreadLock = &a1->ThreadLock;
  if ( !(_WORD)v4 )
LABEL_3:
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)a1, 0LL, 0LL);
  v6 = KeGetCurrentIrql();
  v7 = KeGetCurrentThread();
  if ( v6 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v6, 2uLL, 0LL);
  if ( !v6 && (v7->MiscFlags & 0x400) == 0 && !v7->WaitBlock[3].SpareLong )
LABEL_12:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (struct _KTHREAD *)(p_ThreadLock[2] & 0xFFFFFFFFFFFFFFFEuLL) != v7 )
    KeBugCheckEx(0x1C6u, 9uLL, (ULONG_PTR)p_ThreadLock, p_ThreadLock[2] & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*((_BYTE *)p_ThreadLock + 37) & 2) == 0 )
  {
    v65 = (struct _KTHREAD *)p_ThreadLock[3];
    if ( v65 != a1 )
    {
      if ( v65 )
        KeBugCheckEx(0x1C6u, 8uLL, (ULONG_PTR)a1, (ULONG_PTR)p_ThreadLock, p_ThreadLock[3]);
    }
  }
  if ( (p_ThreadLock[2] & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, (ULONG_PTR)p_ThreadLock, 0LL, 0LL);
  v66 = LODWORD(a1->StateSaveArea)-- == 1;
  v67 = &a1->ThreadLock;
  if ( !v66 )
    return;
  v68 = BYTE4(a1->StateSaveArea);
  _disable();
  v69 = *v67;
  CycleTime = (unsigned __int64 **)a1->CycleTime;
  if ( *(unsigned __int64 **)(*v67 + 8) != v67 || *CycleTime != v67 )
    goto LABEL_62;
  *CycleTime = (unsigned __int64 *)v69;
  *(_QWORD *)(v69 + 8) = CycleTime;
  *v67 = 0LL;
  a1->CycleTime = 0LL;
  v71 = KeGetCurrentPrcb();
  v72 = (unsigned __int32 *)v71->SchedulerAssist;
  if ( v72 )
  {
    _m_prefetchw(v72);
    v88 = *v72;
    do
    {
      BugCheckParameter3 = v88;
      LODWORD(BugCheckParameter3) = v88 & 0xFFDFFFFF;
      v89 = v88;
      v88 = _InterlockedCompareExchange((volatile signed __int32 *)v72, v88 & 0xFFDFFFFF, v88);
    }
    while ( v89 != v88 );
    if ( (v88 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v71, BugCheckParameter3, v72, v4);
  }
  _enable();
  *(_QWORD *)&a1->CurrentRunTime = 0LL;
  BYTE4(a1->StateSaveArea) = 0;
  _m_prefetchw(a1);
  v73 = *(_QWORD *)&a1->Header.Lock;
  do
  {
    if ( (v73 & 2) != 0 )
    {
      ExpReleaseFastResourceExclusiveSlow((signed __int64 *)&a1->Header.Lock, v68);
      return;
    }
    v74 = v73;
    v73 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, v73);
  }
  while ( v74 != v73 );
  if ( (_BYTE)v68 )
  {
    v75 = v68;
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      _disable();
      if ( (v68 & 3) == 3 )
      {
        BugCheckParameter3 = (v68 >> 2) & 3;
        v75 = *((_QWORD *)KeGetCurrentThread()->AutoBoostThreadState + BugCheckParameter3) + 48 * (v68 >> 4) + 16;
        v76 = *(struct _KTHREAD **)v75;
        if ( (*(_BYTE *)(v75 + 32) & 2) != 0 )
          v76 = (struct _KTHREAD *)v76->SListFaultAddress;
        if ( v76 != a1 )
          KeBugCheckEx(0x162u, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)a1, v75, 0LL);
      }
      v77 = -1;
      v78 = 1;
      *(_BYTE *)(v75 + 33) = *(_BYTE *)(v75 + 33) & 0xFC | 1;
      if ( (*(_BYTE *)(v75 + 32) & 2) != 0 )
      {
        v77 = KeGetCurrentIrql();
        if ( v77 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(BugCheckParameter3) = 2;
          KiRaiseIrqlProcessIrqlFlags(v77, BugCheckParameter3);
        }
        v79 = KeGetCurrentPrcb();
        v80 = (unsigned __int32 *)v79->SchedulerAssist;
        if ( v80 )
        {
          _m_prefetchw(v80);
          v90 = *v80;
          do
          {
            BugCheckParameter3 = v90;
            LODWORD(BugCheckParameter3) = v90 & 0xFFDFFFFF;
            v91 = v90;
            v90 = _InterlockedCompareExchange((volatile signed __int32 *)v80, v90 & 0xFFDFFFFF, v90);
          }
          while ( v91 != v90 );
          if ( (v90 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v79, BugCheckParameter3, v80, v4);
        }
        _enable();
        v78 = 0;
        AutoBoost::KiAbpAcquireEntryLockRaw((AutoBoost *)v75, (struct AutoBoost::_AB_THREAD_ENTRY *)BugCheckParameter3);
        AutoBoost::KiAbpEntryUnlink(v82, v81);
        _InterlockedAnd8((volatile signed __int8 *)(v75 + 35), 0xFEu);
      }
      v83 = *(_BYTE *)(v75 + 36);
      v84 = *(_QWORD *)(v75 + 40);
      *(_DWORD *)(v75 + 40) = 0;
      *(_QWORD *)v75 = 0LL;
      *(_WORD *)(v75 + 32) = 0;
      *(_WORD *)(v75 - 48LL * (v83 & 0x7F) - 8) |= 1 << (v83 & 0xF);
      v85 = v84;
      if ( v78 )
      {
        v86 = KeGetCurrentPrcb();
        v87 = (unsigned __int32 *)v86->SchedulerAssist;
        if ( v87 )
        {
          _m_prefetchw(v87);
          v92 = *v87;
          do
          {
            v93 = v92;
            LODWORD(v93) = v92 & 0xFFDFFFFF;
            v94 = v92;
            v92 = _InterlockedCompareExchange((volatile signed __int32 *)v87, v92 & 0xFFDFFFFF, v92);
          }
          while ( v94 != v92 );
          if ( (v92 & 0x200000) != 0 )
          {
            KiRemoveSystemWorkPriorityKick(v86, v93, v87, v86);
            v85 = v84;
          }
        }
        _enable();
      }
      else
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v77);
          v85 = v84;
        }
        __writecr8(v77);
      }
      if ( v85 )
        AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v75 - 48LL * (*(_BYTE *)(v75 + 36) & 0x7F) - 16), a1, v84, 0LL);
    }
    else
    {
      LegacyAutoBoost::KiAbPostReleaseEx(a1, v68, v72);
    }
  }
}
