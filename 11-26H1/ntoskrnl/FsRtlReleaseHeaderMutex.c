/*
 * XREFs of FsRtlReleaseHeaderMutex @ 0x14027B770
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140205138 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlReleaseEofLock @ 0x140419310 (FsRtlReleaseEofLock.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeAbPreWakeupThread @ 0x140269824 (KeAbPreWakeupThread.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiWaitSatisfyMutant @ 0x14043A4D0 (KiWaitSatisfyMutant.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall FsRtlReleaseHeaderMutex(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // r12d
  ULONG_PTR v5; // r15
  unsigned __int8 v6; // bl
  signed __int32 v7; // eax
  int v8; // ecx
  __int64 v9; // rdx
  signed __int32 v10; // ett
  volatile signed __int32 *v11; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r13
  void *v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // r12
  _QWORD *v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // rcx
  char v20; // al
  char v21; // r15
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rbp
  unsigned __int8 v25; // r14
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v27; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v29; // r9
  unsigned int v30; // r11d
  __int64 *v31; // rsi
  char v32; // al
  __int64 v33; // rcx
  char v34; // r8
  struct _KPRCB *v35; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v37; // al
  signed __int8 v38; // tt
  signed __int8 v39; // al
  signed __int8 v40; // tt
  char v41; // dl
  __int64 v42; // rbx
  struct _KPRCB *v43; // rcx
  unsigned __int32 *v44; // r8
  _BYTE *v45; // rcx
  struct _KTHREAD *v46; // rdx
  char *v47; // r10
  unsigned int v48; // r8d
  __int64 v49; // r9
  LegacyAutoBoost *v50; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int32 v52; // eax
  unsigned __int32 v53; // ett
  unsigned __int32 v54; // eax
  __int64 v55; // rdx
  unsigned __int32 v56; // ett
  struct _KPRCB *v57; // rcx
  unsigned __int32 *v58; // r8
  unsigned __int32 v59; // eax
  __int64 v60; // rdx
  unsigned __int32 v61; // ett
  __int64 v62; // [rsp+30h] [rbp-58h]
  unsigned __int8 v63; // [rsp+90h] [rbp+8h]
  char Priority; // [rsp+98h] [rbp+10h]
  int v65; // [rsp+A0h] [rbp+18h] BYREF
  struct _KTHREAD *v66; // [rsp+A8h] [rbp+20h]

  if ( a2 )
    _InterlockedIncrement(a2);
  v3 = 0LL;
  v4 = 1;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v66 = (struct _KTHREAD *)v5;
  v6 = *(_BYTE *)(v5 + 48);
  v63 = v6;
  *(_QWORD *)(v5 + 8) = 0LL;
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)v5, 1, 0);
  if ( v7 )
  {
    do
    {
      v8 = -1;
      v9 = v7 & 2;
      if ( (v7 & 2) != 0 )
        v8 = 1;
      v10 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)v5, v7 + v8, v7);
    }
    while ( v10 != v7 );
    if ( !(_DWORD)v9 )
    {
      v11 = (volatile signed __int32 *)(v5 + 24);
      Priority = KeGetCurrentThread()->Priority;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      CurrentPrcb = KeGetCurrentPrcb();
      KiAcquireKobjectLockSafe((volatile signed __int32 *)(v5 + 24), v9, a3);
      v15 = (_QWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 28) = 1;
      v16 = *(_QWORD **)(v5 + 32);
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v16 == v15 )
          {
LABEL_22:
            _InterlockedAnd(v11, 0xFFFFFF7F);
            v5 = (ULONG_PTR)v66;
            if ( Priority )
            {
              Next = CurrentPrcb->DeferredReadyListHead.Next;
              if ( Next )
                KeAbPreWakeupThread((AutoBoost *)&Next[-27], v66, v14);
            }
            v4 = 1;
            KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
            v6 = v63;
            goto LABEL_24;
          }
          v17 = (_QWORD *)*v16;
          v18 = (__int64)v16;
          v16 = v17;
          v19 = *(_QWORD **)(v18 + 8);
          if ( v17[1] != v18 || *v19 != v18 )
            __fastfail(3u);
          *v19 = v17;
          v17[1] = v19;
          v20 = *(_BYTE *)(v18 + 16);
          if ( v20 != 1 )
            break;
          v21 = 0;
          v22 = *(_QWORD *)(v18 + 24);
          v62 = *(unsigned __int16 *)(v18 + 18);
          v65 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v65);
            while ( *(_QWORD *)(v22 + 64) );
          }
          if ( *(_BYTE *)(v22 + 388) == 5 )
          {
            v21 = KiSignalThread(CurrentPrcb, v22, v62, v18);
            if ( v21 )
            {
              v45 = *(_BYTE **)(v18 + 32);
              if ( (*v45 & 0x7F) == 2 )
                KiWaitSatisfyMutant(v45, v22, CurrentPrcb);
            }
          }
          *(_QWORD *)(v22 + 64) = 0LL;
          ++*(_BYTE *)(v18 + 17);
          v15 = v11 + 2;
          if ( v21 )
          {
LABEL_21:
            v23 = *((_DWORD *)v11 + 1) - 1;
            *((_DWORD *)v11 + 1) = v23;
            if ( !v23 )
              goto LABEL_22;
            v15 = v11 + 2;
          }
        }
        if ( v20 == 2 )
        {
          *(_BYTE *)(v18 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v18 + 24), (_QWORD *)v18, (__int64)v14);
          goto LABEL_21;
        }
        if ( v20 == 4 )
        {
          *(_BYTE *)(v18 + 17) = 5;
          *((_DWORD *)v11 + 1) = 0;
          KiInsertQueueDpc(*(_QWORD *)(v18 + 24), 0);
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v18, 256LL, 0LL);
        }
        v15 = v11 + 2;
      }
    }
  }
LABEL_24:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  __writecr8(v6);
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    v24 = 0LL;
    v25 = -1;
    _disable();
    CurrentThread = KeGetCurrentThread();
    v27 = 0LL;
    AutoBoostThreadState = (__int64 *)CurrentThread->AutoBoostThreadState;
    v29 = *AutoBoostThreadState;
    v30 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
    while ( 1 )
    {
      if ( (unsigned int)v27 >= v30 )
      {
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, 0LL, 0LL);
        goto LABEL_52;
      }
      v31 = (__int64 *)(v29 + 48LL * (unsigned int)v27 + 16);
      v32 = *((_BYTE *)v31 + 33);
      if ( (v32 & 0x10) == 0 )
      {
        v33 = *v31;
        v34 = v31[4] & 2;
        if ( v34 )
          v33 = *(_QWORD *)(v33 + 24);
        if ( v33 == v5 && (v32 & 2) != 0 )
          break;
      }
      v27 = (unsigned int)(v27 + 1);
    }
    v24 = v29 + 48LL * (unsigned int)v27 + 16;
    *((_BYTE *)v31 + 33) = v32 & 0xFC | 1;
    if ( v34 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v27) = 2;
        KiRaiseIrqlProcessIrqlFlags(v25, v27);
      }
      v35 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)v35->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v52 = *SchedulerAssist;
        do
        {
          v27 = v52;
          LODWORD(v27) = v52 & 0xFFDFFFFF;
          v53 = v52;
          v52 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v52 & 0xFFDFFFFF, v52);
        }
        while ( v53 != v52 );
        if ( (v52 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v35, v27, SchedulerAssist, v29);
      }
      _enable();
      v4 = 0;
      _m_prefetchw((char *)v31 + 35);
      v37 = *((_BYTE *)v31 + 35);
      do
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange8((volatile signed __int8 *)v31 + 35, v37 | 1, v37);
      }
      while ( v38 != v37 );
      if ( (v37 & 1) != 0 )
      {
        do
        {
          while ( (*((_BYTE *)v31 + 35) & 1) != 0 )
            _mm_pause();
          _m_prefetchw((char *)v31 + 35);
          v39 = *((_BYTE *)v31 + 35);
          do
          {
            v40 = v39;
            v39 = _InterlockedCompareExchange8((volatile signed __int8 *)v31 + 35, v39 | 1, v39);
          }
          while ( v40 != v39 );
        }
        while ( (v39 & 1) != 0 );
      }
      AutoBoost::KiAbpEntryUnlink((AutoBoost *)v31, (struct AutoBoost::_AB_THREAD_ENTRY *)v27);
      _InterlockedAnd8((volatile signed __int8 *)v31 + 35, 0xFEu);
    }
    v41 = *((_BYTE *)v31 + 36);
    v42 = v31[5];
    *((_DWORD *)v31 + 10) = 0;
    *v31 = 0LL;
    *((_WORD *)v31 + 16) = 0;
    LOWORD(v31[-6 * (v41 & 0x7F) - 1]) |= 1 << (v41 & 0xF);
    v3 = v42;
    if ( v4 )
    {
LABEL_52:
      v43 = KeGetCurrentPrcb();
      v44 = (unsigned __int32 *)v43->SchedulerAssist;
      if ( v44 )
      {
        _m_prefetchw(v44);
        v54 = *v44;
        do
        {
          v55 = v54;
          LODWORD(v55) = v54 & 0xFFDFFFFF;
          v56 = v54;
          v54 = _InterlockedCompareExchange((volatile signed __int32 *)v44, v54 & 0xFFDFFFFF, v54);
        }
        while ( v56 != v54 );
        if ( (v54 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v43, v55, v44, v29);
      }
      _enable();
      goto LABEL_59;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
    __writecr8(v25);
LABEL_59:
    if ( (_DWORD)v3 )
      AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v24 - 48LL * (*(_BYTE *)(v24 + 36) & 0x7F) - 16), v5, v3, 0LL);
  }
  else
  {
    v46 = KeGetCurrentThread();
    _disable();
    v47 = (char *)v46->AutoBoostThreadState;
    v48 = 0;
    v49 = v5 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v48 < (unsigned __int8)v47[12] )
    {
      v50 = (LegacyAutoBoost *)&v47[88 * v48 + 16];
      if ( (*(_QWORD *)v50 & 0x7FFFFFFFFFFFFFFCLL) == v49 && *((_BYTE *)v50 + 10) && (*(_QWORD *)v50 & 1) == 0 )
      {
        *((_BYTE *)v50 + 10) = 0;
        if ( v50 )
        {
          LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
            v50,
            (struct _KLOCK_ENTRY *)v46,
            (struct _KTHREAD *)v5,
            (void *)1,
            0LL);
          return;
        }
        break;
      }
      ++v48;
    }
    if ( (*((_DWORD *)&v46->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v46, v5, 0LL, 0LL);
    v57 = KeGetCurrentPrcb();
    v58 = (unsigned __int32 *)v57->SchedulerAssist;
    if ( v58 )
    {
      _m_prefetchw(v58);
      v59 = *v58;
      do
      {
        v60 = v59;
        LODWORD(v60) = v59 & 0xFFDFFFFF;
        v61 = v59;
        v59 = _InterlockedCompareExchange((volatile signed __int32 *)v58, v59 & 0xFFDFFFFF, v59);
      }
      while ( v61 != v59 );
      if ( (v59 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v57, v60, v58, v49);
    }
    _enable();
  }
}
