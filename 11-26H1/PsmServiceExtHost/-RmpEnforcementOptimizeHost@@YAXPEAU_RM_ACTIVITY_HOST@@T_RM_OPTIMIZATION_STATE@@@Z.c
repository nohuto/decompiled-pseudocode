/*
 * XREFs of ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000C624 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800190B4 (-HampHostComputeWaitType@@YA-AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B1A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023F34 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026554 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800265E4 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026E1C (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800338CC (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003F3CC (-RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003F9E0 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18003FD7C (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUT.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FDD0 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE24 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE90 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x18003FF1C (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800400BC (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800417DC (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004394C (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180045630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x180061D64 (-HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x1800625B0 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180063B20 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z @ 0x180065A98 (-ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z.c)
 *     ?HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006C04C (-HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z @ 0x18006DAE0 (-HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006E74C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180078F30 (-HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18007F970 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18008C3D0 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpEnforcementOptimizeHost(__int64 a1, int a2)
{
  char v2; // bl
  unsigned int v4; // r14d
  __int64 v5; // rsi
  int updated; // ebx
  unsigned __int64 v7; // rax
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r15d
  unsigned __int64 v14; // rax
  DWORD v15; // r14d
  _QWORD *Value; // rbx
  int UnbiasedInterruptTimeMs64; // eax
  DWORD v18; // ecx
  __int64 *v19; // rax
  __int64 v20; // rdx
  void *v22; // rbx
  unsigned __int64 v23; // r12
  ModernResourceEnforcer *v24; // r13
  struct _HAM_APPLICATION *v25; // rbx
  char v26; // r14
  _DWORD *v27; // rdx
  _DWORD *v28; // r8
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // rbx
  DWORD v32; // r14d
  _QWORD *v33; // rbx
  struct _HAM_DEPENDENCY_GROUP *v34; // rbx
  unsigned int v35; // r8d
  __int64 v36; // rbx
  unsigned int v37; // ebx
  unsigned int v38; // eax
  struct _HAM_APPLICATION *v39; // rbx
  char v40; // r14
  _DWORD *v41; // rcx
  _DWORD *v42; // rdx
  int v43; // eax
  int IsSuspendWaiter; // eax
  _QWORD v45[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v46; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v47; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v49; // [rsp+B8h] [rbp+60h] BYREF

  v47 = 0;
  v2 = a2;
  LODWORD(v46) = 0;
  v48 = 0;
  v4 = 0;
  v5 = a1 + 56;
  if ( ((a2 - 1) & a2) == 0 && (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 56));
    v47 = 1;
    RmHamHostActOnProcesses((struct _RM_ACTIVITY_HOST *)a1, 0x2001u, 1u, RmpActivityHostCommitSavingsCallback, &v47);
    v35 = v47;
    *(_DWORD *)(a1 + 1252) = *(_DWORD *)(a1 + 1252) & 0xFFFFFFEF | (16 * (v47 & 1));
    if ( !v35 )
      *(_DWORD *)(a1 + 1248) &= ~4u;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5, 0);
    return;
  }
  if ( (a2 & 0x80u) == 0 )
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_DWORD *)(a1 + 1256) |= 0x100u;
      RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      if ( (int)RmpSystemChangePsmApplicationState(a1, 2LL, *(_BYTE *)(a1 + 648) != 0 ? 8 : 0) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgs();
      if ( RmHamHostGetJobType((struct _RM_HAM_ACTIVITY_HOST *)v5) == 2 )
      {
        if ( !*(_BYTE *)(v5 + 592) )
          HampWakeContextUpdateExternalApplicationState(*(_QWORD *)(v5 + 1056), 2LL);
        v39 = *(struct _HAM_APPLICATION **)(v5 + 792);
        v40 = *(_BYTE *)(v5 + 592);
        HampAppAcquireLockExclusive(v39);
        v41 = (_DWORD *)((char *)v39 + 616);
        v42 = (_DWORD *)((char *)v39 + 620);
        if ( v40 )
          v43 = *v41 >> 25;
        else
          v43 = *v42 >> 5;
        if ( (v43 & 7u) - 2 > 2 )
        {
          if ( v40 )
          {
            *v41 &= 0xF5FFFFFF;
            *v41 |= 0x4000000u;
          }
          else
          {
            v47 = *v42 & 0xFFFFFF1F | 0x40;
            HampAppCommitStateSummary(v39, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v47);
          }
        }
        HampAppReleaseLockExclusive(v39);
      }
      RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      *(_DWORD *)(a1 + 1256) &= ~0x100u;
      *(_DWORD *)(a1 + 1252) |= 0x100u;
    }
    else if ( (a2 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 1256) |= 0x40u;
      RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, (v2 & 0x40) != 0);
      RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      *(_DWORD *)(a1 + 1256) &= ~0x40u;
      *(_DWORD *)(a1 + 1252) |= 0x40u;
    }
    else if ( (a2 & 8) != 0 )
    {
      if ( (*(_QWORD *)(a1 + 720) & 0x200000000000LL) != 0 )
      {
        *(_DWORD *)(a1 + 1252) |= 8u;
      }
      else
      {
        *(_DWORD *)(a1 + 1256) |= 8u;
        RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
        updated = RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 1u);
        RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
        *(_DWORD *)(a1 + 1252) |= 8u;
        *(_DWORD *)(a1 + 1256) &= ~8u;
        if ( updated < 0 )
          *(_QWORD *)(v5 + 664) |= 0x200000000000uLL;
      }
    }
    else
    {
      v37 = a2 & 0x27;
      if ( (a2 & 0x27) != 0 && *(int *)(a1 + 24) >= 0 )
      {
        *(_DWORD *)(a1 + 1256) |= v37;
        NtClearEvent(*(HANDLE *)(a1 + 1312));
        if ( !*(_DWORD *)(a1 + 1328) || RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1) )
        {
          if ( *(int *)(a1 + 24) >= 0 )
          {
            RmpEmptyWorkerRun(a1, v37);
            v38 = RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1);
            *(_DWORD *)(a1 + 1256) &= ~v37;
            if ( v38 )
              *(_DWORD *)(a1 + 1252) |= v37;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1256) &= ~v37;
        }
      }
    }
    return;
  }
  HampHostCheckWaitForQuiesceTurn((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 56), (unsigned int *)&v46, &v48);
  if ( (_DWORD)v46 )
    return;
  *(_DWORD *)(a1 + 1256) |= 0x80u;
  v7 = *(_QWORD *)(v5 + 664) & 0xFFFFBFFF3FFFFFFFuLL;
  *(_QWORD *)(v5 + 684) = 0LL;
  *(_QWORD *)(v5 + 664) = v7 | 0x20000000;
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v5);
  while ( FirstActivity )
  {
    if ( (*((_BYTE *)FirstActivity + 552) & 8) == 0 )
    {
      v9 = *((_BYTE *)FirstActivity + 562);
      if ( (v9 == 2 || v9 == 3) && (*((_BYTE *)FirstActivity + 116) & 0x40) != 0 )
        HampActRequestStopEx(FirstActivity, 1LL, 10LL, 0LL, 6912, 0, 0LL);
    }
    v10 = *((_QWORD *)FirstActivity + 12);
    v11 = *((_QWORD *)FirstActivity + 10);
    FirstActivity = 0LL;
    if ( v10 != v11 + 608 )
      FirstActivity = (struct _HAM_ACTIVITY *)(v10 - 96);
  }
  v12 = HampHostComputeWaitType((struct _RM_HAM_ACTIVITY_HOST *)v5);
  v13 = v12;
  if ( v12 <= 1 || v12 - 2 > 1 )
    v46 = 0LL;
  else
    v46 = *(_QWORD *)(v5 + 808);
  RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
  if ( !v13 )
  {
    v4 = 5000;
    goto LABEL_26;
  }
  if ( v13 != 1 )
  {
    if ( v13 == 2 || v13 == 3 )
    {
      HampUtilQueryDesktopWindowCloseTimeout(&v47);
      goto LABEL_81;
    }
    if ( v13 != 4 )
      goto LABEL_26;
  }
  HampUtilQueryQuiesceTimeouts(&v47, 0LL);
LABEL_81:
  v4 = v47;
LABEL_26:
  v14 = v4;
  v15 = HampLockTrackerId;
  v49 = v14;
  v45[0] = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v15) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(v5);
  *(_DWORD *)(v5 + 688) = v49;
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  v18 = HampLockTrackerId;
  *(_DWORD *)(v5 + 684) = UnbiasedInterruptTimeMs64;
  if ( v18 != -1 )
  {
    v19 = (__int64 *)TlsGetValue(v18);
    v20 = *v19;
    if ( (*v19 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v19[2]-- == 1 )
      *v19 = v20 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v5 + 8) = 0;
  RtlReleaseSRWLockExclusive(v5);
  v22 = *(void **)(v5 + 800);
  v23 = v49;
  v24 = *(ModernResourceEnforcer **)(*(_QWORD *)((a1 & -(__int64)(v5 != 0)) + 0x30) + 40LL);
  if ( (*((int (__fastcall **)(void *, unsigned __int64, _QWORD))v24 + 23))(v22, v49, 0LL) < 0 )
    ModernResourceEnforcer::ResourceTimerSet(v24, v22, v23, 1u);
  if ( *(_DWORD *)((a1 & -(__int64)(v5 != 0)) + 0x268) == 2 && !*(_BYTE *)(v5 + 592) )
  {
    v36 = *(_QWORD *)(v5 + 1056);
    HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v36);
    *(_BYTE *)(v36 + 184) &= 0x9Fu;
    *(_BYTE *)(v36 + 184) |= 0x10u;
    *(_BYTE *)(v36 + 185) |= 0x10u;
    HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)v36);
    HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v36);
  }
  switch ( v13 )
  {
    case 1u:
      goto LABEL_37;
    case 2u:
      HampHostDesktopWindowMessageWorkerArm((struct _RM_HAM_ACTIVITY_HOST *)v5);
      break;
    case 4u:
      HampHostDesktopWindowMessageWorkerArm((struct _RM_HAM_ACTIVITY_HOST *)v5);
      TpWaitForWork(*(_QWORD *)(v5 + 648), 0LL);
LABEL_37:
      RmpEnforcementQuiescePsmApplication((struct _RM_ACTIVITY_HOST *)a1);
      break;
  }
  if ( *(_DWORD *)((a1 & -(__int64)(v5 != 0)) + 0x268) == 2 )
  {
    v25 = *(struct _HAM_APPLICATION **)(v5 + 792);
    v26 = *(_BYTE *)(v5 + 592);
    HampAppAcquireLockExclusive(v25);
    v27 = (_DWORD *)((char *)v25 + 616);
    v28 = (_DWORD *)((char *)v25 + 620);
    if ( v26 )
      v29 = *v27 >> 25;
    else
      v29 = *v28 >> 5;
    v30 = v29 & 7;
    if ( ((v30 - 1) & 0xFFFFFFFC) != 0 || v30 == 2 )
    {
      if ( v26 )
      {
        *v27 &= 0xF3FFFFFF;
        *v27 |= 0x2000000u;
      }
      else
      {
        v47 = *v28 & 0xFFFFFF1F | 0x20;
        HampAppCommitStateSummary(v25, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v47);
      }
    }
    HampAppReleaseLockExclusive(v25);
  }
  RmHamHostStateWorkerWaitForQuiesce(v5, &v49, v45, v46, v13);
  if ( v48 )
    HampHostEndQuiesceTurn((struct _RM_HAM_ACTIVITY_HOST *)v5);
  if ( *(char *)(a1 + 1252) >= 0 )
  {
    IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v5);
    *(_DWORD *)(a1 + 1256) &= ~0x80u;
    HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v5, IsSuspendWaiter);
  }
  *(_QWORD *)(v5 + 664) &= ~0x400000000000000uLL;
  RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
  v31 = *(_QWORD *)(a1 + 48);
  RmpAcquireGlobalLock();
  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
    *(ExecutionModel::ResourceManager **)(v31 + 3544),
    (struct _RM_ACTIVITY_HOST *)a1);
  SetEvent(*(HANDLE *)(v31 + 360));
  v32 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v33 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v32) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v33 |= 2uLL;
    ++v33[2];
  }
  CempLockAcquireExclusive(v5);
  v34 = HampHostCheckEnterDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)v5);
  if ( v34 )
  {
    RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
    HampDepGroupRunStateChangeWorker(v34);
    RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
  }
}
