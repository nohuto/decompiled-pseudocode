/*
 * XREFs of KiInsertQueueDpc @ 0x1402BD330
 * Callers:
 *     KeTerminateThread @ 0x140203388 (KeTerminateThread.c)
 *     EtwpPrepareDirtyBuffer @ 0x140219094 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x140219160 (EtwpSwitchBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1402198F0 (EtwpRequestFlushTimer.c)
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KeAccumulateTicks @ 0x14021F980 (KeAccumulateTicks.c)
 *     HalpMcaQueueDpc @ 0x140220048 (HalpMcaQueueDpc.c)
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x140224840 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiScheduleNextForegroundBoost @ 0x140239B30 (KiScheduleNextForegroundBoost.c)
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023BA30 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     PpmCheckQueuePhaseActions @ 0x140252698 (PpmCheckQueuePhaseActions.c)
 *     PpmCheckContinueExecution @ 0x1402533F8 (PpmCheckContinueExecution.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140261848 (EtwpCovSampCaptureApcRelease.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140264300 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpPrivate @ 0x14026C684 (IopAllocateIrpPrivate.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270AF0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     MiReleaseControlAreaWaiters @ 0x1402733E0 (MiReleaseControlAreaWaiters.c)
 *     KeWakeWaitChain @ 0x140273700 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273AF0 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273EB0 (ExpCommitWakeResourceShared.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027C200 (FsRtlReleaseHeaderMutex.c)
 *     KeInsertQueueDpc @ 0x1402BDB30 (KeInsertQueueDpc.c)
 *     KiScheduleSoftParkElectionIfNecessary @ 0x1402BDF30 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402BE8C0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAddThreadToPrcbQueue @ 0x1402BE9E0 (KiAddThreadToPrcbQueue.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1402BFCD0 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureQueueRebalance @ 0x1402C1874 (EtwpCovSampCaptureQueueRebalance.c)
 *     IoProcessPassiveInterrupts @ 0x1402C36B8 (IoProcessPassiveInterrupts.c)
 *     CmFcManagerRecordFeatureUsage @ 0x1402C56C8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1402C59E4 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     KiResumeThread @ 0x1402C60D8 (KiResumeThread.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     KeUpdatePendingQosRequest @ 0x140330628 (KeUpdatePendingQosRequest.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140333BD0 (KiTransitionSchedulingGroupGeneration.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1403344A0 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     ?KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z @ 0x140336890 (-KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z.c)
 *     KiResetForceIdle @ 0x140336934 (KiResetForceIdle.c)
 *     KiExpireTimer2 @ 0x140336F08 (KiExpireTimer2.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140356ED8 (CmFcManagerNotifyFeatureUsage.c)
 *     KiUpdateThreadPriority @ 0x14037EAA0 (KiUpdateThreadPriority.c)
 *     KiWakePriQueueWaiter @ 0x140380910 (KiWakePriQueueWaiter.c)
 *     KiTimerWaitTest @ 0x1403ACF4C (KiTimerWaitTest.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     KeGenericCallDpcEx @ 0x1403C2284 (KeGenericCallDpcEx.c)
 *     KiInitiateGenericCallDpc @ 0x1403C24E8 (KiInitiateGenericCallDpc.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     KeDeleteMutant @ 0x1403DC828 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     KeRundownQueueCommon @ 0x1403DD884 (KeRundownQueueCommon.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     WheapWorkQueueAddItem @ 0x1403DE370 (WheapWorkQueueAddItem.c)
 *     HvlSharedIsr @ 0x1403E61A0 (HvlSharedIsr.c)
 *     KeSetEventBoostPriorityEx @ 0x140421E18 (KeSetEventBoostPriorityEx.c)
 *     KeMaskInterrupt @ 0x140424930 (KeMaskInterrupt.c)
 *     PopQueueTargetDpc @ 0x14042883C (PopQueueTargetDpc.c)
 *     KeReleaseSemaphoreEx @ 0x1404396D0 (KeReleaseSemaphoreEx.c)
 *     KiInitializeUserApc @ 0x140446248 (KiInitializeUserApc.c)
 *     HalpCmciInitProcessor @ 0x140453268 (HalpCmciInitProcessor.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x140467070 (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140468120 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     PpmExecutePeriodicPerfCheck @ 0x14046A810 (PpmExecutePeriodicPerfCheck.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x1404773A8 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140488DF0 (EtwpCovSampCaptureQueueBuffer.c)
 *     KeDispatchSecondaryInterrupt @ 0x1404AF590 (KeDispatchSecondaryInterrupt.c)
 *     KiRundownMutants @ 0x1404B1F80 (KiRundownMutants.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404C4E10 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KePulseEvent @ 0x1404C7410 (KePulseEvent.c)
 *     KeSetProcess @ 0x1404D0E9C (KeSetProcess.c)
 *     KiRcuReportQuiescentState @ 0x1404D99B8 (KiRcuReportQuiescentState.c)
 *     HalpTimerDpcRoutine @ 0x1404E9D90 (HalpTimerDpcRoutine.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1404EBC70 (PpmHeteroDispatchHgsInterrupt.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404ED5A4 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     HalpDmaControllerInterruptRoutine @ 0x1404F2D20 (HalpDmaControllerInterruptRoutine.c)
 *     ObpDeferPushRefDerefInfo @ 0x1404F4970 (ObpDeferPushRefDerefInfo.c)
 *     KiRegisterBugcheckRecoveryCallback @ 0x1404F8014 (KiRegisterBugcheckRecoveryCallback.c)
 *     KiRollbackSlistPops @ 0x140501630 (KiRollbackSlistPops.c)
 *     HalpIommuTraceFault @ 0x140502F70 (HalpIommuTraceFault.c)
 *     KiRcuFlushCompleted @ 0x140503B7C (KiRcuFlushCompleted.c)
 *     EtwpQueueApcPoolDpc @ 0x1405097A4 (EtwpQueueApcPoolDpc.c)
 *     KiArmForceParkDutyCyclingForLocalReadyQueue @ 0x140516424 (KiArmForceParkDutyCyclingForLocalReadyQueue.c)
 *     HalpCmciHandler @ 0x14052080C (HalpCmciHandler.c)
 *     KiArmForceParkDutyCyclingForSharedReadyQueue @ 0x140529008 (KiArmForceParkDutyCyclingForSharedReadyQueue.c)
 *     KiSrcuFlushCompleted @ 0x14052EB44 (KiSrcuFlushCompleted.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x1405805F8 (HalpPmuReservedResourcesProcessorCallback.c)
 *     HalpDmaControllerCancelTransfer @ 0x14058C7F4 (HalpDmaControllerCancelTransfer.c)
 *     HalpInsertSecondarySignalList @ 0x14058F77C (HalpInsertSecondarySignalList.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140596CC0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpIommuReportIommuFault @ 0x1405A02C0 (HalpIommuReportIommuFault.c)
 *     IvtHandleInterrupt @ 0x1405A6B50 (IvtHandleInterrupt.c)
 *     HsaHandleInterrupt @ 0x1405A9EB0 (HsaHandleInterrupt.c)
 *     IopLiveDumpCorralProcessors @ 0x1405CED50 (IopLiveDumpCorralProcessors.c)
 *     KeRegisterObjectDpc @ 0x1405E55DC (KeRegisterObjectDpc.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405F5818 (KiSrcuNotifyWorkerSelectAndQueue.c)
 *     KiSrcuRequiresRebalance @ 0x1405F5D28 (KiSrcuRequiresRebalance.c)
 *     KiForegroundTimerCallback @ 0x1405F6830 (KiForegroundTimerCallback.c)
 *     KiStartForceParkSingleDutyCycleTimerCallback @ 0x1405F8B80 (KiStartForceParkSingleDutyCycleTimerCallback.c)
 *     KiStopForceParkSingleDutyCycleTimerCallback @ 0x1405F8C00 (KiStopForceParkSingleDutyCycleTimerCallback.c)
 *     ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405F8F20 (-KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405F9B28 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiScheduleBugcheckRecovery @ 0x1405FA570 (KiScheduleBugcheckRecovery.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FCC08 (KiAltContextWorkQueueAddItem.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FD95C (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x140610698 (PopIdleWakeAssignAccountingToSource.c)
 *     DifKeInsertQueueDpcWrapper @ 0x140661DE0 (DifKeInsertQueueDpcWrapper.c)
 *     EtwSendTraceBuffer @ 0x1406C6570 (EtwSendTraceBuffer.c)
 *     ExpTimeRefreshCallback @ 0x1406CB320 (ExpTimeRefreshCallback.c)
 *     ExQueueDebuggerWorker @ 0x1406D0A48 (ExQueueDebuggerWorker.c)
 *     ExpSvmFaultRoutine @ 0x1406D22C0 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x1406D6CC0 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x1406D6DA0 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406D6F0C (WheaFlushETWEventsAddWorkRtn.c)
 *     MmSetAccessLogging @ 0x140703220 (MmSetAccessLogging.c)
 *     KiComputeDispatchInterruptCost @ 0x140CC90C0 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiCheckPrcbAffinityEx @ 0x1402BDFC0 (KiCheckPrcbAffinityEx.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     KiSetDpcRequestFlag @ 0x14044F530 (KiSetDpcRequestFlag.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1404675F0 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceDpcEnqueueEvent @ 0x14052F7BC (EtwTraceDpcEnqueueEvent.c)
 *     EtwTraceCpuPartitionDpcSchedulingViolation @ 0x140530EFC (EtwTraceCpuPartitionDpcSchedulingViolation.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
                         *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64((ULONG_PTR)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ BugCheckParameter2),
                         KiWaitNever)),
        *(_QWORD *)(BugCheckParameter2 + 24),
        v50,
        v51,
        v14,
        *(_BYTE *)(BugCheckParameter2 + 1),
        v52);
    if ( (WORD2(xmmword_140FBFC10) & 0x200) != 0
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
