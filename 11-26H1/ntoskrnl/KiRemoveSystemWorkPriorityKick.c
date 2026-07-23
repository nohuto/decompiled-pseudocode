/*
 * XREFs of KiRemoveSystemWorkPriorityKick @ 0x140531F20
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KiSetThreadSchedulingGroup @ 0x140203854 (KiSetThreadSchedulingGroup.c)
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140209540 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiBeginThreadAccountingPeriod @ 0x140209DF0 (KiBeginThreadAccountingPeriod.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14021CAF0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KiCheckWaitNext @ 0x140221A60 (KiCheckWaitNext.c)
 *     KeRcuReadUnlock @ 0x140222040 (KeRcuReadUnlock.c)
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     KiRcuCheckQuiescent @ 0x1402237A0 (KiRcuCheckQuiescent.c)
 *     CcForceWriteThrough @ 0x140223A00 (CcForceWriteThrough.c)
 *     KiRcuReadLock @ 0x140223D4C (KiRcuReadLock.c)
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140226CD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x14022A160 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x14022A240 (KiSelectIdleProcessor.c)
 *     KiEnterLongDpcProcessing @ 0x140230404 (KiEnterLongDpcProcessing.c)
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402398D4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1402411E0 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x140241560 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetAddressPolicy @ 0x140248DB0 (KiSetAddressPolicy.c)
 *     PpmPerfApplyProcessorState @ 0x1402545E8 (PpmPerfApplyProcessorState.c)
 *     PpmParkReportParkedCore @ 0x140254E74 (PpmParkReportParkedCore.c)
 *     PpmSnapPerformanceAccumulation @ 0x14025568C (PpmSnapPerformanceAccumulation.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14025FA20 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExInitializeFastResourceAcquired @ 0x14025FDC0 (ExInitializeFastResourceAcquired.c)
 *     ExpReleaseFastResourceExclusive @ 0x14026FD50 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     PspUnlockProcessThreadListShared @ 0x140271060 (PspUnlockProcessThreadListShared.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     ?KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z @ 0x140271600 (-KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceShared @ 0x140271F10 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140274F40 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140278890 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x140278C30 (ExReleasePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExReleasePushLockSharedEx @ 0x140279820 (ExReleasePushLockSharedEx.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140279BB0 (ExReleaseAutoExpandPushLockShared.c)
 *     ExReleasePushLockEx @ 0x14027A4C0 (ExReleasePushLockEx.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     ObpReleaseLookupContext @ 0x14027B380 (ObpReleaseLookupContext.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027B770 (FsRtlReleaseHeaderMutex.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027C120 (ExReleaseAutoExpandPushLockExclusive.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     PspUnlockProcessListShared @ 0x14027CC00 (PspUnlockProcessListShared.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     PpmPerfSetProcessorIdle @ 0x1402F7A14 (PpmPerfSetProcessorIdle.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402F7CD0 (PpmUpdatePerformanceFeedback.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1402F9AE4 (PpmBeginActiveTimeAccumulation.c)
 *     IopDecrementVpbRefCount @ 0x1402FB760 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     KiUpdateSpeculationControl @ 0x140305F40 (KiUpdateSpeculationControl.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     MiPeriodicGoodCitizen @ 0x140315E70 (MiPeriodicGoodCitizen.c)
 *     MiWalkPageTablesEvaluatePte @ 0x140329B60 (MiWalkPageTablesEvaluatePte.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     PoSetProcessorQos @ 0x140331A90 (PoSetProcessorQos.c)
 *     KeCheckAndApplyBamQos @ 0x140332380 (KeCheckAndApplyBamQos.c)
 *     KiCheckForPendingQosUpdate @ 0x140332CE0 (KiCheckForPendingQosUpdate.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiResumeThreadCycleAccumulation @ 0x140336E8C (KiResumeThreadCycleAccumulation.c)
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 *     KiCheckRuntimeHistoryHashTableCleanup @ 0x140337B0C (KiCheckRuntimeHistoryHashTableCleanup.c)
 *     KiResetForceIdle @ 0x1403389B4 (KiResetForceIdle.c)
 *     KiCheckAndRearmForceIdle @ 0x140338EAC (KiCheckAndRearmForceIdle.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     ExInterlockedInsertTailList @ 0x1403E1640 (ExInterlockedInsertTailList.c)
 *     ExpAcquireSpinLockDisabled @ 0x1403E16F0 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x1403E2CF8 (ExpReleaseSpinLockDisabled.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KxReenterRetpolinedCode @ 0x1403F0D54 (KxReenterRetpolinedCode.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     ExIsFastResourceHeld @ 0x140407F30 (ExIsFastResourceHeld.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14040D968 (KiSetClockIntervalToMinimumRequested.c)
 *     KiInsertNewDpcRuntime @ 0x140411DBC (KiInsertNewDpcRuntime.c)
 *     PpmParkSnapNodeStatistics @ 0x1404177E4 (PpmParkSnapNodeStatistics.c)
 *     PpmIdleSnapConcurrency @ 0x140418B30 (PpmIdleSnapConcurrency.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041E56C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140421EF0 (PpmIdleSnapConcurrencyIdleTime.c)
 *     ?KiAbTryReclaimOrphanedEntries@LegacyAutoBoost@@YAKPEAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRIES@@@Z @ 0x1404292F8 (-KiAbTryReclaimOrphanedEntries@LegacyAutoBoost@@YAKPEAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRIES@@@Z.c)
 *     KiCompleteDirectSwitchThread @ 0x14042C2A8 (KiCompleteDirectSwitchThread.c)
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 *     ExInterlockedRemoveHeadList @ 0x140457310 (ExInterlockedRemoveHeadList.c)
 *     KiSrcuCheckQuiescent @ 0x14045B730 (KiSrcuCheckQuiescent.c)
 *     PpmExecutePeriodicPerfCheck @ 0x140463F90 (PpmExecutePeriodicPerfCheck.c)
 *     KiUpdateSystemTime @ 0x1404641A4 (KiUpdateSystemTime.c)
 *     ?KiAbpUmPreWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x1404798C0 (-KiAbpUmPreWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     KdPollBreakIn @ 0x1404819D0 (KdPollBreakIn.c)
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x1404A0758 (IopLiveDumpProcessCorralStateChange.c)
 *     PpmIdleUpdateConcurrency @ 0x1404A2D90 (PpmIdleUpdateConcurrency.c)
 *     HvlPerformEndOfInterrupt @ 0x1404B07E0 (HvlPerformEndOfInterrupt.c)
 *     PpmCheckCustomRun @ 0x1404B5550 (PpmCheckCustomRun.c)
 *     ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404BE710 (-KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     KeSetForceIdle @ 0x1404BEC18 (KeSetForceIdle.c)
 *     KeClearForceIdle @ 0x1404BECEC (KeClearForceIdle.c)
 *     PpmResetInterruptRate @ 0x1404DF740 (PpmResetInterruptRate.c)
 *     KiFlushQueuedDpcsWorker @ 0x1404EB770 (KiFlushQueuedDpcsWorker.c)
 *     ExDisownFastResource @ 0x1404F1ED0 (ExDisownFastResource.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404F717C (RtlpFcWriteHighLowHigh.c)
 *     ?KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404F75F0 (-KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     KeThawExecution @ 0x1404FBB50 (KeThawExecution.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052EA80 (KeBoostPriorityThread.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405E7B14 (KiInitializeProcessorCycleAccumulation.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KeSrcuReadLock @ 0x1405F7AB0 (KeSrcuReadLock.c)
 *     KeSrcuReadUnlock @ 0x1405F7B80 (KeSrcuReadUnlock.c)
 *     KiSrcuNotifyWorkerDpcRoutine @ 0x1405F80C0 (KiSrcuNotifyWorkerDpcRoutine.c)
 *     KiSrcuQueueGracePeriodReport @ 0x1405F8300 (KiSrcuQueueGracePeriodReport.c)
 *     KiFreezeTargetExecution @ 0x1405F8810 (KiFreezeTargetExecution.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405FC494 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryFreezeProcessorDpc @ 0x1405FC7B0 (KiBugCheckRecoveryFreezeProcessorDpc.c)
 *     KiScheduleBugcheckRecovery @ 0x1405FCF90 (KiScheduleBugcheckRecovery.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FD294 (KiUpdateBugcheckRecoveryProgress.c)
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405FD498 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 *     KiAcquireReleaseDpcData @ 0x1405FD77C (KiAcquireReleaseDpcData.c)
 *     KiDpcWatchdog @ 0x1405FD800 (KiDpcWatchdog.c)
 *     KiExecuteDpc @ 0x1405FD860 (KiExecuteDpc.c)
 *     KiExecuteDpcDelegate @ 0x1405FD980 (KiExecuteDpcDelegate.c)
 *     KiTimerExpirationDpc @ 0x1405FDA30 (KiTimerExpirationDpc.c)
 *     PpmInstallFeedbackCounters @ 0x140605540 (PpmInstallFeedbackCounters.c)
 *     ExAcquireFastResourceWithFlags @ 0x1406D1B40 (ExAcquireFastResourceWithFlags.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x1406D2680 (ExpConvertSharedToExclusiveImmediately.c)
 *     MiReapplyImportOptimizationIsr @ 0x140700340 (MiReapplyImportOptimizationIsr.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 *     KiUpdateProcessorCount @ 0x140BF9458 (KiUpdateProcessorCount.c)
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 *     KeLoadMTRR @ 0x140C0CF60 (KeLoadMTRR.c)
 *     KiCalibrateTimeAdjustment @ 0x140C0DAB0 (KiCalibrateTimeAdjustment.c)
 *     KiSetPageAttributesTable @ 0x140C1275C (KiSetPageAttributesTable.c)
 *     ExpComputeCyclesPerYield @ 0x140CB0424 (ExpComputeCyclesPerYield.c)
 *     KiComputeDispatchInterruptCost @ 0x140CCF150 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x14048DA10 (HvlpSetRegister64.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 */

