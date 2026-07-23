/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140C0ACC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ExNotifyCallback @ 0x140474150 (ExNotifyCallback.c)
 *     PopRunNormalIrpWorkers @ 0x14052B664 (PopRunNormalIrpWorkers.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060A1F8 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopClearShutdownMarker @ 0x14077F40C (PopClearShutdownMarker.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 *     PopAdjustHiberFile @ 0x140B03030 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 *     PopClearTransitionCheckpoints @ 0x140B31F00 (PopClearTransitionCheckpoints.c)
 *     PopClearSystemSleepCheckpoint @ 0x140B417F0 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSystemShutdownMarker @ 0x140B4665C (PopClearSystemShutdownMarker.c)
 *     CmSetLazyFlushState @ 0x140B48A54 (CmSetLazyFlushState.c)
 *     PopClearHibernateDiagnosticInfo @ 0x140B48F88 (PopClearHibernateDiagnosticInfo.c)
 *     PopReleaseTransitionLock @ 0x140B4DDD0 (PopReleaseTransitionLock.c)
 *     PopClearSleepMarker @ 0x140B51754 (PopClearSleepMarker.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140C03138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

void __fastcall PopUnlockAfterSleepWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _KLOCK_ENTRIES *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _KLOCK_ENTRIES *v33; // r9
  __int64 v34; // [rsp+20h] [rbp-18h]

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock, a2, a3, a4);
  CurrentThread = KeGetCurrentThread();
  qword_140F105F8 = CurrentThread;
  if ( PopWaitingForTransitionLock
    && (int)PopPushPowerStateTransitionRecordWithCallback(
              KeGetCurrentThread()->ApcState.Process,
              CurrentThread,
              0LL,
              0LL,
              0LL) < 0 )
  {
    PopWaitingForTransitionLock = 0;
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopUnlockAfterSleepLock);
  CmSetLazyFlushState(1);
  ExSwapinWorkerThreads(1u);
  ExNotifyCallback(ExpSysDbgLock.Header.WaitListHead.Flink, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  guard_dispatch_icall_no_overrides(0LL, 0LL);
  PopClearTransitionCheckpoints(v6, v5, v7, v8);
  PopClearSleepMarker(v10, v9, v11, v12);
  PopClearSystemSleepCheckpoint(0);
  PopClearShutdownMarker();
  PopClearSystemShutdownMarker(v14, v13, v15, v16);
  PopFreeHiberContext(v18, v17, v19);
  PopAcquirePolicyLock(v21, v20);
  if ( LOBYTE(PpmIdlePolicyLock.Padding[2]) )
    PopAdjustHiberFile(v22);
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock(v24, v23, v25, v26, v34);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock, v27, v28, v29);
  qword_140F105F8 = 0LL;
  if ( PopWaitingForTransitionLock )
    PoDelistPowerStateTransitionBlocker(v31, v30, v32, v33);
  PopReleaseRwLock((struct _KTHREAD *)&PopUnlockAfterSleepLock);
  PopReleaseTransitionLock(1);
}
