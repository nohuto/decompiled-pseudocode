/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x140275D20
 * Callers:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x14021AF74 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14021B298 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140275DA0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExpAllocateFannedOutPushLock @ 0x140492E50 (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404932FC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140493784 (ExpSaPageGroupDescriptorFree.c)
 *     ExpGetSystemProcessorInformation @ 0x14049E410 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1404C623C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1404D13D4 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404D3BB0 (KeQueryLogicalProcessorRelationship.c)
 *     PpmEventHgsHardwareTable @ 0x1404E42EC (PpmEventHgsHardwareTable.c)
 *     PpmEventHgsNormalizedTable @ 0x1404FC674 (PpmEventHgsNormalizedTable.c)
 *     HalpHvInitMcaPcrContext @ 0x140502EFC (HalpHvInitMcaPcrContext.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140527768 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     KeQueryMaximumProcessorCount @ 0x1405F1380 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x1405F5C68 (KeStartProfile.c)
 *     KiInitializeCpuPartitionLogPerProcessorBuffer @ 0x1405F6E08 (KiInitializeCpuPartitionLogPerProcessorBuffer.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x140612074 (PpmEventWpsParkingTableUpdateReason.c)
 *     RtlpHpEnvTlsAlloc @ 0x14063C094 (RtlpHpEnvTlsAlloc.c)
 *     ExpSaInitialize @ 0x1406D7200 (ExpSaInitialize.c)
 *     EtwpCovSampCaptureFlushStats @ 0x14077D150 (EtwpCovSampCaptureFlushStats.c)
 *     PpmHeteroRegisterWpsUpdatesPep @ 0x1407E8180 (PpmHeteroRegisterWpsUpdatesPep.c)
 *     PpmHeteroRegisterWpsUpdatesAmd @ 0x1407E8B10 (PpmHeteroRegisterWpsUpdatesAmd.c)
 *     EtwpAllocatePmcData @ 0x14082B3A8 (EtwpAllocatePmcData.c)
 *     EtwpInitializeSiloState @ 0x14082C390 (EtwpInitializeSiloState.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083699C (EtwpCovSampCaptureContextStart.c)
 *     EtwpInitLoggerContext @ 0x140AB20E0 (EtwpInitLoggerContext.c)
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 *     HalpDmaAllocateMappingResources @ 0x140CB6260 (HalpDmaAllocateMappingResources.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140CD9614 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroEngine @ 0x140CDA674 (PpmInitHeteroEngine.c)
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( KeDynamicPartitioningSupported )
  {
    if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
      return KeMaximumProcessors;
    else
      return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
  }
  else if ( GroupNumber == 0xFFFF )
  {
    return KeNumberProcessors_0;
  }
  else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
  {
    return 0;
  }
  else
  {
    return __popcnt(*(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * GroupNumber + 4));
  }
}