void __fastcall KiRemoveSystemWorkPriorityKick(__int64 a1)
{
  int *v1; // r8
  int v3; // r11d
  _BYTE *v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rdx

  v1 = *(int **)(a1 + 36600);
  v3 = *v1;
  if ( (*v1 & 0x280000) != 0 )
    return;
  if ( v1[5] )
    return;
  if ( v1[7] )
    return;
  if ( v1[8] )
    return;
  if ( *((_QWORD *)v1 + 5) != *((_QWORD *)v1 + 6) )
    return;
  v4 = *(_BYTE **)(a1 + 56);
  if ( !v4 || *(_BYTE *)(a1 + 34661) )
    return;
  v5 = *v4 & 0x7F;
  if ( (*v4 & 0x7F) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 == v6 || *(_QWORD *)(a1 + 8) == v6 && !v7 )
      v5 = KiVpThreadSystemWorkPriority;
LABEL_13:
    if ( v5 >= 16 )
      return;
    goto LABEL_14;
  }
  if ( v5 != 63 )
    goto LABEL_13;
  v5 = 0;
LABEL_14:
  if ( (unsigned int)(unsigned __int8)v3 - 1 <= 0x1E
    && (unsigned __int8)v3 > v5
    && (unsigned __int8)v3 >= KiVpThreadSystemWorkPriority )
  {
    v1[3] = 3;
    if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 && !KeGetPcr()->Prcb.CombinedNmiMceActive )
    {
      *(_BYTE *)(a1 + 34661) = 1;
      EtwTraceXSchedulerPriorityKickSend(*(_DWORD *)(a1 + 36), 3);
      *(_BYTE *)(a1 + 34661) = 0;
    }
    HvlpSetRegister64(589851, 0xFFFFFFFEuLL);
  }
}
