/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x1408CED20
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmpReplicateKeyToVirtual @ 0x140860234 (CmpReplicateKeyToVirtual.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140861CAC (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140861CF4 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmEnumerateKey @ 0x1408C8770 (CmEnumerateKey.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpParseKey @ 0x1408D19A0 (CmpParseKey.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpFreeParseContext @ 0x1409376D0 (CmpFreeParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x14093D270 (CmReleaseLoadKeyContext.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD1A90 (CmpLateUnloadHiveWorker.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140AE1930 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CmpArmDelayedCloseTimer @ 0x1403834F8 (CmpArmDelayedCloseTimer.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExFreeToLookasideListEx @ 0x14039FE30 (ExFreeToLookasideListEx.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x14049A508 (ExpAcquireFastMutexContended.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1408C0438 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1408C051C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408CB390 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408CB8AC (CmpDoQueueLateUnloadWorker.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1408CBB28 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpDeleteKcbCache @ 0x1408CEA04 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvFreeDirtyData @ 0x1408CEB28 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     CmUnlockHive @ 0x1408CECB0 (CmUnlockHive.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x140A76BF8 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter4)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  struct _KLOCK_ENTRIES *v4; // r9
  unsigned __int64 v5; // rdx
  bool v6; // r8
  unsigned __int64 v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned __int64 *v13; // rbp
  AutoBoost *v14; // rax
  void *v15; // rdx
  struct _KLOCK_ENTRIES *v16; // r9
  AutoBoost *v17; // rsi
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  AutoBoost *v20; // rax
  void *v21; // rdx
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  AutoBoost *v24; // rsi
  ULONG_PTR v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  signed __int64 v28; // rax
  _BOOL8 v29; // rdx
  int v30; // ecx
  void *v31; // rdx
  struct _KLOCK_ENTRY *v32; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 *v34; // rax
  ULONG_PTR v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // r8
  struct _KLOCK_ENTRIES *v41; // r9
  _QWORD *v42; // rcx
  _DWORD *v43; // r12
  ULONG_PTR v44; // r14
  __int64 *i; // rdx
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // r9
  bool v51; // r10
  unsigned __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rcx
  struct _KLOCK_ENTRIES *v55; // r9
  AutoBoost *v56; // rax
  void *v57; // rdx
  struct _KLOCK_ENTRIES *v58; // r9
  AutoBoost *v59; // r15
  AutoBoost *v60; // rax
  void *v61; // rdx
  AutoBoost *v62; // r14
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rdx
  unsigned __int64 ThreadLock; // rdx
  __int64 v67; // r14
  int Flink_high; // eax
  __int64 *v69; // rdi
  signed __int64 v70; // rax
  signed __int64 v71; // rdx
  __int64 v72; // rtt
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  struct _KLOCK_ENTRIES *v76; // r9
  _DWORD *v77; // rdi
  __int64 v78; // rcx
  _QWORD *v79; // rax
  void *v80; // rcx
  void *v81; // rcx
  void *v82; // rcx
  void *v83; // rcx
  AutoBoost *v84; // rax
  void *v85; // rdx
  AutoBoost *v86; // rsi
  WORK_QUEUE_TYPE v87; // r9d
  __int64 v88; // r8
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // r9
  bool v92; // r10
  unsigned __int64 v93; // rax
  _QWORD *v94; // rax
  void *v95; // rcx
  unsigned __int64 v96; // rcx
  _QWORD *v97; // rcx
  _QWORD *v98; // rcx
  __int128 v99; // [rsp+40h] [rbp-98h] BYREF
  __int64 v100; // [rsp+50h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-80h] BYREF
  _OWORD v102[2]; // [rsp+88h] [rbp-50h] BYREF

  v99 = 0LL;
  CmpInitializeDelayDerefContext(&v99);
  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = *(_QWORD *)BugCheckParameter4;
  while ( 1 )
  {
    v4 = (struct _KLOCK_ENTRIES *)v3;
    if ( v3 <= 1 )
      break;
    v5 = v3 - 1;
    v6 = v3 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v2 + 2952) == 1;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v5, v3);
    v3 = v7;
    if ( (struct _KLOCK_ENTRIES *)v7 == v4 )
    {
      if ( v7 < v5 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
      if ( v6 )
      {
        v84 = (AutoBoost *)KeAbPreAcquire(v2 + 1680, 0LL, 0LL, v4);
        v86 = v84;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 1680), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 1680), v84, v2 + 1680);
        if ( v86 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v86, v85);
          else
            *((_BYTE *)v86 + 10) = 1;
        }
        *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4244), 1u) & 0x7F) + 4248) = 19;
        if ( **(_QWORD **)(v2 + 2944) == 2LL )
        {
          *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4244), 1u) & 0x7F) + 4248) = 20;
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4808), 1, 0) )
          {
            *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4244), 1u) & 0x7F) + 4248) = 21;
            CmpReferenceHive(v2);
            ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v2 + 4824), v87);
          }
        }
        CmUnlockHive(v2);
      }
      return;
    }
  }
  v8 = *(_DWORD **)(BugCheckParameter4 + 32);
  v9 = 101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9));
  v10 = *((_QWORD *)v8 + 206);
  v11 = v9 ^ (v9 >> 9);
  v12 = (unsigned int)(v8[414] - 1);
  v100 = v11;
  v13 = (unsigned __int64 *)(v10 + 24 * (v11 & v12));
  v14 = (AutoBoost *)KeAbPreAcquire((__int64)v13, 0LL, 0LL, v4);
  v17 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx(v13, v14, (__int64)v13);
  if ( v17 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v17, v15);
    else
      *((_BYTE *)v17 + 10) = 1;
  }
  v13[1] = (unsigned __int64)KeGetCurrentThread();
  _m_prefetchw(v8 + 1060);
  v18 = v8[1060];
  do
  {
    if ( !v18 )
      KeBugCheckEx(0x51u, 0x17uLL, (ULONG_PTR)v8, 8uLL, BugCheckParameter4);
    v19 = v18;
    v18 = _InterlockedCompareExchange(v8 + 1060, v18 + 1, v18);
  }
  while ( v19 != v18 );
  v20 = (AutoBoost *)KeAbPreAcquire(BugCheckParameter4 + 48, 0LL, 0LL, v16);
  v24 = v20;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v20, BugCheckParameter4 + 48);
  if ( v24 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v24, v21);
    else
      *((_BYTE *)v24 + 10) = 1;
  }
  *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
  v25 = 0LL;
  v26 = *(_QWORD *)(BugCheckParameter4 + 192);
  if ( !v26 )
    goto LABEL_22;
  v54 = *(_QWORD *)(v26 + 24);
  if ( !v54 )
    goto LABEL_22;
  v25 = *(_QWORD *)(v54 + 16);
  CmpUnlockKcb(BugCheckParameter4);
  v56 = (AutoBoost *)KeAbPreAcquire(v25 + 48, 0LL, 0LL, v55);
  v59 = v56;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 48), v56, v25 + 48);
  if ( v59 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v59, v57);
    else
      *((_BYTE *)v59 + 10) = 1;
  }
  *(_QWORD *)(v25 + 56) = KeGetCurrentThread();
  v60 = (AutoBoost *)KeAbPreAcquire(BugCheckParameter4 + 48, 0LL, 0LL, v58);
  v62 = v60;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v60, BugCheckParameter4 + 48);
  if ( v62 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      AutoBoost::KiAbpPostAcquire(v62, v61);
      *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
      goto LABEL_22;
    }
    *((_BYTE *)v62 + 10) = 1;
  }
  *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
