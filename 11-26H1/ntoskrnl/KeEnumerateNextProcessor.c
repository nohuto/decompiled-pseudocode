/*
 * XREFs of KeEnumerateNextProcessor @ 0x14042E520
 * Callers:
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x14025AA00 (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmHeteroDistributeUtility @ 0x14025B4D0 (PpmHeteroDistributeUtility.c)
 *     PpmParkDistributeUtility @ 0x14025C334 (PpmParkDistributeUtility.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028EF68 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 *     PpmEstimateIdleDuration @ 0x1404F57EC (PpmEstimateIdleDuration.c)
 *     KiSendThawExecution @ 0x1404FBC80 (KiSendThawExecution.c)
 *     KeFreezeExecution @ 0x140502A50 (KeFreezeExecution.c)
 *     KeFlushQueuedDpcs @ 0x1405163E0 (KeFlushQueuedDpcs.c)
 *     PpmHeteroDetectHgsCores @ 0x140516AD8 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     HalSendNMI @ 0x140581470 (HalSendNMI.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140582B18 (HalpPmuReservedResourcesProcessorCallback.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x1405CECD0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x1405D1560 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405D2F88 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiAcquirePrcbLocksForGroupAffinity @ 0x1405E7850 (KiAcquirePrcbLocksForGroupAffinity.c)
 *     KiReleasePrcbLocksForGroupAffinity @ 0x1405E7C38 (KiReleasePrcbLocksForGroupAffinity.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405EB654 (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405ECC18 (KiAssignCooperativeIdleSearchContexts.c)
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405ECF10 (KiAssignSubNodeSharedReadyQueues.c)
 *     KeSelectNodeForAffinityAndPartition @ 0x1405F1434 (KeSelectNodeForAffinityAndPartition.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405F2F8C (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiCpuPartitionUpdatePrcbs @ 0x1405F6D7C (KiCpuPartitionUpdatePrcbs.c)
 *     KiSrcuInitializeTopology @ 0x1405F7DC0 (KiSrcuInitializeTopology.c)
 *     KiSendFreeze @ 0x1405F8AD8 (KiSendFreeze.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405FC548 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FF658 (KiAltContextWorkQueueAddItem.c)
 *     PopDetermineBucketFrequencies @ 0x14060389C (PopDetermineBucketFrequencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1406043C0 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleRecheckSecondaryProcessors @ 0x14060506C (PpmIdleRecheckSecondaryProcessors.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140605474 (PpmIdleWaitForDependentTransitions.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060D93C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x14060E258 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmHeteroReadWpsConfigurationFromPlatform @ 0x14060E690 (PpmHeteroReadWpsConfigurationFromPlatform.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x140612074 (PpmEventWpsParkingTableUpdateReason.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14061280C (PpmParkDetectTopologyLevelInfo.c)
 *     PpmParkInitParkNode @ 0x140612C58 (PpmParkInitParkNode.c)
 *     ExpNodeUpdateProcessorSubQueueIndex @ 0x1406D4C94 (ExpNodeUpdateProcessorSubQueueIndex.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406DB0A4 (WheaFlushETWEventsAddWorkRtn.c)
 *     MiDbgPteWriteInProgress @ 0x140703840 (MiDbgPteWriteInProgress.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1407BC310 (KiPrepareUpdateCoresHeteroMask.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PpmHeteroCheckInitTableBitIntel @ 0x1407E8890 (PpmHeteroCheckInitTableBitIntel.c)
 *     ?ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z @ 0x14084CE30 (-ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AEBAB8 (PpmHvEnableQosEnlightenment.c)
 *     PpmPerfGetBrandedFrequency @ 0x140B67AAC (PpmPerfGetBrandedFrequency.c)
 *     PnprQuiesceProcessors @ 0x140BF86B4 (PnprQuiesceProcessors.c)
 *     PpmHeteroWpsDetectContainmentFromMaskAmd @ 0x140C04230 (PpmHeteroWpsDetectContainmentFromMaskAmd.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 *     KiIntSteerInitCheckCycleCounters @ 0x140CD1E54 (KiIntSteerInitCheckCycleCounters.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140CDE278 (PspCopyNodeRelativeMaskToAffinityEx.c)
 *     VslConnectSwInterrupt @ 0x140D0CEFC (VslConnectSwInterrupt.c)
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
      *a1 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v5].Flink
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
