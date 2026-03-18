/*
 * XREFs of KeEnumerateNextProcessor @ 0x14043BC70
 * Callers:
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x140259220 (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmHeteroDistributeUtility @ 0x140259CF0 (PpmHeteroDistributeUtility.c)
 *     PpmParkDistributeUtility @ 0x14025AB54 (PpmParkDistributeUtility.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14025B888 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025C720 (PpmParkCalculateCoreParkingMask.c)
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PpmParkComputeUnparkMask @ 0x14025D7A0 (PpmParkComputeUnparkMask.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028FA08 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeRemoveQueueDpcEx @ 0x140423370 (KeRemoveQueueDpcEx.c)
 *     PpmHeteroDetectHgsCores @ 0x1404C87C4 (PpmHeteroDetectHgsCores.c)
 *     PpmEstimateIdleDuration @ 0x1404FC2AC (PpmEstimateIdleDuration.c)
 *     KiSendThawExecution @ 0x1405023B0 (KiSendThawExecution.c)
 *     KeFreezeExecution @ 0x140508FA0 (KeFreezeExecution.c)
 *     KeFlushQueuedDpcs @ 0x14051BE50 (KeFlushQueuedDpcs.c)
 *     HalSendNMI @ 0x14057EF50 (HalSendNMI.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x1405805F8 (HalpPmuReservedResourcesProcessorCallback.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x1405CC4C0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x1405CED50 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405D0778 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D4BE0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiAcquirePrcbLocksForGroupAffinity @ 0x1405E4EE0 (KiAcquirePrcbLocksForGroupAffinity.c)
 *     KiReleasePrcbLocksForGroupAffinity @ 0x1405E52C8 (KiReleasePrcbLocksForGroupAffinity.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405E8CE4 (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405EA2A8 (KiAssignCooperativeIdleSearchContexts.c)
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405EA5A0 (KiAssignSubNodeSharedReadyQueues.c)
 *     KeSelectNodeForAffinityAndPartition @ 0x1405EEAC4 (KeSelectNodeForAffinityAndPartition.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405F061C (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiCpuPartitionUpdatePrcbs @ 0x1405F43BC (KiCpuPartitionUpdatePrcbs.c)
 *     KiSrcuInitializeTopology @ 0x1405F5400 (KiSrcuInitializeTopology.c)
 *     KiSendFreeze @ 0x1405F6118 (KiSendFreeze.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405F9B28 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FCC08 (KiAltContextWorkQueueAddItem.c)
 *     PopDetermineBucketFrequencies @ 0x140600DEC (PopDetermineBucketFrequencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140601910 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleRecheckSecondaryProcessors @ 0x1406025BC (PpmIdleRecheckSecondaryProcessors.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1406029C4 (PpmIdleWaitForDependentTransitions.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060ACD4 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x14060B540 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x14060EE30 (PpmEventWpsParkingTableUpdateReason.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14060F5A8 (PpmParkDetectTopologyLevelInfo.c)
 *     PpmParkInitParkNode @ 0x14060F9F4 (PpmParkInitParkNode.c)
 *     ExpNodeUpdateProcessorSubQueueIndex @ 0x1406D0C64 (ExpNodeUpdateProcessorSubQueueIndex.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406D6F0C (WheaFlushETWEventsAddWorkRtn.c)
 *     MiDbgPteWriteInProgress @ 0x1406FEB70 (MiDbgPteWriteInProgress.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1407B92B0 (KiPrepareUpdateCoresHeteroMask.c)
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 *     ?ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z @ 0x140846BD0 (-ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z.c)
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
 *     PpmHvEnableQosEnlightenment @ 0x140A9CE18 (PpmHvEnableQosEnlightenment.c)
 *     PpmPerfGetBrandedFrequency @ 0x140B64A0C (PpmPerfGetBrandedFrequency.c)
 *     PnprQuiesceProcessors @ 0x140BF26B4 (PnprQuiesceProcessors.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 *     KiIntSteerInitCheckCycleCounters @ 0x140CCBCF4 (KiIntSteerInitCheckCycleCounters.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140CD7EF8 (PspCopyNodeRelativeMaskToAffinityEx.c)
 *     VslConnectSwInterrupt @ 0x140D06C2C (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r10d
  unsigned __int64 v4; // rcx
  int v5; // r9d
  unsigned __int64 v6; // r8
  __int64 result; // rax
  unsigned __int16 v8; // r9

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  while ( 1 )
  {
    v4 = (unsigned __int64)a2[1];
    v5 = *((unsigned __int16 *)a2 + 8);
    if ( v4 )
    {
      _BitScanForward64(&v6, v4);
      a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v6));
      result = 0LL;
      *a1 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
            + 64 * v5
            + (unsigned int)(unsigned __int8)v6);
      return result;
    }
    v8 = v5 + 1;
    *((_WORD *)a2 + 8) = v8;
    if ( v8 >= v3 )
      break;
    a2[1] = *(unsigned __int16 **)&(*a2)[4 * v8 + 4];
  }
  return 3221226021LL;
}
