/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140246720
 * Callers:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14021F300 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x14022ACC4 (KiSoftParkElectionUnparkProcessor.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x140245780 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     PpmParkSteerInterrupts @ 0x1402541D0 (PpmParkSteerInterrupts.c)
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14025B888 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025C720 (PpmParkCalculateCoreParkingMask.c)
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028FA08 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KeDisableTimer2 @ 0x1403AA104 (KeDisableTimer2.c)
 *     PpmIdleSelectStates @ 0x1403EA21C (PpmIdleSelectStates.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1403EACD0 (PpmWakeClockOwnerIfNeeded.c)
 *     PpmUnlockProcessors @ 0x1403EC22C (PpmUnlockProcessors.c)
 *     KiComputeHeteroConfig @ 0x1403EE2D8 (KiComputeHeteroConfig.c)
 *     KiCheckKeepAlive @ 0x1403EF0E4 (KiCheckKeepAlive.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x14042BAD8 (PpmHeteroRestrictToFavoredClass.c)
 *     KiStopProfileTarget @ 0x14042CA60 (KiStopProfileTarget.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14045E650 (PpmParkFindSpecificTopologyMask.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14047C978 (PoGetPerfStateAndParkingInfo.c)
 *     PpmParkFindOverUtilizedProcessors @ 0x1404A37B0 (PpmParkFindOverUtilizedProcessors.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404C4E10 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404EA3F0 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PoExecuteIdleCheck @ 0x1404F04E4 (PoExecuteIdleCheck.c)
 *     KiSendThawExecution @ 0x1405023B0 (KiSendThawExecution.c)
 *     KeFlushQueuedDpcs @ 0x14051BE50 (KeFlushQueuedDpcs.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140531650 (KeGetAffinitizedInterruptsInfo.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1405902E8 (HalpInterruptInitializeLocalUnit.c)
 *     EmonReleaseProfileResourcesInternal @ 0x140595FF4 (EmonReleaseProfileResourcesInternal.c)
 *     KeUpdateProcessorRestrictions @ 0x1405E9610 (KeUpdateProcessorRestrictions.c)
 *     KiStartPrcbThread @ 0x1405EC620 (KiStartPrcbThread.c)
 *     KiSrcuReadUnlockRemote @ 0x1405F5A1C (KiSrcuReadUnlockRemote.c)
 *     KiIpiTargetCall @ 0x1405FB790 (KiIpiTargetCall.c)
 *     PpmInstallNewIdleStates @ 0x140602D60 (PpmInstallNewIdleStates.c)
 *     PpmRemoveIdleStates @ 0x1406032D0 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140603458 (PpmTestAndLockProcessor.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140603860 (PpmUpdateProcessorIdleVeto.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x14060B540 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14060F5A8 (PpmParkDetectTopologyLevelInfo.c)
 *     PpmParkInitParkNode @ 0x14060F9F4 (PpmParkInitParkNode.c)
 *     ExpLookasideMgrHotAddProcessor @ 0x1406CD8AC (ExpLookasideMgrHotAddProcessor.c)
 *     HalAllocateHardwareCounters @ 0x140780E50 (HalAllocateHardwareCounters.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1407B92B0 (KiPrepareUpdateCoresHeteroMask.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     ?ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z @ 0x140846BD0 (-ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     DefaultInitializeProfiling @ 0x140BEAD10 (DefaultInitializeProfiling.c)
 *     EmonInitializeProfiling @ 0x140BED3D0 (EmonInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140BEF590 (Amd64InitializeProfiling.c)
 *     KiUpdateProcessorCount @ 0x140BF3458 (KiUpdateProcessorCount.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140BF5030 (KiInitializeDynamicProcessorDpc.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140BF54BC (KiAddCpuToSystemCpuPartition.c)
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 *     KiInitializeTopologyStructures @ 0x140BF6BB4 (KiInitializeTopologyStructures.c)
 *     KiInitializeIdleProcess @ 0x140CC81A4 (KiInitializeIdleProcess.c)
 *     KiIntSteerInit @ 0x140CCBB80 (KiIntSteerInit.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140CD7EF8 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v3; // r8d
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned __int16 *v6; // rdx

  v3 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * a2) & 0x3F;
  result = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * a2) >> 6;
  if ( *a1 > (unsigned int)result )
    goto LABEL_2;
  if ( a1[1] > (unsigned int)result )
  {
    *a1 = result + 1;
LABEL_2:
    v5 = *(_QWORD *)&a1[4 * result + 4];
    v6 = &a1[4 * result];
    result = v3;
    _bittestandset64(&v5, v3);
    *((_QWORD *)v6 + 1) = v5;
  }
  return result;
}
