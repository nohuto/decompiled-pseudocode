/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x140278890
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseCacheAwarePushLockSharedEx(signed __int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdi
  char v3; // bl
  ULONG_PTR v5; // r15
  __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // r10
  int v9; // r12d
  unsigned __int64 v10; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v12; // r9
  unsigned int v13; // r11d
  __int64 *v14; // rsi
  char v15; // al
  __int64 v16; // rcx
  char v17; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v20; // al
  signed __int8 v21; // tt
  signed __int8 v22; // al
  signed __int8 v23; // tt
  char v24; // dl
  __int64 v25; // rbx
  struct _KPRCB *v26; // rcx
  unsigned __int32 *v27; // r8
  struct _KTHREAD *v28; // rdx
  char *v29; // r10
  unsigned int v30; // r8d
  __int64 v31; // r9
  LegacyAutoBoost *v32; // rcx
  unsigned __int32 v33; // eax
  unsigned __int32 v34; // ett
  unsigned __int32 v35; // eax
  __int64 v36; // rdx
  unsigned __int32 v37; // ett
  struct _KPRCB *v38; // rcx
  unsigned __int32 *v39; // r8
  unsigned __int32 v40; // eax
  __int64 v41; // rdx
  unsigned __int32 v42; // ett

  v2 = 0LL;
  v3 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v3 & 2) == 0 )
  {
    v5 = BugCheckParameter2[2];
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      v6 = 0LL;
      CurrentIrql = -1;
      _disable();
      CurrentThread = KeGetCurrentThread();
      v9 = 1;
      v10 = 0LL;
      AutoBoostThreadState = (__int64 *)CurrentThread->AutoBoostThreadState;
      v12 = *AutoBoostThreadState;
      v13 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
      while ( 1 )
      {
        if ( (unsigned int)v10 >= v13 )
        {
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, 0LL, 0LL);
          goto LABEL_30;
        }
        v14 = (__int64 *)(v12 + 48LL * (unsigned int)v10 + 16);
        v15 = *((_BYTE *)v14 + 33);
        if ( (v15 & 0x10) == 0 )
        {
          v16 = *v14;
          v17 = v14[4] & 2;
          if ( v17 )
            v16 = *(_QWORD *)(v16 + 24);
          if ( v16 == v5 && (v15 & 2) != 0 )
            break;
        }
        v10 = (unsigned int)(v10 + 1);
      }
      v6 = v12 + 48LL * (unsigned int)v10 + 16;
      *((_BYTE *)v14 + 33) = v15 & 0xFC | 1;
      if ( v17 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v10) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
        }
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v33 = *SchedulerAssist;
          do
          {
            v10 = v33;
            LODWORD(v10) = v33 & 0xFFDFFFFF;
            v34 = v33;
            v33 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v33 & 0xFFDFFFFF, v33);
          }
          while ( v34 != v33 );
          if ( (v33 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v10, SchedulerAssist, v12);
        }
        _enable();
        v9 = 0;
        _m_prefetchw((char *)v14 + 35);
        v20 = *((_BYTE *)v14 + 35);
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange8((volatile signed __int8 *)v14 + 35, v20 | 1, v20);
        }
        while ( v21 != v20 );
        if ( (v20 & 1) != 0 )
        {
          do
          {
            while ( (*((_BYTE *)v14 + 35) & 1) != 0 )
              _mm_pause();
            _m_prefetchw((char *)v14 + 35);
            v22 = *((_BYTE *)v14 + 35);
            do
            {
              v23 = v22;
              v22 = _InterlockedCompareExchange8((volatile signed __int8 *)v14 + 35, v22 | 1, v22);
            }
            while ( v23 != v22 );
          }
          while ( (v22 & 1) != 0 );
        }
        AutoBoost::KiAbpEntryUnlink((AutoBoost *)v14, (struct AutoBoost::_AB_THREAD_ENTRY *)v10);
        _InterlockedAnd8((volatile signed __int8 *)v14 + 35, 0xFEu);
      }
      v24 = *((_BYTE *)v14 + 36);
      v25 = v14[5];
      *((_DWORD *)v14 + 10) = 0;
      *v14 = 0LL;
      *((_WORD *)v14 + 16) = 0;
      LOWORD(v14[-6 * (v24 & 0x7F) - 1]) |= 1 << (v24 & 0xF);
      v2 = v25;
      if ( v9 )
      {
LABEL_30:
        v26 = KeGetCurrentPrcb();
        v27 = (unsigned __int32 *)v26->SchedulerAssist;
        if ( v27 )
        {
          _m_prefetchw(v27);
          v35 = *v27;
          do
          {
            v36 = v35;
            LODWORD(v36) = v35 & 0xFFDFFFFF;
            v37 = v35;
            v35 = _InterlockedCompareExchange((volatile signed __int32 *)v27, v35 & 0xFFDFFFFF, v35);
          }
          while ( v37 != v35 );
          if ( (v35 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v26, v36, v27, v12);
        }
        _enable();
        goto LABEL_37;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
LABEL_37:
      if ( (_DWORD)v2 )
        AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v6 - 48LL * (*(_BYTE *)(v6 + 36) & 0x7F) - 16), v5, v2, 0LL);
    }
    else
    {
      v28 = KeGetCurrentThread();
      _disable();
      v29 = (char *)v28->AutoBoostThreadState;
      v30 = 0;
      v31 = v5 & 0x7FFFFFFFFFFFFFFCLL;
      while ( v30 < (unsigned __int8)v29[12] )
      {
        v32 = (LegacyAutoBoost *)&v29[88 * v30 + 16];
        if ( (*(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFCLL) == v31 && *((_BYTE *)v32 + 10) && (*(_QWORD *)v32 & 1) == 0 )
        {
          *((_BYTE *)v32 + 10) = 0;
          if ( v32 )
          {
            LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
              v32,
              (struct _KLOCK_ENTRY *)v28,
              (struct _KTHREAD *)v5,
              (void *)1,
              0LL);
            return;
          }
          break;
        }
        ++v30;
      }
      if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, v5, 0LL, 0LL);
      v38 = KeGetCurrentPrcb();
      v39 = (unsigned __int32 *)v38->SchedulerAssist;
      if ( v39 )
      {
        _m_prefetchw(v39);
        v40 = *v39;
        do
        {
          v41 = v40;
          LODWORD(v41) = v40 & 0xFFDFFFFF;
          v42 = v40;
          v40 = _InterlockedCompareExchange((volatile signed __int32 *)v39, v40 & 0xFFDFFFFF, v40);
        }
        while ( v42 != v40 );
        if ( (v40 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v38, v41, v39, v31);
      }
      _enable();
    }
  }
}
