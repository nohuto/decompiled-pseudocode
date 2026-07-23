/*
 * XREFs of ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210
 * Callers:
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x140200DD0 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiComputeCpuSetAffinity @ 0x14022B948 (KiComputeCpuSetAffinity.c)
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 *     KxFlushNonGlobalTb @ 0x140252950 (KxFlushNonGlobalTb.c)
 *     KxFlushEntireTb @ 0x140252BEC (KxFlushEntireTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     PpmParkBuildTopologyCandidates @ 0x140253B8C (PpmParkBuildTopologyCandidates.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140255A60 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14025DB70 (PpmParkFindSpecificTopologyMask.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     PpmParkReportMask @ 0x1402F3DC0 (PpmParkReportMask.c)
 *     HalRequestIpiSpecifyVector @ 0x1402F95B0 (HalRequestIpiSpecifyVector.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x1404201A8 (PpmHeteroRestrictToFavoredClass.c)
 *     KiForwardTick @ 0x140452220 (KiForwardTick.c)
 *     KiComputeHeteroConfig @ 0x140452E08 (KiComputeHeteroConfig.c)
 *     KeChangeMemoryAttributes @ 0x140453D18 (KeChangeMemoryAttributes.c)
 *     KeQueryUserAffinityThread @ 0x1404C345C (KeQueryUserAffinityThread.c)
 *     KeSynchronizeAddressPolicy @ 0x1404C5F18 (KeSynchronizeAddressPolicy.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404D3BB0 (KeQueryLogicalProcessorRelationship.c)
 *     KeSynchronizeSecurityDomain @ 0x1404D6B28 (KeSynchronizeSecurityDomain.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140501124 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeFreezeExecution @ 0x140502A50 (KeFreezeExecution.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeQueryCpuPartitionAffinityEx @ 0x14052DA38 (KeQueryCpuPartitionAffinityEx.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140533B50 (KeGetAffinitizedInterruptsInfo.c)
 *     HalpNmiReboot @ 0x140596590 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x140597230 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405A5810 (Amd64AddProfileSource.c)
 *     KeQueryProcessAvailableCpus @ 0x1405E8110 (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405E81D0 (KeQuerySystemAvailableCpus.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KeUpdateProcessorRestrictions @ 0x1405EBF80 (KeUpdateProcessorRestrictions.c)
 *     KiStartPrcbThread @ 0x1405EEF90 (KiStartPrcbThread.c)
 *     KeCopyAffinityEx @ 0x1405EF290 (KeCopyAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x1405F1330 (KeQueryActiveProcessorAffinity.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405F66F8 (KeQueryCpuPartitionAffinity.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405FC548 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KxFlushSingleTb @ 0x1405FF448 (KxFlushSingleTb.c)
 *     PoInitiateProcessorWake @ 0x140603F50 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140605720 (PpmInstallNewIdleDomains.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060D93C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsGetWpsHint @ 0x14060E0F0 (PpmHeteroHgsGetWpsHint.c)
 *     PpmParkApplyMixedTopologyPolicy @ 0x140612450 (PpmParkApplyMixedTopologyPolicy.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14061280C (PpmParkDetectTopologyLevelInfo.c)
 *     PpmParkInitParkNode @ 0x140612C58 (PpmParkInitParkNode.c)
 *     PpmParkRegisterParking @ 0x1406130BC (PpmParkRegisterParking.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640690 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1407BC310 (KiPrepareUpdateCoresHeteroMask.c)
 *     KeInitializeProfileCallback @ 0x1407BDD88 (KeInitializeProfileCallback.c)
 *     KeDeleteCpuPartition @ 0x1407BE174 (KeDeleteCpuPartition.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1407CCC80 (PpmInstallCoordinatedIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14082CBF8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x14084B100 (ExpProfileCreate.c)
 *     NtStartProfile @ 0x14084B8E0 (NtStartProfile.c)
 *     PspSetEffectiveJobLimits @ 0x140ABD918 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     HalpReportResourceUsage @ 0x140CB4938 (HalpReportResourceUsage.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140CDD248 (PpmHeteroInitializeIntelWpsSupport.c)
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
