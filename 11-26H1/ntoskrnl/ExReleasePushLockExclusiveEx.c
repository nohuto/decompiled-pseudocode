/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x140278C30
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExReleasePushLockExclusiveEx(unsigned __int64 a1, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // r10
  int v8; // r12d
  unsigned __int64 v9; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v11; // r9
  unsigned int v12; // r11d
  __int64 v13; // rsi
  char v14; // al
  struct _KTHREAD *v15; // rcx
  char v16; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v19; // al
  signed __int8 v20; // tt
  signed __int8 v21; // al
  signed __int8 v22; // tt
  char v23; // dl
  __int64 v24; // rbx
  struct _KPRCB *v25; // rcx
  unsigned __int32 *v26; // r8
  struct _KTHREAD *v27; // rdx
  char *v28; // r10
  unsigned __int64 v29; // r9
  unsigned int i; // r8d
  LegacyAutoBoost *v31; // rcx
  unsigned __int32 v32; // eax
  unsigned __int32 v33; // ett
  unsigned __int32 v34; // eax
  __int64 v35; // rdx
  unsigned __int32 v36; // ett
  struct _KPRCB *v37; // rcx
  unsigned __int32 *v38; // r8
  unsigned __int32 v39; // eax
  __int64 v40; // rdx
  unsigned __int32 v41; // ett

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, a1, 0LL, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1);
  if ( (v2 & 2) == 0 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      v4 = 0LL;
      v5 = 0LL;
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
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1, 0LL, 0LL);
          goto LABEL_30;
        }
        v13 = v11 + 48LL * (unsigned int)v9 + 16;
        v14 = *(_BYTE *)(v13 + 33);
        if ( (v14 & 0x10) == 0 )
        {
          v15 = *(struct _KTHREAD **)v13;
          v16 = *(_BYTE *)(v13 + 32) & 2;
          if ( v16 )
            v15 = (struct _KTHREAD *)v15->SListFaultAddress;
          if ( v15 == (struct _KTHREAD *)a1 && (v14 & 2) != 0 )
            break;
        }
        v9 = (unsigned int)(v9 + 1);
      }
      v5 = v11 + 48LL * (unsigned int)v9 + 16;
      *(_BYTE *)(v13 + 33) = v14 & 0xFC | 1;
      if ( v16 )
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
          v32 = *SchedulerAssist;
          do
          {
            v9 = v32;
            LODWORD(v9) = v32 & 0xFFDFFFFF;
            v33 = v32;
            v32 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v32 & 0xFFDFFFFF, v32);
          }
          while ( v33 != v32 );
          if ( (v32 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v9, SchedulerAssist, v11);
        }
        _enable();
        v8 = 0;
        _m_prefetchw((const void *)(v13 + 35));
        v19 = *(_BYTE *)(v13 + 35);
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange8((volatile signed __int8 *)(v13 + 35), v19 | 1, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 1) != 0 )
        {
          do
          {
            while ( (*(_BYTE *)(v13 + 35) & 1) != 0 )
              _mm_pause();
            _m_prefetchw((const void *)(v13 + 35));
            v21 = *(_BYTE *)(v13 + 35);
            do
            {
              v22 = v21;
              v21 = _InterlockedCompareExchange8((volatile signed __int8 *)(v13 + 35), v21 | 1, v21);
            }
            while ( v22 != v21 );
          }
          while ( (v21 & 1) != 0 );
        }
        AutoBoost::KiAbpEntryUnlink((AutoBoost *)v13, (struct AutoBoost::_AB_THREAD_ENTRY *)v9);
        _InterlockedAnd8((volatile signed __int8 *)(v13 + 35), 0xFEu);
      }
      v23 = *(_BYTE *)(v13 + 36);
      v24 = *(_QWORD *)(v13 + 40);
      *(_DWORD *)(v13 + 40) = 0;
      *(_QWORD *)v13 = 0LL;
      *(_WORD *)(v13 + 32) = 0;
      *(_WORD *)(v13 - 48LL * (v23 & 0x7F) - 8) |= 1 << (v23 & 0xF);
      v4 = v24;
      if ( v8 )
      {
LABEL_30:
        v25 = KeGetCurrentPrcb();
        v26 = (unsigned __int32 *)v25->SchedulerAssist;
        if ( v26 )
        {
          _m_prefetchw(v26);
          v34 = *v26;
          do
          {
            v35 = v34;
            LODWORD(v35) = v34 & 0xFFDFFFFF;
            v36 = v34;
            v34 = _InterlockedCompareExchange((volatile signed __int32 *)v26, v34 & 0xFFDFFFFF, v34);
          }
          while ( v36 != v34 );
          if ( (v34 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v25, v35, v26, v11);
        }
        _enable();
        goto LABEL_37;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
LABEL_37:
      if ( (_DWORD)v4 )
        AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v5 - 48LL * (*(_BYTE *)(v5 + 36) & 0x7F) - 16), a1, v4, 0LL);
    }
    else
    {
      v27 = KeGetCurrentThread();
      _disable();
      v28 = (char *)v27->AutoBoostThreadState;
      v29 = a1 & 0x7FFFFFFFFFFFFFFCLL;
      for ( i = 0; i < (unsigned __int8)v28[12]; ++i )
      {
        v31 = (LegacyAutoBoost *)&v28[88 * i + 16];
        if ( (*(_QWORD *)v31 & 0x7FFFFFFFFFFFFFFCLL) == v29 && *((_BYTE *)v31 + 10) && (*(_QWORD *)v31 & 1) == 0 )
        {
          *((_BYTE *)v31 + 10) = 0;
          if ( v31 )
          {
            LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
              v31,
              (struct _KLOCK_ENTRY *)v27,
              (struct _KTHREAD *)a1,
              (void *)1,
              0LL);
            return;
          }
          break;
        }
      }
      if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v27, a1, 0LL, 0LL);
      v37 = KeGetCurrentPrcb();
      v38 = (unsigned __int32 *)v37->SchedulerAssist;
      if ( v38 )
      {
        _m_prefetchw(v38);
        v39 = *v38;
        do
        {
          v40 = v39;
          LODWORD(v40) = v39 & 0xFFDFFFFF;
          v41 = v39;
          v39 = _InterlockedCompareExchange((volatile signed __int32 *)v38, v39 & 0xFFDFFFFF, v39);
        }
        while ( v41 != v39 );
        if ( (v39 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v37, v40, v38, v29);
      }
      _enable();
    }
  }
}
