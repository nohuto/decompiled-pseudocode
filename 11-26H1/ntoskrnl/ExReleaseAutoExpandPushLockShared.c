/*
 * XREFs of ExReleaseAutoExpandPushLockShared @ 0x140279BB0
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x14030BEF0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlLookupPerFileObjectContext @ 0x14030C0F0 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlReleaseAutoExpandPushLockShared @ 0x140468CA0 (FsRtlReleaseAutoExpandPushLockShared.c)
 *     MiUnlockLoaderEntry @ 0x14049E30C (MiUnlockLoaderEntry.c)
 *     MiUnlockAweVadsShared @ 0x1404F3F68 (MiUnlockAweVadsShared.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     ExfReleasePushLockSharedEx @ 0x14042833C (ExfReleasePushLockSharedEx.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x1405094AC (ExpTryExpandAutoExpandPushLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdi
  char v3; // si
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  int v9; // r12d
  signed __int8 v10; // al
  signed __int8 v11; // tt
  signed __int8 v12; // al
  signed __int8 v13; // tt
  char v14; // dl
  __int64 v15; // rbx
  struct _KPRCB *v16; // rcx
  unsigned __int32 *v17; // r8
  unsigned __int32 v18; // eax
  unsigned __int32 v19; // ett
  unsigned __int32 v20; // eax
  __int64 v21; // rdx
  unsigned __int32 v22; // ett
  __int64 v23; // r14
  struct _KTHREAD *CurrentThread; // r10
  __int64 *AutoBoostThreadState; // rax
  unsigned int v26; // r11d
  __int64 *v27; // rsi
  char v28; // al
  __int64 v29; // rcx
  char v30; // r8
  struct _KTHREAD *v31; // rdx
  char *v32; // r10
  unsigned int v33; // r8d
  __int64 v34; // r9
  LegacyAutoBoost *v35; // rcx
  ULONG_PTR v36; // rbp
  unsigned int v37; // ebx
  unsigned int v38; // eax
  unsigned int v39; // ebx
  unsigned __int64 v40; // rax
  struct _KPRCB *v41; // rcx
  unsigned __int32 *v42; // r8
  unsigned __int32 v43; // eax
  __int64 v44; // rdx
  unsigned __int32 v45; // ett
  unsigned __int64 v46; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = BugCheckParameter1;
  v46 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 || (BugCheckParameter2 & 2) != 0 && (BugCheckParameter1 & 2) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v36 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (BugCheckParameter2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(v36 + 12));
    v37 = *(_DWORD *)(v36 + 12);
    if ( v37 >= 0x80000000 && (*(_DWORD *)(v36 + 8) & 3) == 0 )
    {
      if ( (unsigned __int16)v37 < (unsigned int)ExpAeCycleCountThreshold
        || (v37 & 0xF0000) >= 0xF0000
        || KeGetCurrentIrql() >= 2u )
      {
        v37 = (v37 >> 2) & 0x3FF33FFF;
        *(_DWORD *)(v36 + 12) = v37;
      }
      else
      {
        ExpTryExpandAutoExpandPushLock(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 0LL, 17LL) != 17 )
    {
      if ( (v37 & ExpAeSamplingPeriodMask) != 0 )
      {
        ExfReleasePushLockSharedEx(v36, 0LL);
        v38 = *(_DWORD *)(v36 + 12);
        if ( v38 < 0x80000000 )
          *(_DWORD *)(v36 + 12) = v38 + 0x100000;
        goto LABEL_37;
      }
      ExfReleasePushLockSharedEx(v36, &v46);
      if ( !v46 )
        goto LABEL_37;
      v39 = *(_DWORD *)(v36 + 12);
      if ( v39 >= 0x80000000 )
        goto LABEL_37;
      v40 = v46 >> ExpAeCycleCountScaler;
      if ( v46 >> ExpAeCycleCountScaler > 0x1FF )
        LODWORD(v40) = 511;
      v37 = v40 + v39;
    }
    if ( v37 < 0x80000000 )
      *(_DWORD *)(v36 + 12) = v37 + 0x100000;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL));
    v36 = *(_QWORD *)(v36 + 8);
  }
LABEL_37:
  if ( (v3 & 2) == 0 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      v23 = 0LL;
      CurrentIrql = -1;
      _disable();
      CurrentThread = KeGetCurrentThread();
      v9 = 1;
      v5 = 0LL;
      AutoBoostThreadState = (__int64 *)CurrentThread->AutoBoostThreadState;
      v6 = *AutoBoostThreadState;
      v26 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
      while ( 1 )
      {
        if ( (unsigned int)v5 >= v26 )
        {
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v36, 0LL, 0LL);
          goto LABEL_17;
        }
        v27 = (__int64 *)(v6 + 48LL * (unsigned int)v5 + 16);
        v28 = *((_BYTE *)v27 + 33);
        if ( (v28 & 0x10) == 0 )
        {
          v29 = *v27;
          v30 = v27[4] & 2;
          if ( v30 )
            v29 = *(_QWORD *)(v29 + 24);
          if ( v29 == v36 && (v28 & 2) != 0 )
            break;
        }
        v5 = (unsigned int)(v5 + 1);
      }
      v23 = v6 + 48LL * (unsigned int)v5 + 16;
      *((_BYTE *)v27 + 33) = v28 & 0xFC | 1;
      if ( v30 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v5) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
        }
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v18 = *SchedulerAssist;
          do
          {
            v5 = v18;
            LODWORD(v5) = v18 & 0xFFDFFFFF;
            v19 = v18;
            v18 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v18 & 0xFFDFFFFF, v18);
          }
          while ( v19 != v18 );
          if ( (v18 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v5, SchedulerAssist, v6);
        }
        _enable();
        v9 = 0;
        _m_prefetchw((char *)v27 + 35);
        v10 = *((_BYTE *)v27 + 35);
        do
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange8((volatile signed __int8 *)v27 + 35, v10 | 1, v10);
        }
        while ( v11 != v10 );
        if ( (v10 & 1) != 0 )
        {
          do
          {
            while ( (*((_BYTE *)v27 + 35) & 1) != 0 )
              _mm_pause();
            _m_prefetchw((char *)v27 + 35);
            v12 = *((_BYTE *)v27 + 35);
            do
            {
              v13 = v12;
              v12 = _InterlockedCompareExchange8((volatile signed __int8 *)v27 + 35, v12 | 1, v12);
            }
            while ( v13 != v12 );
          }
          while ( (v12 & 1) != 0 );
        }
        AutoBoost::KiAbpEntryUnlink((AutoBoost *)v27, (struct AutoBoost::_AB_THREAD_ENTRY *)v5);
        _InterlockedAnd8((volatile signed __int8 *)v27 + 35, 0xFEu);
      }
      v14 = *((_BYTE *)v27 + 36);
      v15 = v27[5];
      *((_DWORD *)v27 + 10) = 0;
      *v27 = 0LL;
      *((_WORD *)v27 + 16) = 0;
      LOWORD(v27[-6 * (v14 & 0x7F) - 1]) |= 1 << (v14 & 0xF);
      v2 = v15;
      if ( v9 )
      {
LABEL_17:
        v16 = KeGetCurrentPrcb();
        v17 = (unsigned __int32 *)v16->SchedulerAssist;
        if ( v17 )
        {
          _m_prefetchw(v17);
          v20 = *v17;
          do
          {
            v21 = v20;
            LODWORD(v21) = v20 & 0xFFDFFFFF;
            v22 = v20;
            v20 = _InterlockedCompareExchange((volatile signed __int32 *)v17, v20 & 0xFFDFFFFF, v20);
          }
          while ( v22 != v20 );
          if ( (v20 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v16, v21, v17, v6);
        }
        _enable();
        goto LABEL_24;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
LABEL_24:
      if ( (_DWORD)v2 )
        AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v23 - 48LL * (*(_BYTE *)(v23 + 36) & 0x7F) - 16), v36, v2, 0LL);
    }
    else
    {
      v31 = KeGetCurrentThread();
      _disable();
      v32 = (char *)v31->AutoBoostThreadState;
      v33 = 0;
      v34 = v36 & 0x7FFFFFFFFFFFFFFCLL;
      while ( v33 < (unsigned __int8)v32[12] )
      {
        v35 = (LegacyAutoBoost *)&v32[88 * v33 + 16];
        if ( (*(_QWORD *)v35 & 0x7FFFFFFFFFFFFFFCLL) == v34 && *((_BYTE *)v35 + 10) && (*(_QWORD *)v35 & 1) == 0 )
        {
          *((_BYTE *)v35 + 10) = 0;
          if ( v35 )
          {
            LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
              v35,
              (struct _KLOCK_ENTRY *)v31,
              (struct _KTHREAD *)v36,
              (void *)1,
              0LL);
            return;
          }
          break;
        }
        ++v33;
      }
      if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v31, v36, 0LL, 0LL);
      v41 = KeGetCurrentPrcb();
      v42 = (unsigned __int32 *)v41->SchedulerAssist;
      if ( v42 )
      {
        _m_prefetchw(v42);
        v43 = *v42;
        do
        {
          v44 = v43;
          LODWORD(v44) = v43 & 0xFFDFFFFF;
          v45 = v43;
          v43 = _InterlockedCompareExchange((volatile signed __int32 *)v42, v43 & 0xFFDFFFFF, v43);
        }
        while ( v45 != v43 );
        if ( (v43 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v41, v44, v42, v34);
      }
      _enable();
    }
  }
}
