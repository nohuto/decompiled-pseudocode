/*
 * XREFs of ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0
 * Callers:
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x140200DD0 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021BA80 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KiComputeThreadAffinity @ 0x140229B90 (KiComputeThreadAffinity.c)
 *     KiComputeCpuSetAffinity @ 0x140229FB8 (KiComputeCpuSetAffinity.c)
 *     KiChooseTargetProcessor @ 0x140235760 (KiChooseTargetProcessor.c)
 *     KxFlushNonGlobalTb @ 0x140250FF0 (KxFlushNonGlobalTb.c)
 *     KxFlushEntireTb @ 0x14025128C (KxFlushEntireTb.c)
 *     KeFlushProcessWriteBuffers @ 0x14025167C (KeFlushProcessWriteBuffers.c)
 *     PpmParkBuildTopologyCandidates @ 0x14025222C (PpmParkBuildTopologyCandidates.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140254100 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14025B888 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025C720 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkComputeUnparkMask @ 0x14025D7A0 (PpmParkComputeUnparkMask.c)
 *     KiSetSystemAffinityThread @ 0x14037C620 (KiSetSystemAffinityThread.c)
 *     PpmParkReportMask @ 0x1403E6EE0 (PpmParkReportMask.c)
 *     HalRequestIpiSpecifyVector @ 0x1403EC570 (HalRequestIpiSpecifyVector.c)
 *     KiForwardTick @ 0x1403ED6F0 (KiForwardTick.c)
 *     KiComputeHeteroConfig @ 0x1403EE2D8 (KiComputeHeteroConfig.c)
 *     KeChangeMemoryAttributes @ 0x1403EF1E8 (KeChangeMemoryAttributes.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x14042BAD8 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14045E650 (PpmParkFindSpecificTopologyMask.c)
 *     KeQueryUserAffinityThread @ 0x1404C9A3C (KeQueryUserAffinityThread.c)
 *     KeSynchronizeAddressPolicy @ 0x1404CC778 (KeSynchronizeAddressPolicy.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404DA4D0 (KeQueryLogicalProcessorRelationship.c)
 *     KeSynchronizeSecurityDomain @ 0x1404DD448 (KeSynchronizeSecurityDomain.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140507754 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeFreezeExecution @ 0x140508FA0 (KeFreezeExecution.c)
 *     KeSetAffinityProcess @ 0x14050BCE4 (KeSetAffinityProcess.c)
 *     KeQueryCpuPartitionAffinityEx @ 0x14052B518 (KeQueryCpuPartitionAffinityEx.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140531650 (KeGetAffinitizedInterruptsInfo.c)
 *     HalpNmiReboot @ 0x140593E10 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x140594AB0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405A3000 (Amd64AddProfileSource.c)
 *     KeQueryProcessAvailableCpus @ 0x1405E57A0 (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405E5860 (KeQuerySystemAvailableCpus.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KeUpdateProcessorRestrictions @ 0x1405E9610 (KeUpdateProcessorRestrictions.c)
 *     KiStartPrcbThread @ 0x1405EC620 (KiStartPrcbThread.c)
 *     KeCopyAffinityEx @ 0x1405EC920 (KeCopyAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x1405EE9C0 (KeQueryActiveProcessorAffinity.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405F3D38 (KeQueryCpuPartitionAffinity.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F416C (KiCpuPartitionCheckAffinitization.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405F9B28 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KxFlushSingleTb @ 0x1405FC9F8 (KxFlushSingleTb.c)
 *     PoInitiateProcessorWake @ 0x1406014A0 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140602C70 (PpmInstallNewIdleDomains.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060ACD4 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsGetWpsHint @ 0x14060B404 (PpmHeteroHgsGetWpsHint.c)
 *     PpmParkApplyMixedTopologyPolicy @ 0x14060F1EC (PpmParkApplyMixedTopologyPolicy.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14060F5A8 (PpmParkDetectTopologyLevelInfo.c)
 *     PpmParkInitParkNode @ 0x14060F9F4 (PpmParkInitParkNode.c)
 *     PpmParkRegisterParking @ 0x14060FE58 (PpmParkRegisterParking.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14063CAB0 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1407B92B0 (KiPrepareUpdateCoresHeteroMask.c)
 *     KeInitializeProfileCallback @ 0x1407BAD28 (KeInitializeProfileCallback.c)
 *     KeDeleteCpuPartition @ 0x1407BB114 (KeDeleteCpuPartition.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1407C9BE0 (PpmInstallCoordinatedIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408269B8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x140842064 (ExpProfileCreate.c)
 *     NtStartProfile @ 0x140842840 (NtStartProfile.c)
 *     KeInitializeProcess @ 0x140963BE4 (KeInitializeProcess.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspSetEffectiveJobLimits @ 0x140ABBC18 (PspSetEffectiveJobLimits.c)
 *     HalpReportResourceUsage @ 0x140CAE8F8 (HalpReportResourceUsage.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140CD6EF4 (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpCopyAffinityEx(struct _KAFFINITY_EX *a1, unsigned __int16 a2, struct _KAFFINITY_EX *a3)
{
  unsigned __int16 Count; // cx
  unsigned __int16 v5; // ax
  $B38C3B1372D6E954799962D5DD404846 *v6; // rdx
  __int64 v7; // r10
  signed __int64 v8; // r8
  __int64 v9; // rcx

  Count = a3->Count;
  if ( a3->Count > a2 )
    Count = a2;
  a1->Count = Count;
  v5 = 0;
  a1->Size = a2;
  a1->Reserved = 0;
  if ( Count )
  {
    v6 = &a1->8;
    v7 = Count;
    v8 = (char *)a3 - (char *)a1;
    v5 = Count;
    do
    {
      v6->Bitmap[0] = *(unsigned __int64 *)((char *)v6->Bitmap + v8);
      v6 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v6 + 8);
      --v7;
    }
    while ( v7 );
  }
  for ( ; v5 < a1->Size; a1->Bitmap[v9] = 0LL )
    v9 = v5++;
}
