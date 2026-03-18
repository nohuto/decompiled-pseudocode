/*
 * XREFs of KiRemoveSystemWorkPriorityKick @ 0x14052FA20
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KiSetThreadSchedulingGroup @ 0x140203774 (KiSetThreadSchedulingGroup.c)
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140209460 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiBeginThreadAccountingPeriod @ 0x140209D10 (KiBeginThreadAccountingPeriod.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14021B160 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KiUpdateRunTime @ 0x14021F420 (KiUpdateRunTime.c)
 *     KiCheckWaitNext @ 0x1402200D0 (KiCheckWaitNext.c)
 *     KeRcuReadUnlock @ 0x1402206B0 (KeRcuReadUnlock.c)
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 *     KiRcuCheckQuiescent @ 0x140221E10 (KiRcuCheckQuiescent.c)
 *     CcForceWriteThrough @ 0x140222070 (CcForceWriteThrough.c)
 *     KiRcuReadLock @ 0x1402223BC (KiRcuReadLock.c)
 *     KeWaitForAlertByThreadId @ 0x140222460 (KeWaitForAlertByThreadId.c)
 *     KiDispatchInterrupt @ 0x140223290 (KiDispatchInterrupt.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140225340 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1402287D0 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x1402288B0 (KiSelectIdleProcessor.c)
 *     KiEnterLongDpcProcessing @ 0x14022EA74 (KiEnterLongDpcProcessing.c)
 *     KiChooseTargetProcessor @ 0x140235760 (KiChooseTargetProcessor.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140237F74 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x14023F880 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x14023FC00 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetAddressPolicy @ 0x140247450 (KiSetAddressPolicy.c)
 *     PpmPerfApplyProcessorState @ 0x140252C88 (PpmPerfApplyProcessorState.c)
 *     PpmParkReportParkedCore @ 0x140253514 (PpmParkReportParkedCore.c)
 *     PpmSnapPerformanceAccumulation @ 0x140253D2C (PpmSnapPerformanceAccumulation.c)
 *     ExpReleaseFastResourceExclusive @ 0x1402707E0 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270AF0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     PspUnlockProcessThreadListShared @ 0x140271AF0 (PspUnlockProcessThreadListShared.c)
 *     PspUnlockThreadSecurityShared @ 0x140271DC0 (PspUnlockThreadSecurityShared.c)
 *     ?KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z @ 0x140272090 (-KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140272190 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceShared @ 0x1402729A0 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x140275660 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402759D0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140276E40 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140279320 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x1402796C0 (ExReleasePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ExReleasePushLockSharedEx @ 0x14027A2B0 (ExReleasePushLockSharedEx.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14027A640 (ExReleaseAutoExpandPushLockShared.c)
 *     ExReleasePushLockEx @ 0x14027AF50 (ExReleasePushLockEx.c)
 *     ExReleaseFastResource @ 0x14027B310 (ExReleaseFastResource.c)
 *     ObpReleaseLookupContext @ 0x14027BE10 (ObpReleaseLookupContext.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027C200 (FsRtlReleaseHeaderMutex.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027CBB0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     PspUnlockProcessShared @ 0x14027CFB0 (PspUnlockProcessShared.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027D330 (RtlpHpReleaseQueuedLockExclusive.c)
 *     PspUnlockProcessListShared @ 0x14027D690 (PspUnlockProcessListShared.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeAddressAll @ 0x1402BA1F0 (KeWakeAddressAll.c)
 *     KiWakeAddressAll @ 0x1402BA5A8 (KiWakeAddressAll.c)
 *     KiUpdateSpeculationControl @ 0x1402BB280 (KiUpdateSpeculationControl.c)
 *     KeUpdateThreadTag @ 0x1402C4800 (KeUpdateThreadTag.c)
 *     KeShouldYieldProcessor @ 0x1402D49D0 (KeShouldYieldProcessor.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     MiPeriodicGoodCitizen @ 0x140313E40 (MiPeriodicGoodCitizen.c)
 *     MiWalkPageTablesEvaluatePte @ 0x140327B30 (MiWalkPageTablesEvaluatePte.c)
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     KiExecuteAllDpcs @ 0x14032DD00 (KiExecuteAllDpcs.c)
 *     PoSetProcessorQos @ 0x14032FA60 (PoSetProcessorQos.c)
 *     KeCheckAndApplyBamQos @ 0x140330350 (KeCheckAndApplyBamQos.c)
 *     KiCheckForPendingQosUpdate @ 0x140330CB0 (KiCheckForPendingQosUpdate.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiResumeThreadCycleAccumulation @ 0x140334E5C (KiResumeThreadCycleAccumulation.c)
 *     KiRetireDpcList @ 0x140335700 (KiRetireDpcList.c)
 *     KiCheckRuntimeHistoryHashTableCleanup @ 0x140335ADC (KiCheckRuntimeHistoryHashTableCleanup.c)
 *     KiResetForceIdle @ 0x140336934 (KiResetForceIdle.c)
 *     KiCheckAndRearmForceIdle @ 0x140336E2C (KiCheckAndRearmForceIdle.c)
 *     MiDecommitPages @ 0x140360150 (MiDecommitPages.c)
 *     MiDeleteVaDirect @ 0x140361EF0 (MiDeleteVaDirect.c)
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     PspRevertContainerImpersonation @ 0x14037D900 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     ExInterlockedInsertTailList @ 0x1403DE450 (ExInterlockedInsertTailList.c)
 *     ExpAcquireSpinLockDisabled @ 0x1403DE500 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x1403DFB08 (ExpReleaseSpinLockDisabled.c)
 *     KiHaltOnAddress @ 0x1403E57E8 (KiHaltOnAddress.c)
 *     PpmPerfSetProcessorIdle @ 0x1403EAB34 (PpmPerfSetProcessorIdle.c)
 *     IopDecrementVpbRefCount @ 0x1403EB430 (IopDecrementVpbRefCount.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1403ECAA4 (PpmBeginActiveTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403ECDF0 (PpmUpdatePerformanceFeedback.c)
 *     KeRemovePriQueue @ 0x1403F5D50 (KeRemovePriQueue.c)
 *     KxReenterRetpolinedCode @ 0x1403F73A4 (KxReenterRetpolinedCode.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     ExIsFastResourceHeld @ 0x140413900 (ExIsFastResourceHeld.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140419438 (KiSetClockIntervalToMinimumRequested.c)
 *     KiInsertNewDpcRuntime @ 0x14041A56C (KiInsertNewDpcRuntime.c)
 *     PpmParkSnapNodeStatistics @ 0x14041FFA4 (PpmParkSnapNodeStatistics.c)
 *     PpmIdleSnapConcurrency @ 0x1404212F0 (PpmIdleSnapConcurrency.c)
 *     KeRemoveQueueDpcEx @ 0x140423370 (KeRemoveQueueDpcEx.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x14042D820 (PpmIdleSnapConcurrencyIdleTime.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14043153C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ?KiAbTryReclaimOrphanedEntries@LegacyAutoBoost@@YAKPEAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRIES@@@Z @ 0x140434228 (-KiAbTryReclaimOrphanedEntries@LegacyAutoBoost@@YAKPEAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRIES@@@Z.c)
 *     KiCompleteDirectSwitchThread @ 0x1404399F8 (KiCompleteDirectSwitchThread.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140456410 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExInitializeFastResourceAcquired @ 0x1404567B0 (ExInitializeFastResourceAcquired.c)
 *     ExInterlockedRemoveHeadList @ 0x14045D770 (ExInterlockedRemoveHeadList.c)
 *     KiSrcuCheckQuiescent @ 0x140462770 (KiSrcuCheckQuiescent.c)
 *     PpmExecutePeriodicPerfCheck @ 0x14046A810 (PpmExecutePeriodicPerfCheck.c)
 *     KiUpdateSystemTime @ 0x14046AA24 (KiUpdateSystemTime.c)
 *     ?KiAbpUmPreWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x14047FF80 (-KiAbpUmPreWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     KdPollBreakIn @ 0x140487E90 (KdPollBreakIn.c)
 *     KeExitRetpoline @ 0x14048D73C (KeExitRetpoline.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x1404A70C8 (IopLiveDumpProcessCorralStateChange.c)
 *     PpmIdleUpdateConcurrency @ 0x1404A9700 (PpmIdleUpdateConcurrency.c)
 *     HvlPerformEndOfInterrupt @ 0x1404B6FB0 (HvlPerformEndOfInterrupt.c)
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 *     ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404C4D60 (-KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     KeSetForceIdle @ 0x1404C5268 (KeSetForceIdle.c)
 *     KeClearForceIdle @ 0x1404C533C (KeClearForceIdle.c)
 *     PpmResetInterruptRate @ 0x1404E61A0 (PpmResetInterruptRate.c)
 *     KiFlushQueuedDpcsWorker @ 0x1404F2190 (KiFlushQueuedDpcsWorker.c)
 *     ExDisownFastResource @ 0x1404F88C0 (ExDisownFastResource.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404FDC3C (RtlpFcWriteHighLowHigh.c)
 *     ?KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404FE0B0 (-KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     KeThawExecution @ 0x140502280 (KeThawExecution.c)
 *     KeSetBasePriorityThread @ 0x140528B30 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052C560 (KeBoostPriorityThread.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405E51A4 (KiInitializeProcessorCycleAccumulation.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KeSrcuReadLock @ 0x1405F50F0 (KeSrcuReadLock.c)
 *     KeSrcuReadUnlock @ 0x1405F51C0 (KeSrcuReadUnlock.c)
 *     KiSrcuNotifyWorkerDpcRoutine @ 0x1405F5700 (KiSrcuNotifyWorkerDpcRoutine.c)
 *     KiSrcuQueueGracePeriodReport @ 0x1405F5940 (KiSrcuQueueGracePeriodReport.c)
 *     KiFreezeTargetExecution @ 0x1405F5E50 (KiFreezeTargetExecution.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F6610 (KiExecuteSmtIsolationThread.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405F9A74 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryFreezeProcessorDpc @ 0x1405F9D90 (KiBugCheckRecoveryFreezeProcessorDpc.c)
 *     KiScheduleBugcheckRecovery @ 0x1405FA570 (KiScheduleBugcheckRecovery.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FA874 (KiUpdateBugcheckRecoveryProgress.c)
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405FAA78 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 *     KiAcquireReleaseDpcData @ 0x1405FAD5C (KiAcquireReleaseDpcData.c)
 *     KiDpcWatchdog @ 0x1405FADE0 (KiDpcWatchdog.c)
 *     KiExecuteDpc @ 0x1405FAE40 (KiExecuteDpc.c)
 *     KiExecuteDpcDelegate @ 0x1405FAF60 (KiExecuteDpcDelegate.c)
 *     KiTimerExpirationDpc @ 0x1405FB010 (KiTimerExpirationDpc.c)
 *     PpmInstallFeedbackCounters @ 0x140602A90 (PpmInstallFeedbackCounters.c)
 *     ExAcquireFastResourceWithFlags @ 0x1406CDB10 (ExAcquireFastResourceWithFlags.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x1406CE650 (ExpConvertSharedToExclusiveImmediately.c)
 *     MiReapplyImportOptimizationIsr @ 0x1406FB670 (MiReapplyImportOptimizationIsr.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF2260 (PnprQuiesceProcessorDpc.c)
 *     KiUpdateProcessorCount @ 0x140BF3458 (KiUpdateProcessorCount.c)
 *     PopHandleNextState @ 0x140C02C90 (PopHandleNextState.c)
 *     KeLoadMTRR @ 0x140C06D50 (KeLoadMTRR.c)
 *     KiCalibrateTimeAdjustment @ 0x140C078A0 (KiCalibrateTimeAdjustment.c)
 *     KiSetPageAttributesTable @ 0x140C0C54C (KiSetPageAttributesTable.c)
 *     ExpComputeCyclesPerYield @ 0x140CAA424 (ExpComputeCyclesPerYield.c)
 *     KiComputeDispatchInterruptCost @ 0x140CC90C0 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140493EC0 (HvlpSetRegister64.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140527744 (EtwTraceXSchedulerPriorityKickSend.c)
 */

