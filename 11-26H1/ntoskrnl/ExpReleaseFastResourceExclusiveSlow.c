/*
 * XREFs of ExpReleaseFastResourceExclusiveSlow @ 0x140270060
 * Callers:
 *     ExpReleaseFastResourceExclusive @ 0x14026FD50 (ExpReleaseFastResourceExclusive.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z @ 0x140270714 (-KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KeAbPreWakeupHandle @ 0x140272C14 (KeAbPreWakeupHandle.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     ExpUpdateLockWordForRelease @ 0x14041ED30 (ExpUpdateLockWordForRelease.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExpReleaseFastResourceExclusiveSlow(signed __int64 *BugCheckParameter2, unsigned __int8 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int8 CurrentIrql; // r14
  int v5; // r12d
  signed __int64 *v6; // rbx
  int *v7; // rdx
  signed __int64 v8; // rcx
  BOOL v9; // r9d
  int v10; // r8d
  signed __int64 v11; // rcx
  signed __int64 *v12; // r8
  char v13; // si
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  signed __int64 v16; // rtt
  __int64 v17; // rdx
  void *v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebp
  volatile signed __int8 *v21; // rsi
  signed __int64 *v22; // rcx
  unsigned __int8 v23; // bp
  struct _KPRCB *v24; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  struct AutoBoost::_AB_THREAD_ENTRY *v26; // rdx
  AutoBoost *v27; // rcx
  char v28; // r8
  __int64 v29; // rbx
  int v30; // ecx
  struct _KPRCB *v31; // r9
  unsigned __int32 *v32; // r8
  unsigned __int8 v33; // r12
  signed __int64 *v34; // rsi
  int v35; // eax
  signed __int64 *v36; // r13
  _QWORD *v37; // r10
  _QWORD *v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  char v43; // cl
  char v44; // al
  bool v45; // zf
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  unsigned __int32 v49; // eax
  unsigned __int32 v50; // ett
  unsigned __int32 v51; // eax
  __int64 v52; // rdx
  unsigned __int32 v53; // ett
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  signed __int64 v56; // rtt
  unsigned __int8 BugCheckParameter4; // [rsp+20h] [rbp-68h]
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v60; // [rsp+A0h] [rbp+18h]

  v2 = a2;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 6);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(BugCheckParameter2 + 6, (__int64)&LockHandle) )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, BugCheckParameter2 + 6);
  }
  _m_prefetchw(BugCheckParameter2);
  v5 = 1;
  if ( (*BugCheckParameter2 & 2) != 0 )
  {
    v6 = (signed __int64 *)BugCheckParameter2[2];
    v7 = (int *)(BugCheckParameter2 + 7);
    v8 = 0LL;
    v9 = v6 || *v7;
    v10 = *v7;
    if ( *v7 )
    {
      v6 = (signed __int64 *)BugCheckParameter2[1];
      BugCheckParameter2[1] = 0LL;
      *v7 = 0;
    }
    else if ( v6 )
    {
      if ( (signed __int64 *)*v6 == v6 )
      {
        BugCheckParameter2[2] = 0LL;
      }
      else
      {
        BugCheckParameter2[2] = *v6;
        v11 = *v6;
        v12 = (signed __int64 *)v6[1];
        if ( *(signed __int64 **)(*v6 + 8) != v6 || (signed __int64 *)*v12 != v6 )
LABEL_78:
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
      }
      v8 = v6[2];
      v10 = 1;
      v6[1] = (signed __int64)v6;
      *v6 = (signed __int64)v6;
    }
    else
    {
      v10 = 0;
    }
    v13 = 0;
    if ( v9 )
      v13 = 2;
    _m_prefetchw(BugCheckParameter2);
    v14 = *BugCheckParameter2;
    if ( v8 )
    {
      v13 |= 1u;
      do
      {
        if ( BugCheckParameter2[2] || *v7 )
          v15 = v14 | 2;
        else
          v15 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( v15 == v14 )
          break;
        v16 = v14;
        v14 = _InterlockedCompareExchange64(BugCheckParameter2, v15, v14);
      }
      while ( v16 != v14 );
    }
    else
    {
      do
      {
        if ( BugCheckParameter2[2] || *((_DWORD *)BugCheckParameter2 + 14) )
          v54 = v14 | 2;
        else
          v54 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
        v55 = v54 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v10 )
          v55 += 4LL * v10;
        if ( v55 == v14 )
          break;
        v56 = v14;
        v14 = _InterlockedCompareExchange64(BugCheckParameter2, v55, v14);
      }
      while ( v56 != v14 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v20 = (2 * (v13 & 1) + 1) | 4;
    if ( (v13 & 2) == 0 )
      v20 = 2 * (v13 & 1) + 1;
    if ( v6 )
    {
      v33 = KeGetCurrentIrql();
      if ( v33 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v17) = 2;
        KiRaiseIrqlProcessIrqlFlags(v33, v17);
      }
      v34 = v6;
      CurrentPrcb = KeGetCurrentPrcb();
      v35 = v20 & 4;
      do
      {
        v36 = v34;
        v34 = (signed __int64 *)*v34;
        if ( v35 )
        {
          v47 = v36[6];
          if ( v47 )
            KeAbPreWakeupHandle(v47);
        }
        KiAcquireKobjectLockSafe(v36 + 3);
        v37 = v36 + 3;
        *((_DWORD *)v36 + 7) = 1;
        v38 = (_QWORD *)v36[4];
        v39 = v36 + 4;
        while ( v38 != v39 )
        {
          v40 = v38;
          v41 = *v38;
          v60 = (_QWORD *)v41;
          v42 = (_QWORD *)v40[1];
          if ( *(_QWORD **)(v41 + 8) != v40 || (_QWORD *)*v42 != v40 )
            goto LABEL_78;
          *v42 = v41;
          *(_QWORD *)(v41 + 8) = v42;
          v43 = *((_BYTE *)v40 + 16);
          if ( v43 == 1 )
          {
            v44 = KiTryUnwaitThread(CurrentPrcb, v40, *((unsigned __int16 *)v40 + 9), 0LL);
            v38 = v60;
            v37 = v36 + 3;
            v45 = v44 == 0;
            v39 = v36 + 4;
            if ( !v45 )
            {
              v37 = v36 + 3;
              v46 = *((_DWORD *)v36 + 7) - 1;
              *((_DWORD *)v36 + 7) = v46;
              if ( !v46 )
                break;
              v39 = v36 + 4;
            }
          }
          else if ( v43 == 2 )
          {
            *((_BYTE *)v40 + 17) = 5;
            KiInsertQueueInternal(v40[3], v40);
            v37 = v36 + 3;
            v48 = *((_DWORD *)v36 + 7) - 1;
            *((_DWORD *)v36 + 7) = v48;
            if ( !v48 )
              break;
            v38 = v60;
            v39 = v36 + 4;
          }
          else
          {
            if ( v43 == 4 )
            {
              *((_BYTE *)v40 + 17) = 5;
              *((_DWORD *)v37 + 1) = 0;
              KiInsertQueueDpc(v40[3], 0);
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v40, 256LL, 0LL);
            }
            v38 = v60;
            v37 = v36 + 3;
            v39 = v36 + 4;
          }
        }
        _InterlockedAnd((volatile signed __int32 *)v36 + 6, 0xFFFFFF7F);
        v35 = v20 & 4;
      }
      while ( v34 != v6 );
      KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
      BugCheckParameter4 = v33;
      v5 = 1;
      KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, (v20 >> 1) & 1, BugCheckParameter4);
    }
  }
  else
  {
    ExpUpdateLockWordForRelease(BugCheckParameter2, 0LL, 1LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (_BYTE)v2 )
  {
    v21 = (volatile signed __int8 *)v2;
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      _disable();
      if ( (v2 & 3) == 3 )
      {
        v17 = (v2 >> 2) & 3;
        v21 = (volatile signed __int8 *)(*((_QWORD *)KeGetCurrentThread()->AutoBoostThreadState + v17)
                                       + 48 * (v2 >> 4)
                                       + 16);
        v22 = (v21[32] & 2) != 0 ? *(signed __int64 **)(*(_QWORD *)v21 + 24LL) : *(signed __int64 **)v21;
        if ( v22 != BugCheckParameter2 )
          KeBugCheckEx(0x162u, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v21, 0LL);
      }
      v23 = -1;
      *((_BYTE *)v21 + 33) = v21[33] & 0xFC | 1;
      if ( (v21[32] & 2) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v17) = 2;
          KiRaiseIrqlProcessIrqlFlags(v23, v17);
        }
        v24 = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)v24->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v49 = *SchedulerAssist;
          do
          {
            v17 = v49;
            LODWORD(v17) = v49 & 0xFFDFFFFF;
            v50 = v49;
            v49 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v49 & 0xFFDFFFFF, v49);
          }
          while ( v50 != v49 );
          if ( (v49 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v24, v17, SchedulerAssist, v19);
        }
        _enable();
        v5 = 0;
        AutoBoost::KiAbpAcquireEntryLockRaw((AutoBoost *)v21, (struct AutoBoost::_AB_THREAD_ENTRY *)v17);
        AutoBoost::KiAbpEntryUnlink(v27, v26);
        _InterlockedAnd8(v21 + 35, 0xFEu);
      }
      v28 = *((_BYTE *)v21 + 36);
      v29 = *((_QWORD *)v21 + 5);
      *((_DWORD *)v21 + 10) = 0;
      *(_QWORD *)v21 = 0LL;
      *((_WORD *)v21 + 16) = 0;
      *(_WORD *)&v21[-48 * (v28 & 0x7F) - 8] |= 1 << (v28 & 0xF);
      v30 = v29;
      if ( v5 )
      {
        v31 = KeGetCurrentPrcb();
        v32 = (unsigned __int32 *)v31->SchedulerAssist;
        if ( v32 )
        {
          _m_prefetchw(v32);
          v51 = *v32;
          do
          {
            v52 = v51;
            LODWORD(v52) = v51 & 0xFFDFFFFF;
            v53 = v51;
            v51 = _InterlockedCompareExchange((volatile signed __int32 *)v32, v51 & 0xFFDFFFFF, v51);
          }
          while ( v53 != v51 );
          if ( (v51 & 0x200000) != 0 )
          {
            KiRemoveSystemWorkPriorityKick(v31, v52, v32, v31);
            v30 = v29;
          }
        }
        _enable();
      }
      else
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
          v30 = v29;
        }
        __writecr8(v23);
      }
      if ( v30 )
        AutoBoost::KiAbpUnboostThread(*(_QWORD *)&v21[-48 * (v21[36] & 0x7F) - 16], BugCheckParameter2, v29, 0LL);
    }
    else
    {
      LegacyAutoBoost::KiAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, (void *)v2, v18);
    }
  }
}