LABEL_22:
  v27 = *(_QWORD *)(BugCheckParameter4 + 32);
  v28 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter4);
  if ( v28 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v27 + 2952) == 1 )
      CmpDoQueueLateUnloadWorker(v27);
    goto LABEL_103;
  }
  if ( v28 )
    goto LABEL_103;
  if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
  {
    v67 = *(_QWORD *)(BugCheckParameter4 + 32);
    CmpCleanUpKcbCacheWithLock(BugCheckParameter4, (__int64)&v99, v22, v23);
    *(_QWORD *)(v67 + 4184) = KeGetCurrentThread();
    *(_DWORD *)(v67 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 4244), 1u) & 0x7F) + 4248) = 31;
    if ( (*(_DWORD *)(v67 + 160) & 0x20) == 0 )
      CmpDereferenceHive((char *)v67);
    goto LABEL_103;
  }
  v29 = 0LL;
  v30 = *(_DWORD *)(BugCheckParameter4 + 8);
  if ( (v30 & 0x20) == 0 )
    v29 = (v30 & 0x20000) == 0;
  if ( (!CmpHoldLazyFlush
     || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) != 0
     || (*(_DWORD *)(BugCheckParameter4 + 8) & 8) != 0)
    && v29 )
  {
    v32 = (struct _KLOCK_ENTRY *)KeAbPreAcquire((__int64)&CmpKeyLockTracker.StateSaveArea, 0LL, 0LL, v23);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v31) = 1;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)v31);
    }
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpKeyLockTracker.StateSaveArea, 0) )
      ExpAcquireFastMutexContended((struct _KTHREAD *)&CmpKeyLockTracker.StateSaveArea, v32);
    if ( v32 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire((AutoBoost *)v32, v31);
      else
        v32->AcquiredByte = 1;
    }
    CmpKeyLockTracker.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)KeGetCurrentThread();
    LODWORD(CmpKeyLockTracker.TrapFrame) = CurrentIrql;
    v34 = (unsigned __int64 *)(BugCheckParameter4 + 224);
    if ( (unsigned __int64 *)*v34 != v34 )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter4, 0LL, 0LL);
    ThreadLock = CmpKeyLockTracker.ThreadLock;
    if ( *(struct _KTHREAD **)(CmpKeyLockTracker.ThreadLock + 8) == (struct _KTHREAD *)&CmpKeyLockTracker.ThreadLock )
    {
      *(_QWORD *)(BugCheckParameter4 + 232) = &CmpKeyLockTracker.ThreadLock;
      *v34 = ThreadLock;
      *(_QWORD *)(ThreadLock + 8) = v34;
      CmpKeyLockTracker.ThreadLock = BugCheckParameter4 + 224;
      Flink_high = HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink);
      *(_BYTE *)(BugCheckParameter4 + 64) |= 2u;
      ++KiSystemServiceTraceCallbackLock.KernelShadowStackBase;
      HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink) = Flink_high + 1;
      if ( Flink_high + 1 <= (unsigned int)CmpDelayedCloseSize )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
      }
      else
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
        CmpArmDelayedCloseTimer();
      }
      goto LABEL_103;
    }
    goto LABEL_98;
  }
  v35 = 0LL;
  if ( *(_QWORD *)BugCheckParameter4 )
    goto LABEL_161;
  if ( CmpTraceRoutine )
  {
    memset(v102, 0, sizeof(v102));
    memset(&ApcState, 0, sizeof(ApcState));
    CmpAttachToRegistryProcess(&ApcState);
    v38 = (void *)CmpConstructName(BugCheckParameter4, v36);
    if ( v38 )
    {
      LOBYTE(v37) = 23;
      guard_dispatch_icall_no_overrides(v37, (__int64)v102);
      CmpFreeTransientPoolWithTag(v38, 0x624E4D43u);
    }
    CmpDetachFromRegistryProcess(&ApcState);
  }
  if ( (*(_BYTE *)(BugCheckParameter4 + 8) & 8) != 0 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x400000) == 0 )
  {
    CmpDelayDerefKeyControlBlock(*(_QWORD *)(BugCheckParameter4 + 104), (__int64)&v99);
    *(_QWORD *)(BugCheckParameter4 + 104) = 0LL;
    *(_WORD *)(BugCheckParameter4 + 8) &= ~8u;
  }
  CmpDereferenceNameControlBlockWithLock(*(_DWORD **)(BugCheckParameter4 + 80), v29, v22);
  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 112), 0x6E494D43u);
  v42 = *(_QWORD **)(BugCheckParameter4 + 192);
  if ( v42 )
  {
    v63 = v42[3];
    if ( v63 )
    {
      v35 = *(_QWORD *)(v63 + 16);
      v64 = *v42;
      if ( *(_QWORD **)(*v42 + 8LL) != v42 )
        goto LABEL_98;
      v65 = (_QWORD *)v42[1];
      if ( (_QWORD *)*v65 != v42 )
        goto LABEL_98;
      *v65 = v64;
      *(_QWORD *)(v64 + 8) = v65;
    }
    ExFreePoolWithTag(v42, 0);
    *(_QWORD *)(BugCheckParameter4 + 192) = 0LL;
  }
  v43 = (_DWORD *)(BugCheckParameter4 + 16);
  v44 = *(_QWORD *)(BugCheckParameter4 + 72);
  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x20000) != 0 )
  {
    CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4, v39, v40, v41);
    CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
    CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
  }
  else
  {
    for ( i = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1648LL)
                        + 8
                        * (3
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v43 ^ (*v43 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v43 ^ (*v43 >> 9))) >> 9)))
                         + 2)); i; i = (__int64 *)(v46 + 8) )
    {
      v46 = *i;
      if ( !*i )
        break;
      if ( (_DWORD *)v46 == v43 )
      {
        *i = *(_QWORD *)(v46 + 8);
        break;
      }
    }
  }
  *(_DWORD *)(BugCheckParameter4 + 8) |= 0x80000u;
  if ( !v35 )
    goto LABEL_145;
  v47 = *(_QWORD *)(v35 + 32);
  v48 = *(_QWORD *)v35;
  do
  {
    v49 = v48;
    if ( v48 <= 1 )
    {
      v53 = (_QWORD *)(v35 + 224);
      if ( (_QWORD *)*v53 != v53 )
        KeBugCheckEx(0x51u, 0x34uLL, v35, 1uLL, 0LL);
      v97 = (_QWORD *)*((_QWORD *)&v99 + 1);
      if ( **((__int128 ***)&v99 + 1) == &v99 )
      {
        *(_QWORD *)(v35 + 232) = *((_QWORD *)&v99 + 1);
        *v53 = &v99;
        *v97 = v53;
        *((_QWORD *)&v99 + 1) = v35 + 224;
        *(_BYTE *)(v35 + 64) |= 1u;
        goto LABEL_145;
      }
      goto LABEL_98;
    }
    v50 = v48 - 1;
    v51 = v48 == 3 && (*(_DWORD *)(v35 + 184) & 0x40000) != 0 && *(_BYTE *)(v47 + 2952) == 1;
    v52 = _InterlockedCompareExchange64((volatile signed __int64 *)v35, v50, v48);
    v48 = v52;
  }
  while ( v52 != v49 );
  if ( v52 < v50 )
    KeBugCheckEx(0x51u, 0x25uLL, v35, 0LL, 0LL);
  if ( v51 )
    CmpDoQueueLateUnloadWorker(v47);