__int64 __fastcall KiRemoveSystemWorkPriorityKick(__int64 a1)
{
  int *v1; // r8
  int v3; // r11d
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // rdx

  v1 = *(int **)(a1 + 36600);
  v3 = *v1;
  result = (unsigned int)v1[5];
  if ( (*v1 & 0x280000) != 0 )
    return result;
  if ( (_DWORD)result )
    return result;
  if ( v1[7] )
    return result;
  if ( v1[8] )
    return result;
  if ( *((_QWORD *)v1 + 5) != *((_QWORD *)v1 + 6) )
    return result;
  result = *(_QWORD *)(a1 + 56);
  if ( !result || *(_BYTE *)(a1 + 34661) )
    return result;
  v5 = *(_BYTE *)result & 0x7F;
  if ( (*(_BYTE *)result & 0x7F) == 0 )
  {
    result = *(_QWORD *)(a1 + 24);
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 == result || *(_QWORD *)(a1 + 8) == result && !v6 )
      v5 = KiVpThreadSystemWorkPriority;
LABEL_13:
    if ( v5 >= 16 )
      return result;
    goto LABEL_14;
  }
  if ( v5 != 63 )
    goto LABEL_13;
  v5 = 0;
LABEL_14:
  result = (unsigned int)(unsigned __int8)v3 - 1;
  if ( (unsigned int)result <= 0x1E && (unsigned __int8)v3 > v5 && (unsigned __int8)v3 >= KiVpThreadSystemWorkPriority )
  {
    v1[3] = 3;
    if ( (BYTE4(xmmword_140FBFC10) & 0x20) != 0 && !KeGetPcr()->Prcb.CombinedNmiMceActive )
    {
      *(_BYTE *)(a1 + 34661) = 1;
      EtwTraceXSchedulerPriorityKickSend(*(_DWORD *)(a1 + 36), 3);
      *(_BYTE *)(a1 + 34661) = 0;
    }
    return HvlpSetRegister64(589851, 0xFFFFFFFEuLL);
  }
  return result;
}
