/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140248080
 * Callers:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x140220C90 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x14022C654 (KiSoftParkElectionUnparkProcessor.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     PpmParkSteerInterrupts @ 0x140255B30 (PpmParkSteerInterrupts.c)
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14025DB70 (PpmParkFindSpecificTopologyMask.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028EF68 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmIdleSelectStates @ 0x1402F70FC (PpmIdleSelectStates.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1402F7BB0 (PpmWakeClockOwnerIfNeeded.c)
 *     PpmUnlockProcessors @ 0x1402F9270 (PpmUnlockProcessors.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KeDisableTimer2 @ 0x1403B3D14 (KeDisableTimer2.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x1404201A8 (PpmHeteroRestrictToFavoredClass.c)
 *     KiStopProfileTarget @ 0x140421130 (KiStopProfileTarget.c)
 *     KiComputeHeteroConfig @ 0x140452E08 (KiComputeHeteroConfig.c)
 *     KiCheckKeepAlive @ 0x140453C14 (KiCheckKeepAlive.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1404762E8 (PoGetPerfStateAndParkingInfo.c)
 *     PpmParkFindOverUtilizedProcessors @ 0x14049D2C0 (PpmParkFindOverUtilizedProcessors.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404BE7C0 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404E37A0 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PoExecuteIdleCheck @ 0x1404E9AC4 (PoExecuteIdleCheck.c)
 *     KiSendThawExecution @ 0x1404FBC80 (KiSendThawExecution.c)
 *     KeFlushQueuedDpcs @ 0x1405163E0 (KeFlushQueuedDpcs.c)
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140533B50 (KeGetAffinitizedInterruptsInfo.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140592A68 (HalpInterruptInitializeLocalUnit.c)
 *     EmonReleaseProfileResourcesInternal @ 0x140598774 (EmonReleaseProfileResourcesInternal.c)
 *     KeUpdateProcessorRestrictions @ 0x1405EBF80 (KeUpdateProcessorRestrictions.c)
 *     KiStartPrcbThread @ 0x1405EEF90 (KiStartPrcbThread.c)
 *     KiSrcuReadUnlockRemote @ 0x1405F83DC (KiSrcuReadUnlockRemote.c)
 *     KiIpiTargetCall @ 0x1405FE1E0 (KiIpiTargetCall.c)
 *     PpmInstallNewIdleStates @ 0x140605810 (PpmInstallNewIdleStates.c)
 *     PpmRemoveIdleStates @ 0x140605D80 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140605F08 (PpmTestAndLockProcessor.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140606310 (PpmUpdateProcessorIdleVeto.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x14060E258 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14061280C (PpmParkDetectTopologyLevelInfo.c)
 *     PpmParkInitParkNode @ 0x140612C58 (PpmParkInitParkNode.c)
 *     ExpLookasideMgrHotAddProcessor @ 0x1406D18DC (ExpLookasideMgrHotAddProcessor.c)
 *     HalAllocateHardwareCounters @ 0x140783950 (HalAllocateHardwareCounters.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1407BC310 (KiPrepareUpdateCoresHeteroMask.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     ?ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z @ 0x14084CE30 (-ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     DefaultInitializeProfiling @ 0x140BF0D10 (DefaultInitializeProfiling.c)
 *     EmonInitializeProfiling @ 0x140BF33D0 (EmonInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140BF5590 (Amd64InitializeProfiling.c)
 *     KiUpdateProcessorCount @ 0x140BF9458 (KiUpdateProcessorCount.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140BFB030 (KiInitializeDynamicProcessorDpc.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140BFB4BC (KiAddCpuToSystemCpuPartition.c)
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 *     KiInitializeTopologyStructures @ 0x140BFCBB4 (KiInitializeTopologyStructures.c)
 *     KiInitializeIdleProcess @ 0x140CCE294 (KiInitializeIdleProcess.c)
 *     KiIntSteerInit @ 0x140CD1CE0 (KiIntSteerInit.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140CDE278 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v3; // r8d
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned __int16 *v6; // rdx

  v3 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + a2) & 0x3F;
  result = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + a2) >> 6;
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
