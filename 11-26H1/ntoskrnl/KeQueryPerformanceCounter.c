/*
 * XREFs of KeQueryPerformanceCounter @ 0x14021C3F0
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140218410 (EtwpReserveTraceBuffer.c)
 *     PpmQueryTime @ 0x14021B058 (PpmQueryTime.c)
 *     KeQuerySystemTimePrecise @ 0x14021B070 (KeQuerySystemTimePrecise.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14021B160 (KeUpdateTotalCyclesCurrentThread.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021BA80 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021BEC0 (EtwpGetLoggerTimeStamp.c)
 *     RtlGetSystemTimePrecise @ 0x14021C830 (RtlGetSystemTimePrecise.c)
 *     KiEndInterruptCycleAccumulation @ 0x14021C910 (KiEndInterruptCycleAccumulation.c)
 *     CcCopyReadEx @ 0x14021CC00 (CcCopyReadEx.c)
 *     KiLogClockIncrementUpdate @ 0x14021D628 (KiLogClockIncrementUpdate.c)
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KiSetClockTickRate @ 0x14021DD30 (KiSetClockTickRate.c)
 *     KiUpdateTimeAssist @ 0x14021E0C8 (KiUpdateTimeAssist.c)
 *     KiStartInterruptCycleAccumulation @ 0x140228150 (KiStartInterruptCycleAccumulation.c)
 *     KiVpBackingThreadYieldExecution @ 0x1402385C4 (KiVpBackingThreadYieldExecution.c)
 *     MiFlushCacheForAttributeChange @ 0x14024FAF0 (MiFlushCacheForAttributeChange.c)
 *     PpmPerfApplyProcessorState @ 0x140252C88 (PpmPerfApplyProcessorState.c)
 *     PpmSnapPerformanceAccumulation @ 0x140253D2C (PpmSnapPerformanceAccumulation.c)
 *     CcCopyWriteEx @ 0x14026CF40 (CcCopyWriteEx.c)
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     MiScheduleZeroPageThreads @ 0x1402A8034 (MiScheduleZeroPageThreads.c)
 *     CcFetchDataForRead @ 0x1402E6510 (CcFetchDataForRead.c)
 *     MiAgeWorkingSet @ 0x1402FD0D0 (MiAgeWorkingSet.c)
 *     PoSetProcessorQos @ 0x14032FA60 (PoSetProcessorQos.c)
 *     KeCheckAndApplyBamQos @ 0x140330350 (KeCheckAndApplyBamQos.c)
 *     KiCheckForPendingQosUpdate @ 0x140330CB0 (KiCheckForPendingQosUpdate.c)
 *     MiAllocatePagesForMdl @ 0x14034898C (MiAllocatePagesForMdl.c)
 *     EtwpGetDurationSince @ 0x1403491B8 (EtwpGetDurationSince.c)
 *     MiAllocateContiguousMemory @ 0x14034A28C (MiAllocateContiguousMemory.c)
 *     CcWriteBehindInternal @ 0x140384680 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x140385C44 (CcWriteBehindAsync.c)
 *     CcAsyncCopyRead @ 0x1403877D0 (CcAsyncCopyRead.c)
 *     CcFlushCachePriv @ 0x140398300 (CcFlushCachePriv.c)
 *     CcFlushCachePreProcess @ 0x1403991C8 (CcFlushCachePreProcess.c)
 *     CcCompleteAsyncRead @ 0x14039E848 (CcCompleteAsyncRead.c)
 *     KiTimerExpiration @ 0x1403AB338 (KiTimerExpiration.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403B43BC (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1403B6230 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403B63C4 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PpmResetIdlePolicy @ 0x1403E6300 (PpmResetIdlePolicy.c)
 *     PpmPerfSetProcessorIdle @ 0x1403EAB34 (PpmPerfSetProcessorIdle.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1403ECAA4 (PpmBeginActiveTimeAccumulation.c)
 *     EtwpFileModeCompress @ 0x1404003A8 (EtwpFileModeCompress.c)
 *     PpmParkSnapNodeStatistics @ 0x14041FFA4 (PpmParkSnapNodeStatistics.c)
 *     PpmIdleSnapConcurrency @ 0x1404212F0 (PpmIdleSnapConcurrency.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404263E0 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     PopGetIdleTimesCallback @ 0x140428440 (PopGetIdleTimesCallback.c)
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14042C9FC (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x14042D820 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PopWriteBsdPoInfo @ 0x140435F08 (PopWriteBsdPoInfo.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140437AA0 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     KeInsertSchedulingGroup @ 0x140444BD0 (KeInsertSchedulingGroup.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x140445624 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1404458E0 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     RtlGetMultiTimePrecise @ 0x1404476B0 (RtlGetMultiTimePrecise.c)
 *     HalpSetVirtualRtc @ 0x140451B58 (HalpSetVirtualRtc.c)
 *     HalpScanForProfilingCorruption @ 0x1404682D4 (HalpScanForProfilingCorruption.c)
 *     KiUpdateSystemTime @ 0x14046AA24 (KiUpdateSystemTime.c)
 *     KiIpiGenericCallTarget @ 0x140481C70 (KiIpiGenericCallTarget.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140485C60 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PpmPerfApplyDomainState @ 0x14048A450 (PpmPerfApplyDomainState.c)
 *     KeQuerySchedulingGroupHistory @ 0x1404A134C (KeQuerySchedulingGroupHistory.c)
 *     MiBackgroundZeroComplete @ 0x1404A543C (MiBackgroundZeroComplete.c)
 *     PpmIdleRemoveConcurrency @ 0x1404A95F0 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleInstallConcurrency @ 0x1404A9680 (PpmIdleInstallConcurrency.c)
 *     MiIssueSegmentDereferenceWork @ 0x1404B07E0 (MiIssueSegmentDereferenceWork.c)
 *     MiSaveUnusedSegmentCalibration @ 0x1404B3898 (MiSaveUnusedSegmentCalibration.c)
 *     EmonOverflowHandlerInternalV2 @ 0x1404B710C (EmonOverflowHandlerInternalV2.c)
 *     EmonOverflowHandlerInternalV1 @ 0x1404B75BC (EmonOverflowHandlerInternalV1.c)
 *     PpmResetPerformanceAccumulation @ 0x1404D1D7C (PpmResetPerformanceAccumulation.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404E48C0 (IopLiveDumpGetMillisecondCounter.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1404E56C8 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x1404E9D90 (HalpTimerDpcRoutine.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404EE730 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     KeSwitchFrozenProcessor @ 0x1404F1C1C (KeSwitchFrozenProcessor.c)
 *     HalpCollectProfileCorruptionStatus @ 0x1404F4408 (HalpCollectProfileCorruptionStatus.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F84EC (BgpFwQueryPerformanceCounter.c)
 *     KeThawExecution @ 0x140502280 (KeThawExecution.c)
 *     KiEndDebugAccumulation @ 0x1405025A0 (KiEndDebugAccumulation.c)
 *     KeFreezeExecution @ 0x140508FA0 (KeFreezeExecution.c)
 *     IoCaptureLiveDump @ 0x14051255C (IoCaptureLiveDump.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x140514394 (HalpCmciLoadThresholdConfiguration.c)
 *     KeRebaselineInterruptTime @ 0x140514E68 (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x140514E98 (KeRebaselineSystemTime.c)
 *     MiPerformTimedMemoryZeroing @ 0x14051ED50 (MiPerformTimedMemoryZeroing.c)
 *     HalpCmciHandler @ 0x14052080C (HalpCmciHandler.c)
 *     KiCheckStall @ 0x14052A940 (KiCheckStall.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x140576F0C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitSystem @ 0x1405774F0 (HalpTimerInitSystem.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140577D58 (HalpTimerSchedulePeriodicQueries.c)
 *     HalWheaUpdateCmciPolicy @ 0x14057A800 (HalWheaUpdateCmciPolicy.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140582000 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140582D18 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTscFallback @ 0x140583C10 (HalpTscFallback.c)
 *     HalpQueryVirtualRtc @ 0x140585330 (HalpQueryVirtualRtc.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140586790 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonAllocateCounterInternal @ 0x140594D9C (EmonAllocateCounterInternal.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140596CC0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     Amd64AllocateCounter @ 0x1405A320C (Amd64AllocateCounter.c)
 *     Amd64OverflowHandlerInternal @ 0x1405A4530 (Amd64OverflowHandlerInternal.c)
 *     XmRdtscOp @ 0x1405AE1C0 (XmRdtscOp.c)
 *     KiRebaselineProcessorStartCycles @ 0x1405E5274 (KiRebaselineProcessorStartCycles.c)
 *     KiSetupTimeIncrement @ 0x1405E53C8 (KiSetupTimeIncrement.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1405EA950 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     KiFreezeTargetExecution @ 0x1405F5E50 (KiFreezeTargetExecution.c)
 *     PpmIdleTransitionStall @ 0x14060274C (PpmIdleTransitionStall.c)
 *     PpmInstallFeedbackCounters @ 0x140602A90 (PpmInstallFeedbackCounters.c)
 *     PpmTraceExitLatency @ 0x14060360C (PpmTraceExitLatency.c)
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 *     CarInitLogging @ 0x140649174 (CarInitLogging.c)
 *     EtwpCompressPendingBuffers @ 0x1406C7D5C (EtwpCompressPendingBuffers.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1407102D0 (MiComputeCacheAttributeSpeeds.c)
 *     MiZeroPageCalibrateDpc @ 0x140711360 (MiZeroPageCalibrateDpc.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140711588 (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140717EE8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1407180B4 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071840C (BgpFwDisplayBugCheckScreenModernized.c)
 *     IpmiLibpGetTimeout @ 0x14071D8AC (IpmiLibpGetTimeout.c)
 *     IpmiLibpTimeAfter @ 0x14071DFCC (IpmiLibpTimeAfter.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077BB44 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     Phase1Initialization @ 0x14077FEA0 (Phase1Initialization.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1407816F0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x14078192C (HalpPmuArbiterUpdateActiveActorTime.c)
 *     HalpQueryPostSleepStats @ 0x1407853EC (HalpQueryPostSleepStats.c)
 *     FsRtlpOplockPerfBucketize @ 0x14078F0F8 (FsRtlpOplockPerfBucketize.c)
 *     FsRtlpOplockPerfInitializeLatencyInfo @ 0x14078F22C (FsRtlpOplockPerfInitializeLatencyInfo.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14080F220 (RtlpCapChkTelemetryRunOnce.c)
 *     EtwpInitializeSiloState @ 0x140826150 (EtwpInitializeSiloState.c)
 *     CmpRecordShutdownStopTime @ 0x140854628 (CmpRecordShutdownStopTime.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PspNotifyThreadCreation @ 0x1409EAC38 (PspNotifyThreadCreation.c)
 *     EtwpAddLogHeader @ 0x140A12D58 (EtwpAddLogHeader.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopResumeApps @ 0x140A39974 (PopResumeApps.c)
 *     PopResumeServices @ 0x140A39A90 (PopResumeServices.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     ExpAllocateUuids @ 0x140A76DB0 (ExpAllocateUuids.c)
 *     NtQueryPerformanceCounter @ 0x140A8E4E0 (NtQueryPerformanceCounter.c)
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x140B110C8 (HalpNotifyActorIfPmuAvailable.c)
 *     MiNodeZeroConductor @ 0x140B27510 (MiNodeZeroConductor.c)
 *     HalpInterruptReinitialize @ 0x140BEA368 (HalpInterruptReinitialize.c)
 *     HalpAcpiPostSleep @ 0x140BECAA0 (HalpAcpiPostSleep.c)
 *     HalpPostSleepMP @ 0x140BECEF0 (HalpPostSleepMP.c)
 *     HalpDpReplaceControl @ 0x140BEE360 (HalpDpReplaceControl.c)
 *     PnprGetMillisecondCounter @ 0x140BF16E4 (PnprGetMillisecondCounter.c)
 *     KiCompleteKernelInit @ 0x140BF36A8 (KiCompleteKernelInit.c)
 *     PopDecompressHiberBlocks @ 0x140BFA2A4 (PopDecompressHiberBlocks.c)
 *     PopWriteImageHeader @ 0x140BFCEA4 (PopWriteImageHeader.c)
 *     PopHandleNextState @ 0x140C02C90 (PopHandleNextState.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140C03050 (PopSstDiagInitializeResumeTimer.c)
 *     PopTransitionToSleep @ 0x140C04000 (PopTransitionToSleep.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     PopHiberCheckForDebugBreak @ 0x140C04A64 (PopHiberCheckForDebugBreak.c)
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 *     KiCalibrateTimeAdjustment @ 0x140C078A0 (KiCalibrateTimeAdjustment.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140C08C90 (PopSstDiagQueryResumeTimestamp.c)
 *     HalpCmciInit @ 0x140C08ECC (HalpCmciInit.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140C0A60C (PopDiagComputeEarlyHiberStats.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x140C17038 (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x140C29A38 (VfFillAllocatedMemory.c)
 *     MmVerifierTrimMemory @ 0x140C437B8 (MmVerifierTrimMemory.c)
 *     CcInitializeTelemetry @ 0x140C7FA64 (CcInitializeTelemetry.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     KiComputeDispatchInterruptCost @ 0x140CC90C0 (KiComputeDispatchInterruptCost.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     ViInitSystemPhase0 @ 0x140CDEDA4 (ViInitSystemPhase0.c)
 *     EtwpFixBootSystemTime @ 0x140CE0810 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140CE0F50 (EtwpInitializeBootTimeStamps.c)
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF36E4 (MiInitializePhysicalMemoryBlocks.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140CF4BBC (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     MxAddSmallFreeDescriptorsToFreeList @ 0x140CF4EC0 (MxAddSmallFreeDescriptorsToFreeList.c)
 *     MxConstructLoaderMemoryTree @ 0x140CF53CC (MxConstructLoaderMemoryTree.c)
 *     MiInitializeCacheFlushing @ 0x140CFF38C (MiInitializeCacheFlushing.c)
 *     MiReloadBootLoadedDrivers @ 0x140D00CF0 (MiReloadBootLoadedDrivers.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402085F0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208D00 (HalpTimerScaleCounter.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
          v24 = &unk_140FBB448;
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
          v21 = &unk_140FBB448;
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
