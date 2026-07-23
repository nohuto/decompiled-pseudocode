/*
 * XREFs of KeQueryPerformanceCounter @ 0x14021DD80
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 *     PopGetIdleTimesCallback @ 0x14021A720 (PopGetIdleTimesCallback.c)
 *     PpmQueryTime @ 0x14021C9E8 (PpmQueryTime.c)
 *     KeQuerySystemTimePrecise @ 0x14021CA00 (KeQuerySystemTimePrecise.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14021CAF0 (KeUpdateTotalCyclesCurrentThread.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021D850 (EtwpGetLoggerTimeStamp.c)
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     KiEndInterruptCycleAccumulation @ 0x14021E2A0 (KiEndInterruptCycleAccumulation.c)
 *     CcCopyReadEx @ 0x14021E590 (CcCopyReadEx.c)
 *     KiLogClockIncrementUpdate @ 0x14021EFB8 (KiLogClockIncrementUpdate.c)
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 *     KiSetClockTickRate @ 0x14021F6C0 (KiSetClockTickRate.c)
 *     KiUpdateTimeAssist @ 0x14021FA58 (KiUpdateTimeAssist.c)
 *     KiStartInterruptCycleAccumulation @ 0x140229AE0 (KiStartInterruptCycleAccumulation.c)
 *     KiVpBackingThreadYieldExecution @ 0x140239F24 (KiVpBackingThreadYieldExecution.c)
 *     MiFlushCacheForAttributeChange @ 0x140251450 (MiFlushCacheForAttributeChange.c)
 *     PpmPerfApplyProcessorState @ 0x1402545E8 (PpmPerfApplyProcessorState.c)
 *     PpmSnapPerformanceAccumulation @ 0x14025568C (PpmSnapPerformanceAccumulation.c)
 *     CcCopyWriteEx @ 0x14026C4B0 (CcCopyWriteEx.c)
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     MiScheduleZeroPageThreads @ 0x1402A7444 (MiScheduleZeroPageThreads.c)
 *     CcFetchDataForRead @ 0x1402C8550 (CcFetchDataForRead.c)
 *     MiAgeWorkingSet @ 0x1402DF150 (MiAgeWorkingSet.c)
 *     PpmResetIdlePolicy @ 0x1402F31E0 (PpmResetIdlePolicy.c)
 *     PpmPerfSetProcessorIdle @ 0x1402F7A14 (PpmPerfSetProcessorIdle.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1402F9AE4 (PpmBeginActiveTimeAccumulation.c)
 *     PoSetProcessorQos @ 0x140331A90 (PoSetProcessorQos.c)
 *     KeCheckAndApplyBamQos @ 0x140332380 (KeCheckAndApplyBamQos.c)
 *     KiCheckForPendingQosUpdate @ 0x140332CE0 (KiCheckForPendingQosUpdate.c)
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 *     EtwpGetDurationSince @ 0x14034B238 (EtwpGetDurationSince.c)
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 *     CcWriteBehindInternal @ 0x140386430 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1403879F4 (CcWriteBehindAsync.c)
 *     CcAsyncCopyRead @ 0x140389580 (CcAsyncCopyRead.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcCompleteAsyncRead @ 0x1403A05A8 (CcCompleteAsyncRead.c)
 *     KiTimerExpiration @ 0x1403B5048 (KiTimerExpiration.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403BE2C8 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1403C0130 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403C02C4 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     EtwpFileModeCompress @ 0x1403F2148 (EtwpFileModeCompress.c)
 *     PpmParkSnapNodeStatistics @ 0x1404177E4 (PpmParkSnapNodeStatistics.c)
 *     PpmIdleSnapConcurrency @ 0x140418B30 (PpmIdleSnapConcurrency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1404210CC (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140421EF0 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140424B5C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopWriteBsdPoInfo @ 0x140425088 (PopWriteBsdPoInfo.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404334F0 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     KeInsertSchedulingGroup @ 0x14043D6E0 (KeInsertSchedulingGroup.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E3E4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     RtlGetMultiTimePrecise @ 0x1404401A0 (RtlGetMultiTimePrecise.c)
 *     HalpSetVirtualRtc @ 0x140449C88 (HalpSetVirtualRtc.c)
 *     HalpScanForProfilingCorruption @ 0x140461914 (HalpScanForProfilingCorruption.c)
 *     KiUpdateSystemTime @ 0x1404641A4 (KiUpdateSystemTime.c)
 *     KiIpiGenericCallTarget @ 0x14047B5E0 (KiIpiGenericCallTarget.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14047F5D0 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PpmPerfApplyDomainState @ 0x140483F90 (PpmPerfApplyDomainState.c)
 *     KeQuerySchedulingGroupHistory @ 0x14049AE7C (KeQuerySchedulingGroupHistory.c)
 *     MiBackgroundZeroComplete @ 0x14049EACC (MiBackgroundZeroComplete.c)
 *     PpmIdleRemoveConcurrency @ 0x1404A2C80 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleInstallConcurrency @ 0x1404A2D10 (PpmIdleInstallConcurrency.c)
 *     MiIssueSegmentDereferenceWork @ 0x1404A9E70 (MiIssueSegmentDereferenceWork.c)
 *     MiSaveUnusedSegmentCalibration @ 0x1404ACE64 (MiSaveUnusedSegmentCalibration.c)
 *     EmonOverflowHandlerInternalV2 @ 0x1404B093C (EmonOverflowHandlerInternalV2.c)
 *     EmonOverflowHandlerInternalV1 @ 0x1404B0DEC (EmonOverflowHandlerInternalV1.c)
 *     PpmResetPerformanceAccumulation @ 0x1404CB92C (PpmResetPerformanceAccumulation.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1404DEC68 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x1404E3140 (HalpTimerDpcRoutine.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404E7D10 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     KeSwitchFrozenProcessor @ 0x1404EB1FC (KeSwitchFrozenProcessor.c)
 *     HalpCollectProfileCorruptionStatus @ 0x1404ED9E8 (HalpCollectProfileCorruptionStatus.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F1AFC (BgpFwQueryPerformanceCounter.c)
 *     KeThawExecution @ 0x1404FBB50 (KeThawExecution.c)
 *     KiEndDebugAccumulation @ 0x1404FBE70 (KiEndDebugAccumulation.c)
 *     KeFreezeExecution @ 0x140502A50 (KeFreezeExecution.c)
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x14050DE04 (HalpCmciLoadThresholdConfiguration.c)
 *     KeRebaselineInterruptTime @ 0x14050E8D8 (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14050E908 (KeRebaselineSystemTime.c)
 *     MiPerformTimedMemoryZeroing @ 0x1405213F4 (MiPerformTimedMemoryZeroing.c)
 *     HalpCmciHandler @ 0x140522EB0 (HalpCmciHandler.c)
 *     KiCheckStall @ 0x14052CE60 (KiCheckStall.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x14057943C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x14057A288 (HalpTimerSchedulePeriodicQueries.c)
 *     HalWheaUpdateCmciPolicy @ 0x14057CD30 (HalWheaUpdateCmciPolicy.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140584520 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140585238 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTscFallback @ 0x140586130 (HalpTscFallback.c)
 *     HalpQueryVirtualRtc @ 0x140587850 (HalpQueryVirtualRtc.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140588CB0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonAllocateCounterInternal @ 0x14059751C (EmonAllocateCounterInternal.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140599440 (HalpTimerAlwaysOnClockInterrupt.c)
 *     Amd64AllocateCounter @ 0x1405A5A1C (Amd64AllocateCounter.c)
 *     Amd64OverflowHandlerInternal @ 0x1405A6D40 (Amd64OverflowHandlerInternal.c)
 *     XmRdtscOp @ 0x1405B09D0 (XmRdtscOp.c)
 *     KiRebaselineProcessorStartCycles @ 0x1405E7BE4 (KiRebaselineProcessorStartCycles.c)
 *     KiSetupTimeIncrement @ 0x1405E7D38 (KiSetupTimeIncrement.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1405ED2C0 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     KiFreezeTargetExecution @ 0x1405F8810 (KiFreezeTargetExecution.c)
 *     PpmIdleTransitionStall @ 0x1406051FC (PpmIdleTransitionStall.c)
 *     PpmInstallFeedbackCounters @ 0x140605540 (PpmInstallFeedbackCounters.c)
 *     PpmTraceExitLatency @ 0x1406060BC (PpmTraceExitLatency.c)
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 *     CarInitLogging @ 0x14064CD54 (CarInitLogging.c)
 *     EtwpCompressPendingBuffers @ 0x1406CBD3C (EtwpCompressPendingBuffers.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140714FCC (MiComputeCacheAttributeSpeeds.c)
 *     MiZeroPageCalibrateDpc @ 0x140716060 (MiZeroPageCalibrateDpc.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140716288 (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14071CBD8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14071CDA4 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071D0FC (BgpFwDisplayBugCheckScreenModernized.c)
 *     IpmiLibpGetTimeout @ 0x14072253C (IpmiLibpGetTimeout.c)
 *     IpmiLibpTimeAfter @ 0x140722C5C (IpmiLibpTimeAfter.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077E784 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     Phase1Initialization @ 0x1407829A0 (Phase1Initialization.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1407841F0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x14078442C (HalpPmuArbiterUpdateActiveActorTime.c)
 *     HalpQueryPostSleepStats @ 0x140787F1C (HalpQueryPostSleepStats.c)
 *     FsRtlpOplockPerfBucketize @ 0x140791C28 (FsRtlpOplockPerfBucketize.c)
 *     FsRtlpOplockPerfInitializeLatencyInfo @ 0x140791D5C (FsRtlpOplockPerfInitializeLatencyInfo.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140814CB0 (RtlpCapChkTelemetryRunOnce.c)
 *     EtwpInitializeSiloState @ 0x14082C390 (EtwpInitializeSiloState.c)
 *     CmpRecordShutdownStopTime @ 0x14085A938 (CmpRecordShutdownStopTime.c)
 *     PspNotifyThreadCreation @ 0x1409E7408 (PspNotifyThreadCreation.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopResumeApps @ 0x1409F557C (PopResumeApps.c)
 *     PopResumeServices @ 0x1409F5698 (PopResumeServices.c)
 *     EtwpAddLogHeader @ 0x140A11F48 (EtwpAddLogHeader.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     ExpAllocateUuids @ 0x140A7FAD0 (ExpAllocateUuids.c)
 *     NtQueryPerformanceCounter @ 0x140A931B0 (NtQueryPerformanceCounter.c)
 *     RtlCapabilityCheck @ 0x140A96450 (RtlCapabilityCheck.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x140B12E48 (HalpNotifyActorIfPmuAvailable.c)
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 *     HalpInterruptReinitialize @ 0x140BF0368 (HalpInterruptReinitialize.c)
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 *     HalpDpReplaceControl @ 0x140BF4360 (HalpDpReplaceControl.c)
 *     PnprGetMillisecondCounter @ 0x140BF76E4 (PnprGetMillisecondCounter.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 *     PopDecompressHiberBlocks @ 0x140C002A4 (PopDecompressHiberBlocks.c)
 *     PopWriteImageHeader @ 0x140C02EA4 (PopWriteImageHeader.c)
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140C09260 (PopSstDiagInitializeResumeTimer.c)
 *     PopTransitionToSleep @ 0x140C0A210 (PopTransitionToSleep.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     PopHiberCheckForDebugBreak @ 0x140C0AC74 (PopHiberCheckForDebugBreak.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 *     KiCalibrateTimeAdjustment @ 0x140C0DAB0 (KiCalibrateTimeAdjustment.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140C0EEA0 (PopSstDiagQueryResumeTimestamp.c)
 *     HalpCmciInit @ 0x140C0F0DC (HalpCmciInit.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140C1081C (PopDiagComputeEarlyHiberStats.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x140C2FA48 (VfFillAllocatedMemory.c)
 *     MmVerifierTrimMemory @ 0x140C497C8 (MmVerifierTrimMemory.c)
 *     CcInitializeTelemetry @ 0x140C85A64 (CcInitializeTelemetry.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     KiComputeDispatchInterruptCost @ 0x140CCF150 (KiComputeDispatchInterruptCost.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     ViInitSystemPhase0 @ 0x140CE513C (ViInitSystemPhase0.c)
 *     EtwpFixBootSystemTime @ 0x140CE6BB0 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140CE72F0 (EtwpInitializeBootTimeStamps.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF9A64 (MiInitializePhysicalMemoryBlocks.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140CFAF3C (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     MxAddSmallFreeDescriptorsToFreeList @ 0x140CFB240 (MxAddSmallFreeDescriptorsToFreeList.c)
 *     MxConstructLoaderMemoryTree @ 0x140CFB74C (MxConstructLoaderMemoryTree.c)
 *     MiInitializeCacheFlushing @ 0x140D0572C (MiInitializeCacheFlushing.c)
 *     MiReloadBootLoadedDrivers @ 0x140D07090 (MiReloadBootLoadedDrivers.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  ULONG_PTR v1; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r15
  signed __int64 v8; // rdx
  LARGE_INTEGER result; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int32 v12; // edx
  unsigned __int32 v13; // edx
  __int64 v14; // rdi
  unsigned __int64 v15; // r9
  signed __int64 v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  LONGLONG v20; // r8
  _QWORD *v21; // r8
  __int64 v22; // r10
  unsigned __int64 v23; // r10
  _QWORD *v24; // r8
  __int64 CounterSafe; // rax
  __int64 v26; // r15
  signed __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 v29; // r9
  signed __int64 v30; // rax
  int v31; // r8d
  unsigned __int64 v32; // rcx
  __int64 v33; // r10
  unsigned __int64 v34; // r10
  signed __int32 v35[8]; // [rsp+0h] [rbp-48h] BYREF

  v1 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v3 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      while ( 1 )
      {
        v10 = *(unsigned int *)(v1 + 188);
        if ( (unsigned int)v10 < HalpTimerQueryCounterHandlerCount )
          break;
        v13 = 0;
        if ( HalpTimerQueryCounterHandlerCount )
        {
          v24 = &unk_140FBB7E8;
          do
          {
            if ( v1 == *v24 )
              break;
            ++v13;
            v24 += 2;
          }
          while ( v13 < HalpTimerQueryCounterHandlerCount );
        }
        if ( v13 >= HalpTimerQueryCounterHandlerCount
          || (_DWORD)v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 188), v13, v10) )
        {
          KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v1, *(int *)(v1 + 228));
        }
      }
      if ( (*(_DWORD *)(v1 + 224) & 0x10000) != 0 )
        v11 = *(_QWORD *)(v1 + 72) + *(_DWORD *)(v1 + 80) * KeGetPcr()->Prcb.Number;
      else
        v11 = *(_QWORD *)(v1 + 72);
      result.QuadPart = MEMORY[0xFFFFF780000003B8]
                      + (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v10])(v11)
                        * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
    }
    else
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
        v26 = *(_QWORD *)(v1 + 208);
        v27 = CounterSafe;
      }
      else
      {
        do
        {
          v26 = *(_QWORD *)(v1 + 208);
          do
          {
            v28 = *(_QWORD *)(v1 + 200);
            v29 = HalpTimerQueryCounterSafe(v1);
            _InterlockedOr(v35, 0);
            v30 = *(_QWORD *)(v1 + 200);
          }
          while ( v28 != v30 );
        }
        while ( v26 != *(_QWORD *)(v1 + 208) );
        v31 = *(_DWORD *)(v1 + 220);
        v32 = v28 ^ v29;
        if ( _bittest64((const __int64 *)&v32, (unsigned __int8)(v31 - 1)) )
        {
          v33 = -1LL;
          if ( v31 != 64 )
            v33 = (1LL << v31) - 1;
          v34 = v28 & v33;
          v27 = (v29 | v28 ^ v34) + (1LL << v31);
          if ( v29 >= v34 )
            v27 = v29 | v28 ^ v34;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 200), v27, v30);
        }
        else if ( v31 == 64 )
        {
          v27 = v29;
        }
        else
        {
          v27 = v29 | v28 & ~((1LL << v31) - 1);
        }
      }
      result.QuadPart = HalpTimerScaleCounter(v26 + v27, *(_QWORD *)(v1 + 192), 10000000LL);
    }
  }
  else
  {
    v3 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      while ( 1 )
      {
        v4 = *(unsigned int *)(v1 + 188);
        if ( (unsigned int)v4 < HalpTimerQueryCounterHandlerCount )
          break;
        v12 = 0;
        if ( HalpTimerQueryCounterHandlerCount )
        {
          v21 = &unk_140FBB7E8;
          do
          {
            if ( v1 == *v21 )
              break;
            ++v12;
            v21 += 2;
          }
          while ( v12 < HalpTimerQueryCounterHandlerCount );
        }
        if ( v12 >= HalpTimerQueryCounterHandlerCount
          || (_DWORD)v4 == _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 188), v12, v4) )
        {
          KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v1, *(int *)(v1 + 228));
        }
      }
      if ( (*(_DWORD *)(v1 + 224) & 0x10000) != 0 )
        v5 = *(_QWORD *)(v1 + 72) + *(_DWORD *)(v1 + 80) * KeGetPcr()->Prcb.Number;
      else
        v5 = *(_QWORD *)(v1 + 72);
      v6 = ((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v4])(v5);
      v7 = *(_QWORD *)(v1 + 208);
      v8 = v6;
    }
    else
    {
      do
      {
        v7 = *(_QWORD *)(v1 + 208);
        do
        {
          v14 = *(_QWORD *)(v1 + 200);
          v15 = HalpTimerQueryCounterSafe(v1);
          _InterlockedOr(v35, 0);
          v16 = *(_QWORD *)(v1 + 200);
        }
        while ( v14 != v16 );
      }
      while ( v7 != *(_QWORD *)(v1 + 208) );
      v17 = *(_DWORD *)(v1 + 220);
      v18 = v14 ^ v15;
      if ( _bittest64((const __int64 *)&v18, (unsigned __int8)(v17 - 1)) )
      {
        v22 = -1LL;
        if ( v17 != 64 )
          v22 = (1LL << v17) - 1;
        v23 = v14 & v22;
        v8 = (v15 | v14 ^ v23) + (1LL << v17);
        if ( v15 >= v23 )
          v8 = v15 | v14 ^ v23;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 200), v8, v16);
      }
      else if ( v17 == 64 )
      {
        v8 = v15;
      }
      else
      {
        v8 = v15 | v14 & ~((1LL << v17) - 1);
      }
    }
    result.QuadPart = v7 + v8;
  }
  if ( v1 == HalpOriginalPerformanceCounter || !HalpOriginalPerformanceCounter )
  {
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v3;
  }
  else
  {
    v19 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v19 = 10000000LL;
    result.QuadPart = HalpTimerScaleCounter(result.QuadPart, v3, v19);
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v20;
  }
  return result;
}
