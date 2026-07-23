/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x14024BEE0 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x14024D340 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotFreeList @ 0x14035501C (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1404135D0 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsContextMultiAlloc @ 0x1404610A8 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14047F8C8 (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z @ 0x140271600 (-KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, __int64 a2)
{
  volatile signed __int64 *v2; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // r12
  struct _KTHREAD *CurrentThread; // r10
  int v8; // r13d
  unsigned __int64 v9; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v11; // r9
  unsigned int v12; // r11d
  __int64 *v13; // rdi
  char v14; // al
  __int64 v15; // rcx
  unsigned __int32 *v16; // r8
  unsigned __int64 v17; // rbx
  struct _KTHREAD *v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v22; // al
  signed __int8 v23; // tt
  signed __int8 v24; // al
  signed __int8 v25; // tt
  char v26; // al
  struct _KPRCB *v27; // rcx
  unsigned __int32 v28; // eax
  unsigned __int32 v29; // ett
  unsigned __int32 v30; // eax
  unsigned __int32 v31; // ett
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(volatile signed __int64 **)(a2 + 8);
  if ( a1 )
  {
    v17 = *(unsigned __int8 *)(a2 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)v2 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    __writecr8(v17);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      v4 = 0LL;
      LODWORD(v5) = 0;
      CurrentIrql = -1;
      _disable();
      CurrentThread = KeGetCurrentThread();
      v8 = 1;
      v9 = 0LL;
      AutoBoostThreadState = (__int64 *)CurrentThread->AutoBoostThreadState;
      v11 = *AutoBoostThreadState;
      v12 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
      while ( 1 )
      {
        if ( (unsigned int)v9 >= v12 )
        {
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)v2, 0LL, 0LL);
          goto LABEL_42;
        }
        v13 = (__int64 *)(v11 + 48LL * (unsigned int)v9 + 16);
        v14 = *((_BYTE *)v13 + 33);
        if ( (v14 & 0x10) == 0 )
        {
          v16 = (unsigned __int32 *)*((unsigned __int8 *)v13 + 32);
          v15 = *v13;
          LOBYTE(v16) = (unsigned __int8)v16 & 2;
          if ( (_BYTE)v16 )
            v15 = *(_QWORD *)(v15 + 24);
          if ( (volatile signed __int64 *)v15 == v2 && (v14 & 2) != 0 )
            break;
        }
        v9 = (unsigned int)(v9 + 1);
      }
      v4 = v11 + 48LL * (unsigned int)v9 + 16;
      *((_BYTE *)v13 + 33) = v14 & 0xFC | 1;
      if ( (_BYTE)v16 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
        }
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v28 = *SchedulerAssist;
          do
          {
            v9 = v28;
            LODWORD(v9) = v28 & 0xFFDFFFFF;
            v29 = v28;
            v28 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v28 & 0xFFDFFFFF, v28);
          }
          while ( v29 != v28 );
          if ( (v28 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v9, SchedulerAssist, v11);
        }
        _enable();
        v8 = 0;
        _m_prefetchw((char *)v13 + 35);
        v22 = *((_BYTE *)v13 + 35);
        do
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange8((volatile signed __int8 *)v13 + 35, v22 | 1, v22);
        }
        while ( v23 != v22 );
        if ( (v22 & 1) != 0 )
        {
          do
          {
            while ( (*((_BYTE *)v13 + 35) & 1) != 0 )
              _mm_pause();
            _m_prefetchw((char *)v13 + 35);
            v24 = *((_BYTE *)v13 + 35);
            do
            {
              v25 = v24;
              v24 = _InterlockedCompareExchange8((volatile signed __int8 *)v13 + 35, v24 | 1, v24);
            }
            while ( v25 != v24 );
          }
          while ( (v24 & 1) != 0 );
        }
        AutoBoost::KiAbpEntryUnlink((AutoBoost *)v13, (struct AutoBoost::_AB_THREAD_ENTRY *)v9);
        _InterlockedAnd8((volatile signed __int8 *)v13 + 35, 0xFEu);
      }
      v9 = *((unsigned __int8 *)v13 + 36);
      v5 = v13[5];
      v26 = *((_BYTE *)v13 + 36);
      *((_DWORD *)v13 + 10) = 0;
      *v13 = 0LL;
      LOBYTE(v9) = v9 & 0x7F;
      *((_WORD *)v13 + 16) = 0;
      LOWORD(v13[-6 * (v26 & 0x7F) - 1]) |= 1 << (v9 & 0xF);
      if ( v8 )
      {
LABEL_42:
        v27 = KeGetCurrentPrcb();
        v16 = (unsigned __int32 *)v27->SchedulerAssist;
        if ( v16 )
        {
          _m_prefetchw(v16);
          v30 = *v16;
          do
          {
            v9 = v30;
            LODWORD(v9) = v30 & 0xFFDFFFFF;
            v31 = v30;
            v30 = _InterlockedCompareExchange((volatile signed __int32 *)v16, v30 & 0xFFDFFFFF, v30);
          }
          while ( v31 != v30 );
          if ( (v30 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v27, v9, v16, v11);
        }
        _enable();
        goto LABEL_21;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
LABEL_21:
      if ( (_DWORD)v5 )
        AutoBoost::KiAbpUnboostThread(
          *(volatile signed __int32 **)(v4 - 48LL * (*(_BYTE *)(v4 + 36) & 0x7F) - 16),
          (__int64)v2,
          v5,
          0LL);
    }
    else
    {
      LegacyAutoBoost::KiAbPostRelease((ULONG_PTR)v2, (void *)a2);
    }
    v18 = KeGetCurrentThread();
    if ( v18->SpecialApcDisable++ == -1
      && ($241382875694CED3D471BC5892DE3337 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    {
      KiCheckForKernelApcDelivery(v18, v9, v16, v11);
    }
    *(_QWORD *)(a2 + 8) = 0LL;
  }
}