LABEL_145:
  if ( !v44 )
    goto LABEL_160;
  v88 = *(_QWORD *)(v44 + 32);
  v89 = *(_QWORD *)v44;
  while ( 2 )
  {
    v90 = v89;
    if ( v89 <= 1 )
    {
      v94 = (_QWORD *)(v44 + 224);
      if ( (_QWORD *)*v94 != v94 )
        KeBugCheckEx(0x51u, 0x34uLL, v44, 1uLL, 0LL);
      v98 = (_QWORD *)*((_QWORD *)&v99 + 1);
      if ( **((__int128 ***)&v99 + 1) == &v99 )
      {
        *(_QWORD *)(v44 + 232) = *((_QWORD *)&v99 + 1);
        *v94 = &v99;
        *v98 = v94;
        *((_QWORD *)&v99 + 1) = v44 + 224;
        *(_BYTE *)(v44 + 64) |= 1u;
        goto LABEL_160;
      }
      goto LABEL_98;
    }
    v91 = v89 - 1;
    v92 = v89 == 3 && (*(_DWORD *)(v44 + 184) & 0x40000) != 0 && *(_BYTE *)(v88 + 2952) == 1;
    v93 = _InterlockedCompareExchange64((volatile signed __int64 *)v44, v91, v89);
    v89 = v93;
    if ( v93 != v90 )
      continue;
    break;
  }
  if ( v93 < v91 )
    KeBugCheckEx(0x51u, 0x25uLL, v44, 0LL, 0LL);
  if ( v92 )
    CmpDoQueueLateUnloadWorker(v88);
