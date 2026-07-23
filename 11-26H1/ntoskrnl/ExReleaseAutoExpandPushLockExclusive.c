/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x14027C120
 * Callers:
 *     MiUnlockLoaderEntry @ 0x14049E30C (MiUnlockLoaderEntry.c)
 *     MiUnlockAweVadsExclusive @ 0x140527850 (MiUnlockAweVadsExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x1407078BC (MiUnlockAwePagesExclusive.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14021B298 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseAutoExpandPushLockExclusive(__int64 a1, ULONG_PTR BugCheckParameter1)
{
  char v3; // bl
  int v4; // eax
  int v5; // ecx
  signed __int64 v6; // rax
  int v7; // edi
  signed __int64 v8; // rdx
  signed __int64 v9; // rtt
  __int64 v10; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // r10
  int v13; // r12d
  unsigned __int64 v14; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v16; // r9
  unsigned int v17; // r11d
  __int64 v18; // rsi
  char v19; // al
  struct _KTHREAD *v20; // rcx
  char v21; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v24; // al
  signed __int8 v25; // tt
  signed __int8 v26; // al
  signed __int8 v27; // tt
  char v28; // dl
  __int64 v29; // rbx
  struct _KPRCB *v30; // rcx
  unsigned __int32 *v31; // r8
  struct _KTHREAD *v32; // rdx
  char *v33; // r10
  unsigned int v34; // r8d
  unsigned __int64 v35; // r9
  LegacyAutoBoost *v36; // rcx
  unsigned __int32 v37; // eax
  unsigned __int32 v38; // ett
  unsigned __int32 v39; // eax
  __int64 v40; // rdx
  unsigned __int32 v41; // ett
  struct _KPRCB *v42; // rcx
  unsigned __int32 *v43; // r8
  unsigned __int32 v44; // eax
  __int64 v45; // rdx
  unsigned __int32 v46; // ett

  v3 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, a1, 0LL, 0LL);
  v4 = *(_DWORD *)(a1 + 8);
  if ( (v4 & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 12);
    if ( (*(_DWORD *)(a1 + 12) & 0xF0000u) < 0xF0000 )
      *(_DWORD *)(a1 + 12) = v5 + 0x10000;
  }
  _m_prefetchw((const void *)a1);
  v6 = *(_QWORD *)a1;
  v7 = 0;
  v8 = *(_QWORD *)a1 - 16LL;
  if ( (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (v6 & 2) != 0 || (v9 = *(_QWORD *)a1, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)a1, v8, v6)) )
    ExfReleasePushLock((_QWORD *)a1);
  if ( (v3 & 2) == 0 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      v10 = 0LL;
      CurrentIrql = -1;
      _disable();
      CurrentThread = KeGetCurrentThread();
      v13 = 1;
      v14 = 0LL;
      AutoBoostThreadState = (__int64 *)CurrentThread->AutoBoostThreadState;
      v16 = *AutoBoostThreadState;
      v17 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
      while ( 1 )
      {
        if ( (unsigned int)v14 >= v17 )
        {
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1, 0LL, 0LL);
          goto LABEL_35;
        }
        v18 = v16 + 48LL * (unsigned int)v14 + 16;
        v19 = *(_BYTE *)(v18 + 33);
        if ( (v19 & 0x10) == 0 )
        {
          v20 = *(struct _KTHREAD **)v18;
          v21 = *(_BYTE *)(v18 + 32) & 2;
          if ( v21 )
            v20 = (struct _KTHREAD *)v20->SListFaultAddress;
          if ( v20 == (struct _KTHREAD *)a1 && (v19 & 2) != 0 )
            break;
        }
        v14 = (unsigned int)(v14 + 1);
      }
      v10 = v16 + 48LL * (unsigned int)v14 + 16;
      *(_BYTE *)(v18 + 33) = v19 & 0xFC | 1;
      if ( v21 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v14) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v14);
        }
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v37 = *SchedulerAssist;
          do
          {
            v14 = v37;
            LODWORD(v14) = v37 & 0xFFDFFFFF;
            v38 = v37;
            v37 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v37 & 0xFFDFFFFF, v37);
          }
          while ( v38 != v37 );
          if ( (v37 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v14, SchedulerAssist, v16);
        }
        _enable();
        v13 = 0;
        _m_prefetchw((const void *)(v18 + 35));
        v24 = *(_BYTE *)(v18 + 35);
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange8((volatile signed __int8 *)(v18 + 35), v24 | 1, v24);
        }
        while ( v25 != v24 );
        if ( (v24 & 1) != 0 )
        {
          do
          {
            while ( (*(_BYTE *)(v18 + 35) & 1) != 0 )
              _mm_pause();
            _m_prefetchw((const void *)(v18 + 35));
            v26 = *(_BYTE *)(v18 + 35);
            do
            {
              v27 = v26;
              v26 = _InterlockedCompareExchange8((volatile signed __int8 *)(v18 + 35), v26 | 1, v26);
            }
            while ( v27 != v26 );
          }
          while ( (v26 & 1) != 0 );
        }
        AutoBoost::KiAbpEntryUnlink((AutoBoost *)v18, (struct AutoBoost::_AB_THREAD_ENTRY *)v14);
        _InterlockedAnd8((volatile signed __int8 *)(v18 + 35), 0xFEu);
      }
      v28 = *(_BYTE *)(v18 + 36);
      v29 = *(_QWORD *)(v18 + 40);
      *(_DWORD *)(v18 + 40) = 0;
      *(_QWORD *)v18 = 0LL;
      *(_WORD *)(v18 + 32) = 0;
      *(_WORD *)(v18 - 48LL * (v28 & 0x7F) - 8) |= 1 << (v28 & 0xF);
      v7 = v29;
      if ( v13 )
      {
LABEL_35:
        v30 = KeGetCurrentPrcb();
        v31 = (unsigned __int32 *)v30->SchedulerAssist;
        if ( v31 )
        {
          _m_prefetchw(v31);
          v39 = *v31;
          do
          {
            v40 = v39;
            LODWORD(v40) = v39 & 0xFFDFFFFF;
            v41 = v39;
            v39 = _InterlockedCompareExchange((volatile signed __int32 *)v31, v39 & 0xFFDFFFFF, v39);
          }
          while ( v41 != v39 );
          if ( (v39 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v30, v40, v31, v16);
        }
        _enable();
        goto LABEL_42;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
LABEL_42:
      if ( v7 )
        AutoBoost::KiAbpUnboostThread(
          *(volatile signed __int32 **)(v10 - 48LL * (*(_BYTE *)(v10 + 36) & 0x7F) - 16),
          a1,
          v7,
          0LL);
    }
    else
    {
      v32 = KeGetCurrentThread();
      _disable();
      v33 = (char *)v32->AutoBoostThreadState;
      v34 = 0;
      v35 = a1 & 0x7FFFFFFFFFFFFFFCLL;
      while ( v34 < (unsigned __int8)v33[12] )
      {
        v36 = (LegacyAutoBoost *)&v33[88 * v34 + 16];
        if ( (*(_QWORD *)v36 & 0x7FFFFFFFFFFFFFFCLL) == v35 && *((_BYTE *)v36 + 10) && (*(_QWORD *)v36 & 1) == 0 )
        {
          *((_BYTE *)v36 + 10) = 0;
          if ( v36 )
          {
            LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
              v36,
              (struct _KLOCK_ENTRY *)v32,
              (struct _KTHREAD *)a1,
              (void *)1,
              0LL);
            return;
          }
          break;
        }
        ++v34;
      }
      if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v32, a1, 0LL, 0LL);
      v42 = KeGetCurrentPrcb();
      v43 = (unsigned __int32 *)v42->SchedulerAssist;
      if ( v43 )
      {
        _m_prefetchw(v43);
        v44 = *v43;
        do
        {
          v45 = v44;
          LODWORD(v45) = v44 & 0xFFDFFFFF;
          v46 = v44;
          v44 = _InterlockedCompareExchange((volatile signed __int32 *)v43, v44 & 0xFFDFFFFF, v44);
        }
        while ( v46 != v44 );
        if ( (v44 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v42, v45, v43, v35);
      }
      _enable();
    }
  }
}
