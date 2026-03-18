/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1402767B0
 * Callers:
 *     PpmEventHgsHardwareTable @ 0x14025D178 (PpmEventHgsHardwareTable.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140276830 (ExAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x140449634 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140449868 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAllocateFannedOutPushLock @ 0x140499300 (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404997AC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140499C34 (ExpSaPageGroupDescriptorFree.c)
 *     ExpGetSystemProcessorInformation @ 0x1404A4D80 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1404CCA9C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1404D7C04 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404DA4D0 (KeQueryLogicalProcessorRelationship.c)
 *     PpmEventHgsNormalizedTable @ 0x140502DA4 (PpmEventHgsNormalizedTable.c)
 *     HalpHvInitMcaPcrContext @ 0x14050944C (HalpHvInitMcaPcrContext.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405250F8 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     KeQueryMaximumProcessorCount @ 0x1405EEA10 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x1405F32A8 (KeStartProfile.c)
 *     KiInitializeCpuPartitionLogPerProcessorBuffer @ 0x1405F4448 (KiInitializeCpuPartitionLogPerProcessorBuffer.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x14060EE30 (PpmEventWpsParkingTableUpdateReason.c)
 *     RtlpHpEnvTlsAlloc @ 0x140639084 (RtlpHpEnvTlsAlloc.c)
 *     ExpSaInitialize @ 0x1406D31D0 (ExpSaInitialize.c)
 *     EtwpCovSampCaptureFlushStats @ 0x14077A220 (EtwpCovSampCaptureFlushStats.c)
 *     PpmHeteroRegisterWpsUpdatesPep @ 0x1407E30F0 (PpmHeteroRegisterWpsUpdatesPep.c)
 *     PpmHeteroRegisterWpsUpdatesAmd @ 0x1407E3860 (PpmHeteroRegisterWpsUpdatesAmd.c)
 *     EtwpAllocatePmcData @ 0x140825168 (EtwpAllocatePmcData.c)
 *     EtwpInitializeSiloState @ 0x140826150 (EtwpInitializeSiloState.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083075C (EtwpCovSampCaptureContextStart.c)
 *     KeInitializeProcess @ 0x140963BE4 (KeInitializeProcess.c)
 *     EtwpInitLoggerContext @ 0x140A6DD54 (EtwpInitLoggerContext.c)
 *     HalpDmaAllocateMappingResources @ 0x140CB0220 (HalpDmaAllocateMappingResources.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140CD3474 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroEngine @ 0x140CD44D4 (PpmInitHeteroEngine.c)
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
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
    return __popcnt(*(_QWORD *)((char *)&stru_140FC01F0.116 + 8 * GroupNumber + 4));
  }
}