LABEL_160:
  LODWORD(v11) = v100;
LABEL_161:
  if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread()
    && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.KernelShadowStackInitial);
    if ( *(_QWORD *)(BugCheckParameter4 + 120) != BugCheckParameter4 + 120 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter4, 0LL, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x10000) != 0 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter4, 1uLL, 0LL);
    v95 = *(void **)(BugCheckParameter4 + 200);
    if ( (unsigned __int64)v95 > 1 )
      ExFreePoolWithTag(v95, 0x624E4D43u);
    v96 = *(_QWORD *)(BugCheckParameter4 + 296);
    if ( (v96 & 1) != 0 )
      v96 &= ~1uLL;
    if ( v96 )
      CmpFreeTransientPoolWithTag((void *)v96, 0x624E4D43u);
    *(_DWORD *)(BugCheckParameter4 + 8) |= 0x10000u;
    *(_QWORD *)(BugCheckParameter4 + 32) = 0LL;
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside, (PVOID)BugCheckParameter4);
    _InterlockedDecrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.WpsFeedback);
  }
LABEL_103:
  CmpUnlockKcb(BugCheckParameter4);
  if ( v25 )
    CmpUnlockKcb(v25);
  v69 = (__int64 *)(*((_QWORD *)v8 + 206) + 24LL * ((unsigned int)v11 & (v8[414] - 1)));
  v69[1] = 0LL;
  _m_prefetchw(v69);
  v70 = *v69;
  v71 = *v69 - 16;
  if ( (*v69 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v71 = 0LL;
  if ( (v70 & 2) != 0 || (v72 = *v69, v72 != _InterlockedCompareExchange64(v69, v71, v70)) )
    ExfReleasePushLock(v69);
  KeAbPostRelease((unsigned __int64)v69);
  if ( _InterlockedExchangeAdd(v8 + 1060, 0xFFFFFFFF) != 1 )
    goto LABEL_123;
  v77 = v8 + 402;
  if ( *(_DWORD **)v77 == v77 )
    goto LABEL_114;
  CmpLockHiveListExclusive(v74, v73, v75, v76);
  v78 = *(_QWORD *)v77;
  if ( *(_DWORD **)(*(_QWORD *)v77 + 8LL) != v77 || (v79 = (_QWORD *)*((_QWORD *)v8 + 202), (_DWORD *)*v79 != v77) )
LABEL_98:
    __fastfail(3u);
  *v79 = v78;
  *(_QWORD *)(v78 + 8) = v79;
  CmpUnlockHiveList();
LABEL_114:
  *v8 = -1160724768;
  HvFreeDirtyData((__int64)v8);
  CmpDeleteKcbCache((__int64)v8);
  v80 = (void *)*((_QWORD *)v8 + 232);
  if ( v80 )
    ExFreePoolWithTag(v80, 0x624E4D43u);
  v81 = (void *)*((_QWORD *)v8 + 230);
  if ( v81 )
    ExFreePoolWithTag(v81, 0x20204D43u);
  v82 = (void *)*((_QWORD *)v8 + 234);
  if ( v82 )
    ExFreePoolWithTag(v82, 0);
  v83 = (void *)*((_QWORD *)v8 + 603);
  if ( v83 )
    ExFreePoolWithTag(v83, 0);
  CmpReleaseGlobalQuota(0x12E0u);
  ExFreePoolWithTag(v8, 0);
LABEL_123:
  CmpDrainDelayDerefContext((_QWORD **)&v99);
}
