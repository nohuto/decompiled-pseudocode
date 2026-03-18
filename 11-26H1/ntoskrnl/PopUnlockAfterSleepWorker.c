/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140C04AB0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140366CB0 (MmUnlockPagableImageSection.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ExNotifyCallback @ 0x14047A7E0 (ExNotifyCallback.c)
 *     PopRunNormalIrpWorkers @ 0x140529074 (PopRunNormalIrpWorkers.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060769C (PopPushPowerStateTransitionRecordWithCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopClearShutdownMarker @ 0x14077C918 (PopClearShutdownMarker.c)
 *     ExSwapinWorkerThreads @ 0x140956958 (ExSwapinWorkerThreads.c)
 *     PopAdjustHiberFile @ 0x140B01300 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x140B1AB90 (PopFreeHiberContext.c)
 *     PopClearTransitionCheckpoints @ 0x140B30120 (PopClearTransitionCheckpoints.c)
 *     PopClearSystemSleepCheckpoint @ 0x140B3F7C0 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSystemShutdownMarker @ 0x140B4489C (PopClearSystemShutdownMarker.c)
 *     CmSetLazyFlushState @ 0x140B46A24 (CmSetLazyFlushState.c)
 *     PopClearHibernateDiagnosticInfo @ 0x140B46F58 (PopClearHibernateDiagnosticInfo.c)
 *     PopReleaseTransitionLock @ 0x140B4C040 (PopReleaseTransitionLock.c)
 *     PopClearSleepMarker @ 0x140B4EEC4 (PopClearSleepMarker.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140BFD138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
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

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F0F620, a2, a3, a4);
  CurrentThread = KeGetCurrentThread();
  qword_140F0FD38 = CurrentThread;
  if ( PopWeakChargerLock.WaitBlockFill5[24]
    && (int)PopPushPowerStateTransitionRecordWithCallback(
              KeGetCurrentThread()->ApcState.Process,
              CurrentThread,
              0LL,
              0LL,
              0LL) < 0 )
  {
    PopWeakChargerLock.WaitBlockFill5[24] = 0;
  }
  PopReleaseRwLock(&stru_140F0F620);
  CmSetLazyFlushState(1);
  ExSwapinWorkerThreads(1u);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
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
  if ( stru_140F10828.WaitBlockFill5[32] )
    PopAdjustHiberFile(v22);
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock(v24, v23, v25, v26, v34);
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F0F620, v27, v28, v29);
  qword_140F0FD38 = 0LL;
  if ( PopWeakChargerLock.WaitBlockFill5[24] )
    PoDelistPowerStateTransitionBlocker(v31, v30, v32, v33);
  PopReleaseRwLock(&stru_140F0F620);
  PopReleaseTransitionLock(1);
}
