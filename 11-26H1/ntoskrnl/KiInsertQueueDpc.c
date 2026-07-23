/*
 * XREFs of KiInsertQueueDpc @ 0x140307FF0
 * Callers:
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402191F4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x1402192C0 (EtwpSwitchBuffer.c)
 *     EtwpRequestFlushTimer @ 0x140219A50 (EtwpRequestFlushTimer.c)
 *     PopQueueTargetDpc @ 0x14021AB1C (PopQueueTargetDpc.c)
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 *     HalpMcaQueueDpc @ 0x1402219D8 (HalpMcaQueueDpc.c)
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x1402261D0 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiScheduleNextForegroundBoost @ 0x14023B490 (KiScheduleNextForegroundBoost.c)
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     PpmCheckQueuePhaseActions @ 0x140253FF8 (PpmCheckQueuePhaseActions.c)
 *     PpmCheckContinueExecution @ 0x140254D58 (PpmCheckContinueExecution.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140260DB8 (EtwpCovSampCaptureApcRelease.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140263870 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpPrivate @ 0x14026BBF4 (IopAllocateIrpPrivate.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     KeWakeWaitChain @ 0x140272C70 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273060 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273420 (ExpCommitWakeResourceShared.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027B770 (FsRtlReleaseHeaderMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     HvlSharedIsr @ 0x1402F3080 (HvlSharedIsr.c)
 *     KeInsertQueueDpc @ 0x1403087F0 (KeInsertQueueDpc.c)
 *     KiScheduleSoftParkElectionIfNecessary @ 0x140308BF0 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140309580 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAddThreadToPrcbQueue @ 0x1403096A0 (KiAddThreadToPrcbQueue.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14030A994 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureQueueRebalance @ 0x14030C534 (EtwpCovSampCaptureQueueRebalance.c)
 *     IoProcessPassiveInterrupts @ 0x14030E378 (IoProcessPassiveInterrupts.c)
 *     CmFcManagerRecordFeatureUsage @ 0x140310364 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140310680 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 *     KeUpdatePendingQosRequest @ 0x140332658 (KeUpdatePendingQosRequest.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140335C00 (KiTransitionSchedulingGroupGeneration.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1403364D0 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     ?KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z @ 0x1403388C0 (-KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z.c)
 *     KiResetForceIdle @ 0x1403389B4 (KiResetForceIdle.c)
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140358C78 (CmFcManagerNotifyFeatureUsage.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiWakePriQueueWaiter @ 0x1403826C0 (KiWakePriQueueWaiter.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     KiInitiateGenericCallDpc @ 0x1403CC3E8 (KiInitiateGenericCallDpc.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     KeDeleteMutant @ 0x1403DFA18 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     KeRundownQueueCommon @ 0x1403E0A74 (KeRundownQueueCommon.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     WheapWorkQueueAddItem @ 0x1403E1560 (WheapWorkQueueAddItem.c)
 *     KeSetEventBoostPriorityEx @ 0x140419658 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     KeMaskInterrupt @ 0x140431A20 (KeMaskInterrupt.c)
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 *     HalpCmciInitProcessor @ 0x14044B398 (HalpCmciInitProcessor.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x1404607C0 (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140461760 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     PpmExecutePeriodicPerfCheck @ 0x140463F90 (PpmExecutePeriodicPerfCheck.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140470B28 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140482930 (EtwpCovSampCaptureQueueBuffer.c)
 *     KeDispatchSecondaryInterrupt @ 0x1404A8C20 (KeDispatchSecondaryInterrupt.c)
 *     KiRundownMutants @ 0x1404AB48C (KiRundownMutants.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404BE7C0 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KePulseEvent @ 0x1404C0CC0 (KePulseEvent.c)
 *     KeSetProcess @ 0x1404CA8CC (KeSetProcess.c)
 *     KiRcuReportQuiescentState @ 0x1404D3098 (KiRcuReportQuiescentState.c)
 *     HalpTimerDpcRoutine @ 0x1404E3140 (HalpTimerDpcRoutine.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1404E5250 (PpmHeteroDispatchHgsInterrupt.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404E6B84 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     HalpDmaControllerInterruptRoutine @ 0x1404EC300 (HalpDmaControllerInterruptRoutine.c)
 *     ObpDeferPushRefDerefInfo @ 0x1404EDF50 (ObpDeferPushRefDerefInfo.c)
 *     KiRegisterBugcheckRecoveryCallback @ 0x1404F1624 (KiRegisterBugcheckRecoveryCallback.c)
 *     KiRollbackSlistPops @ 0x1404FAE20 (KiRollbackSlistPops.c)
 *     HalpIommuTraceFault @ 0x1404FC840 (HalpIommuTraceFault.c)
 *     KiRcuFlushCompleted @ 0x1404FD44C (KiRcuFlushCompleted.c)
 *     EtwpQueueApcPoolDpc @ 0x140503254 (EtwpQueueApcPoolDpc.c)
 *     KiArmForceParkDutyCyclingForLocalReadyQueue @ 0x14050FE94 (KiArmForceParkDutyCyclingForLocalReadyQueue.c)
 *     HalpCmciHandler @ 0x140522EB0 (HalpCmciHandler.c)
 *     KiArmForceParkDutyCyclingForSharedReadyQueue @ 0x14052B5F8 (KiArmForceParkDutyCyclingForSharedReadyQueue.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140582B18 (HalpPmuReservedResourcesProcessorCallback.c)
 *     HalpDmaControllerCancelTransfer @ 0x14058EF74 (HalpDmaControllerCancelTransfer.c)
 *     HalpInsertSecondarySignalList @ 0x140591EFC (HalpInsertSecondarySignalList.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140599440 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpIommuReportIommuFault @ 0x1405A2AB0 (HalpIommuReportIommuFault.c)
 *     IvtHandleInterrupt @ 0x1405A9360 (IvtHandleInterrupt.c)
 *     HsaHandleInterrupt @ 0x1405AC6C0 (HsaHandleInterrupt.c)
 *     IopLiveDumpCorralProcessors @ 0x1405D1560 (IopLiveDumpCorralProcessors.c)
 *     KeRegisterObjectDpc @ 0x1405E7F4C (KeRegisterObjectDpc.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405F81D8 (KiSrcuNotifyWorkerSelectAndQueue.c)
 *     KiSrcuRequiresRebalance @ 0x1405F86E4 (KiSrcuRequiresRebalance.c)
 *     KiForegroundTimerCallback @ 0x1405F91F0 (KiForegroundTimerCallback.c)
 *     KiStartForceParkSingleDutyCycleTimerCallback @ 0x1405FB5A0 (KiStartForceParkSingleDutyCycleTimerCallback.c)
 *     KiStopForceParkSingleDutyCycleTimerCallback @ 0x1405FB620 (KiStopForceParkSingleDutyCycleTimerCallback.c)
 *     ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405FB940 (-KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405FC548 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiScheduleBugcheckRecovery @ 0x1405FCF90 (KiScheduleBugcheckRecovery.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FF658 (KiAltContextWorkQueueAddItem.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x1406138FC (PopIdleWakeAssignAccountingToSource.c)
 *     DifKeInsertQueueDpcWrapper @ 0x1406659C0 (DifKeInsertQueueDpcWrapper.c)
 *     EtwSendTraceBuffer @ 0x1406CA270 (EtwSendTraceBuffer.c)
 *     ExpTimeRefreshCallback @ 0x1406CF350 (ExpTimeRefreshCallback.c)
 *     ExQueueDebuggerWorker @ 0x1406D4A78 (ExQueueDebuggerWorker.c)
 *     ExpSvmFaultRoutine @ 0x1406D62F0 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x1406DADA0 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x1406DAE80 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406DB0A4 (WheaFlushETWEventsAddWorkRtn.c)
 *     MmSetAccessLogging @ 0x140707EF0 (MmSetAccessLogging.c)
 *     KiComputeDispatchInterruptCost @ 0x140CCF150 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiCheckPrcbAffinityEx @ 0x140308C80 (KiCheckPrcbAffinityEx.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiSetDpcRequestFlag @ 0x140447660 (KiSetDpcRequestFlag.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140460D40 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceDpcEnqueueEvent @ 0x140531CDC (EtwTraceDpcEnqueueEvent.c)
 *     EtwTraceCpuPartitionDpcSchedulingViolation @ 0x1405333FC (EtwTraceCpuPartitionDpcSchedulingViolation.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall KiInsertQueueDpc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  ULONG_PTR v5; // rsi
  unsigned __int8 v6; // r12
  bool v9; // dl
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r8
  signed __int64 IsrDpcStats; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  _QWORD *v25; // r10
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r10
  char v30; // al
  char v31; // r8
  char v32; // al
  __int16 v33; // r9
  __int16 v34; // r10
  __int64 v35; // rcx
  unsigned __int16 v36; // r8
  __int64 v37; // rdx
  unsigned int v38; // r8d
  unsigned __int64 v39; // rax
  unsigned int v40; // r8d
  unsigned int i; // eax
  struct _KPRCB *v42; // rax
  __int64 v43; // rax
  char v44; // al
  __int64 v45; // r8
  int v46; // edx
  char v47; // r9
  bool v48; // [rsp+40h] [rbp-A8h]
  unsigned int Number; // [rsp+44h] [rbp-A4h]
  int v50; // [rsp+48h] [rbp-A0h]
  int v51; // [rsp+4Ch] [rbp-9Ch]
  __int64 v52; // [rsp+50h] [rbp-98h]
  _BYTE v53[20]; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v54; // [rsp+70h] [rbp-78h]
  unsigned __int64 v55; // [rsp+78h] [rbp-70h]
  unsigned __int64 v56; // [rsp+80h] [rbp-68h]
  unsigned __int64 v57; // [rsp+88h] [rbp-60h]
  unsigned __int64 v58; // [rsp+90h] [rbp-58h]
  void *retaddr; // [rsp+E8h] [rbp+0h]
  bool v60; // [rsp+F0h] [rbp+8h]
  int v61; // [rsp+F0h] [rbp+8h]
  __int64 v62; // [rsp+F8h] [rbp+10h]

  v62 = a2;
  v5 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
  v6 = 0;
  v51 = 0;
  v50 = 0;
  v52 = 0LL;
  v48 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v9 = 0;
  v60 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    v9 = 0;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned __int16)v5 < 0x800u )
  {
    v12 = (__int64)CurrentPrcb;
    Number = CurrentPrcb->Number;
    v9 = (_WORD)v5 != (unsigned __int16)Number;
    v60 = (_WORD)v5 != (unsigned __int16)Number;
  }
  else
  {
    Number = v5 - 2048;
    v12 = KiProcessorBlock[(unsigned int)(v5 - 2048)];
    if ( !v12 )
      KeBugCheckEx(0xC7u, 3uLL, BugCheckParameter2, v5, (unsigned int)KeNumberProcessors_0);
  }
  if ( (*(_QWORD *)(v12 + 200) & *(_QWORD *)(BugCheckParameter2 + 16)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v12 + 209));
  if ( *(_BYTE *)BugCheckParameter2 == 26 && *(_BYTE *)(v12 + 14520) )
    v13 = v12 + 14448;
  else
    v13 = v12 + 14400;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
  {
    KiAcquireSpinLockInstrumented(v13 + 16);
LABEL_16:
    v9 = v60;
    goto LABEL_17;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v13 + 16);
    goto LABEL_16;
  }
LABEL_17:
  v14 = Number;
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( Number != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    v50 = *(_DWORD *)(v13 + 24);
    *(_DWORD *)(v13 + 24) = v50 + 1;
    ++*(_DWORD *)(v13 + 28);
    *(_QWORD *)(BugCheckParameter2 + 40) = v62;
    *(_QWORD *)(BugCheckParameter2 + 48) = a3;
    if ( v48 )
    {
      v50 = *(_DWORD *)(v13 + 24);
      v51 = *(_DWORD *)(v13 + 28);
    }
    v17 = (_QWORD *)(BugCheckParameter2 + 8);
    v6 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v43 = *(_QWORD *)v13;
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v17;
      *v17 = v43;
      *(_QWORD *)v13 = v17;
    }
    else
    {
      *v17 = 0LL;
      **(_QWORD **)(v13 + 8) = v17;
      *(_QWORD *)(v13 + 8) = v17;
    }
    if ( v9 )
      *(_WORD *)(BugCheckParameter2 + 2) = Number;
    v18 = *(_QWORD *)(v12 + 36600);
    if ( v18 && v13 == v12 + 14400 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 28));
    }
    else if ( v13 != v12 + 14400 )
    {
      goto LABEL_20;
    }
    v19 = *(_QWORD *)(v12 + 14352);
    v20 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v19 )
    {
      v61 = *(_DWORD *)(v19 + 4) >> 5;
      v21 = -1LL << (*(_DWORD *)(v19 + 4) & 0x1F);
      v22 = v20 & v21;
      v58 = (v20 & (unsigned __int64)v21) >> 56;
      v57 = (v20 & (unsigned __int64)v21) >> 48;
      v56 = (v20 & (unsigned __int64)v21) >> 40;
      v55 = (v20 & (unsigned __int64)v21) >> 32;
      v54 = (v20 & (unsigned __int64)v21) >> 24;
      v23 = (v20 & (unsigned __int64)v21) >> 8;
      v24 = (v20 & (unsigned __int64)v21) >> 16;
      if ( v61 )
      {
        v25 = (_QWORD *)(*(_QWORD *)(v19 + 8)
                       + 8LL
                       * ((v61 - 1) & (442596621 * (unsigned __int8)v22
                                     - 877075889
                                     + (unsigned int)v58
                                     + 37
                                     * ((unsigned __int8)v57
                                      + 37
                                      * ((unsigned __int8)v56
                                       + 37
                                       * ((unsigned __int8)v55
                                        + 37
                                        * ((unsigned __int8)v54 + 37
                                                                * ((unsigned __int8)v24 + 37 * (unsigned __int8)v23))))))));
        while ( 1 )
        {
          v26 = (_QWORD *)*v25;
          v25 = v26;
          if ( ((unsigned __int8)v26 & 1) != 0 )
            break;
          if ( v22 == (v21 & v26[1]) )
          {
            if ( v26 )
            {
              v27 = v26[2];
              v52 = v27;
              if ( v27 > (unsigned int)KiLongDpcRuntimeThresholdCycles )
              {
                *(_DWORD *)(v13 + 40) = 1;
                v52 = v27;
              }
            }
            break;
          }
        }
      }
    }
  }
LABEL_20:
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 16), 0LL);
  }
  else
  {
    KiReleaseSpinLockInstrumented(v13 + 16, retaddr);
    v14 = Number;
  }
  if ( v6 )
  {
    if ( v48 )
      EtwTraceDpcEnqueueEvent(
        -203591049
      * (KiWaitNever ^ __ROR8__(
                         *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64((ULONG_PTR)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ BugCheckParameter2),
                         KiWaitNever)),
        *(_QWORD *)(BugCheckParameter2 + 24),
        v50,
        v51,
        v14,
        *(_BYTE *)(BugCheckParameter2 + 1),
        v52);
    if ( (WORD2(xmmword_140FC0C10) & 0x200) != 0
      && (struct _KPRCB *)v12 != CurrentPrcb
      && BugCheckParameter2 != v12 + 33632 )
    {
      LOBYTE(v28) = (unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)KiSystemCpuPartition, CurrentPrcb, v14) == 0;
      v30 = KiCheckPrcbAffinityEx(v29, v12, v28);
      if ( v31 != (v30 == 0) )
        EtwTraceCpuPartitionDpcSchedulingViolation(*(_QWORD *)(BugCheckParameter2 + 24), *(unsigned int *)(v12 + 36));
    }
    if ( v13 == v12 + 14448 )
    {
      if ( (KiSetDpcRequestFlag(v12 + 14526, 2LL) & 0xAF) != 0 )
        goto LABEL_25;
      v33 = 4;
LABEL_58:
      v34 = 175;
      if ( (struct _KPRCB *)v12 == CurrentPrcb )
      {
        v34 = 169;
        v33 |= 0x20u;
      }
      v35 = 0LL;
      _m_prefetchw((const void *)(v12 + 14524));
      v36 = *(_WORD *)(v12 + 14524);
      v37 = v36;
      LOWORD(v37) = v33 | v36;
      if ( v36 == _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 14524), v33 | v36, v36) )
      {
LABEL_67:
        if ( (v36 & (unsigned __int16)v34) == 0 )
        {
          if ( (struct _KPRCB *)v12 == CurrentPrcb )
          {
            if ( CurrentPrcb->NestingLevel )
            {
              CurrentPrcb->InterruptRequest = 1;
            }
            else
            {
              *(_OWORD *)&v53[4] = 0LL;
              if ( (KiTrapFeatures & 0x10) != 0 )
              {
                v44 = HalpDisableInterrupts(v35, v37, KeGetCurrentPrcb());
                v46 = *(_DWORD *)(v45 + 168);
                v47 = v44;
                *(_DWORD *)(v45 + 168) = v46 | 4;
                if ( !v46 )
                  __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
                if ( v47 )
                  _enable();
              }
              *(_DWORD *)v53 = 5;
              HalpInterruptSendIpi((unsigned int *)v53, 0x2Fu);
            }
          }
          else if ( *(_QWORD *)(v12 + 8) != *(_QWORD *)(v12 + 24) || *(_BYTE *)(v12 + 7) )
          {
            KiHvEnlightenedGuestPriorityKick(CurrentPrcb, v12, (unsigned int)KiVpThreadSystemWorkPriority);
            v42 = KeGetCurrentPrcb();
            *(_QWORD *)v53 = 6LL;
            ++v42->SynchCounters.IpiSendSoftwareInterruptCount;
            *(_QWORD *)&v53[12] = 0LL;
            *(_DWORD *)&v53[8] = Number;
            HalpInterruptSendIpi((unsigned int *)v53, 0x2Fu);
          }
        }
        goto LABEL_25;
      }
      while ( 1 )
      {
        v38 = v35;
        if ( (_DWORD)v35 )
          break;
        if ( (_DWORD)KeNumberProcessors_0 != 1 )
        {
          v38 = 64;
LABEL_64:
          v35 = v38;
          v39 = __rdtsc();
          v40 = 10 * (v38 + ((v38 - 1) & (unsigned int)v39)) / MEMORY[0xFFFFF780000002D6];
          for ( i = 0; i < v40; ++i )
            _mm_pause();
        }
        _m_prefetchw((const void *)(v12 + 14524));
        v36 = *(_WORD *)(v12 + 14524);
        v37 = v36;
        LOWORD(v37) = v33 | v36;
        if ( v36 == _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 14524), v33 | v36, v36) )
          goto LABEL_67;
      }
      if ( (unsigned int)v35 < 0x1FFF )
        v38 = 2 * v35;
      goto LABEL_64;
    }
    if ( *(_DWORD *)(v13 + 24) < *(_DWORD *)(v12 + 14504) )
    {
      v32 = *(_BYTE *)(BugCheckParameter2 + 1);
      if ( CurrentPrcb == (struct _KPRCB *)v12 )
      {
        if ( v32 || *(_DWORD *)(v12 + 14508) < *(_DWORD *)(v12 + 14512) )
          goto LABEL_57;
      }
      else if ( v32 == 3 || v32 == 2 )
      {
        goto LABEL_57;
      }
      if ( (KiSetDpcRequestFlag(v12 + 14524, 16LL) & 0xAF) != 0
        || (*(_QWORD *)(*(_QWORD *)(v12 + 192) + 64LL) & *(_QWORD *)(v12 + 200)) == 0LL )
      {
        goto LABEL_25;
      }
    }
LABEL_57:
    v33 = 2;
    goto LABEL_58;
  }
LABEL_25:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v6;
}
