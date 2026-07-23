/*
 * XREFs of PspUnlockProcessShared @ 0x14027C520
 * Callers:
 *     PspAssignPrimaryToken @ 0x140776B18 (PspAssignPrimaryToken.c)
 *     PspApplyCoreIsolationPolicy @ 0x1407799A4 (PspApplyCoreIsolationPolicy.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     PspInheritSyscallProvider @ 0x140946994 (PspInheritSyscallProvider.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14094A5DC (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PspGetPreviousProcessThread @ 0x14094AD00 (PspGetPreviousProcessThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 *     PsGetProcessDeepFreezeStats @ 0x1409CF900 (PsGetProcessDeepFreezeStats.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PsCaptureExceptionPort @ 0x140A9FC4C (PsCaptureExceptionPort.c)
 *     PspAssignCpuPartitionsToProcessByHandle @ 0x140B715F4 (PspAssignCpuPartitionsToProcessByHandle.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockProcessShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbp
  int v4; // edi
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // r10
  int v8; // r12d
  unsigned __int64 v9; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v11; // r9
  unsigned int v12; // r11d
  __int64 *v13; // rsi
  char v14; // al
  __int64 v15; // rcx
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

  v3 = a1 + 456;
  v4 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 456), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 456));
  if ( (KiAbpGlobalState & 1) != 0 )
  {
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
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, 0LL, 0LL);
        goto LABEL_27;
      }
      v13 = (__int64 *)(v11 + 48LL * (unsigned int)v9 + 16);
      v14 = *((_BYTE *)v13 + 33);
      if ( (v14 & 0x10) == 0 )
      {
        v15 = *v13;
        v16 = v13[4] & 2;
        if ( v16 )
          v15 = *(_QWORD *)(v15 + 24);
        if ( v15 == v3 && (v14 & 2) != 0 )
          break;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    v5 = v11 + 48LL * (unsigned int)v9 + 16;
    *((_BYTE *)v13 + 33) = v14 & 0xFC | 1;
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
        v33 = *SchedulerAssist;
        do
        {
          v9 = v33;
          LODWORD(v9) = v33 & 0xFFDFFFFF;
          v34 = v33;
          v33 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v33 & 0xFFDFFFFF, v33);
        }
        while ( v34 != v33 );
        if ( (v33 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v9, SchedulerAssist, v11);
      }
      _enable();
      v8 = 0;
      _m_prefetchw((char *)v13 + 35);
      v19 = *((_BYTE *)v13 + 35);
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange8((volatile signed __int8 *)v13 + 35, v19 | 1, v19);
      }
      while ( v20 != v19 );
      if ( (v19 & 1) != 0 )
      {
        do
        {
          while ( (*((_BYTE *)v13 + 35) & 1) != 0 )
            _mm_pause();
          _m_prefetchw((char *)v13 + 35);
          v21 = *((_BYTE *)v13 + 35);
          do
          {
            v22 = v21;
            v21 = _InterlockedCompareExchange8((volatile signed __int8 *)v13 + 35, v21 | 1, v21);
          }
          while ( v22 != v21 );
        }
        while ( (v21 & 1) != 0 );
      }
      AutoBoost::KiAbpEntryUnlink((AutoBoost *)v13, (struct AutoBoost::_AB_THREAD_ENTRY *)v9);
      _InterlockedAnd8((volatile signed __int8 *)v13 + 35, 0xFEu);
    }
    v23 = *((_BYTE *)v13 + 36);
    v24 = v13[5];
    *((_DWORD *)v13 + 10) = 0;
    *v13 = 0LL;
    *((_WORD *)v13 + 16) = 0;
    LOWORD(v13[-6 * (v23 & 0x7F) - 1]) |= 1 << (v23 & 0xF);
    v4 = v24;
    if ( v8 )
    {
LABEL_27:
      v25 = KeGetCurrentPrcb();
      v26 = (unsigned __int32 *)v25->SchedulerAssist;
      if ( v26 )
      {
        _m_prefetchw(v26);
        v35 = *v26;
        do
        {
          v36 = v35;
          LODWORD(v36) = v35 & 0xFFDFFFFF;
          v37 = v35;
          v35 = _InterlockedCompareExchange((volatile signed __int32 *)v26, v35 & 0xFFDFFFFF, v35);
        }
        while ( v37 != v35 );
        if ( (v35 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v25, v36, v26, v11);
      }
      _enable();
      goto LABEL_34;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
LABEL_34:
    if ( v4 )
      AutoBoost::KiAbpUnboostThread(
        *(volatile signed __int32 **)(v5 - 48LL * (*(_BYTE *)(v5 + 36) & 0x7F) - 16),
        v3,
        v4,
        0LL);
  }
  else
  {
    v28 = KeGetCurrentThread();
    _disable();
    v29 = (char *)v28->AutoBoostThreadState;
    v30 = 0;
    v31 = v3 & 0x7FFFFFFFFFFFFFFCLL;
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
            (struct _KTHREAD *)v3,
            (void *)1,
            0LL);
          return KeLeaveCriticalRegionThread(a2);
        }
        break;
      }
      ++v30;
    }
    if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v28, v3, 0LL, 0LL);
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
  return KeLeaveCriticalRegionThread(a2);
}
