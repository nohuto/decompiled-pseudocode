/*
 * XREFs of NvmeControllerProcessCommandSync @ 0x1400448F8
 * Callers:
 *     NvmeControllerSetPowerState @ 0x140044218 (NvmeControllerSetPowerState.c)
 *     NvmeNamespaceDsmDeallocate @ 0x140044400 (NvmeNamespaceDsmDeallocate.c)
 *     NvmeGetActiveNameSpaceIdList @ 0x1400C666C (NvmeGetActiveNameSpaceIdList.c)
 *     NvmeGetIdentifyNamespaceData @ 0x1400C67F0 (NvmeGetIdentifyNamespaceData.c)
 *     NvmeControllerGetCloudSSDErrorRecoveryLog @ 0x1400CDA54 (NvmeControllerGetCloudSSDErrorRecoveryLog.c)
 *     NvmeControllerGetCloudSSDLog @ 0x1400CDD20 (NvmeControllerGetCloudSSDLog.c)
 *     NvmeControllerGetCommandEffectsLog @ 0x1400CDF84 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400CE1CC (NvmeControllerGetFeatureIdentifiersSupportedLog.c)
 *     NvmeControllerGetHealthInfoLog @ 0x1400CE460 (NvmeControllerGetHealthInfoLog.c)
 *     NvmeControllerGetSupportedLogPagesLog @ 0x1400CE71C (NvmeControllerGetSupportedLogPagesLog.c)
 *     NvmeControllerBuildIoPollingConfiguration @ 0x1400CEA24 (NvmeControllerBuildIoPollingConfiguration.c)
 *     NvmeControllerConfigAsyncEvent @ 0x1400CEFFC (NvmeControllerConfigAsyncEvent.c)
 *     NvmeControllerGetCurrentWriteCacheState @ 0x1400CF164 (NvmeControllerGetCurrentWriteCacheState.c)
 *     NvmeControllerGetFeaturesSupportedCacheCapabilities @ 0x1400CF3F4 (NvmeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NvmeControllerGetTemperatureThreshold @ 0x1400CF5C0 (NvmeControllerGetTemperatureThreshold.c)
 *     NvmeControllerSetArbitration @ 0x1400CF9E4 (NvmeControllerSetArbitration.c)
 *     NvmeControllerSetCurrentWriteCacheState @ 0x1400CFB68 (NvmeControllerSetCurrentWriteCacheState.c)
 *     NvmeControllerSetHostBehaviorSupport @ 0x1400CFE2C (NvmeControllerSetHostBehaviorSupport.c)
 *     NvmeControllerSetHostIdentifier @ 0x1400CFFDC (NvmeControllerSetHostIdentifier.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400D0214 (NvmeControllerSetHostMemoryBuffer.c)
 *     NvmeControllerSetInterruptCoalescing @ 0x1400D046C (NvmeControllerSetInterruptCoalescing.c)
 *     NvmeControllerSetIoQueueCount @ 0x1400D05D8 (NvmeControllerSetIoQueueCount.c)
 *     NvmeControllerSetWriteCacheEnable @ 0x1400D0A50 (NvmeControllerSetWriteCacheEnable.c)
 *     NvmeControllerSyncHostTime @ 0x1400D0D28 (NvmeControllerSyncHostTime.c)
 *     NvmeGetAutoPowerStateTransition @ 0x1400D0F40 (NvmeGetAutoPowerStateTransition.c)
 *     NvmeSetAutoPowerStateTransition @ 0x1400D1374 (NvmeSetAutoPowerStateTransition.c)
 *     NvmeSetNonOperationalPowerStatePermissiveMode @ 0x1400D149C (NvmeSetNonOperationalPowerStatePermissiveMode.c)
 *     NvmeControllerCheckOCPCompliance @ 0x1400F15A4 (NvmeControllerCheckOCPCompliance.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400F3F00 (NvmeControllerGetIoCommandSetIdentify.c)
 *     NvmeControllerGetTelemetryLog @ 0x1400F4BE8 (NvmeControllerGetTelemetryLog.c)
 *     NvmeControllerIdentify @ 0x1400F5094 (NvmeControllerIdentify.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400F5278 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeControllerIoCompletionQueueCreate @ 0x1400F69A4 (NvmeControllerIoCompletionQueueCreate.c)
 *     NvmeControllerIoCompletionQueueDelete @ 0x1400F6BE8 (NvmeControllerIoCompletionQueueDelete.c)
 *     NvmeControllerIoSubmissionQueueCreate @ 0x1400F7BA8 (NvmeControllerIoSubmissionQueueCreate.c)
 *     NvmeControllerIoSubmissionQueueDelete @ 0x1400F7ED4 (NvmeControllerIoSubmissionQueueDelete.c)
 *     NvmeGetNVMSetAttributeList @ 0x1400FE8C0 (NvmeGetNVMSetAttributeList.c)
 *     NvmeGetNamespaceDescriptorListIdentify @ 0x1400FEB00 (NvmeGetNamespaceDescriptorListIdentify.c)
 *     NvmeGetNamespaceIoCommandSetIdentify @ 0x1400FED48 (NvmeGetNamespaceIoCommandSetIdentify.c)
 *     NvmeNamespaceDsmWriteZeroes @ 0x140103E38 (NvmeNamespaceDsmWriteZeroes.c)
 *     NvmeNamespaceReinitializeMediaIoctl @ 0x14010C518 (NvmeNamespaceReinitializeMediaIoctl.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010CBE0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 *     NvmeNamespaceReservationAcquire @ 0x14010D88C (NvmeNamespaceReservationAcquire.c)
 *     NvmeNamespaceReservationRegister @ 0x14010DAC4 (NvmeNamespaceReservationRegister.c)
 *     NvmeNamespaceReservationRegisterAndMove @ 0x14010DD1C (NvmeNamespaceReservationRegisterAndMove.c)
 *     NvmeNamespaceReservationRelease @ 0x14010DF2C (NvmeNamespaceReservationRelease.c)
 *     NvmeNamespaceReservationReport @ 0x14010E124 (NvmeNamespaceReservationReport.c)
 *     NvmeNamespaceReservationReportCapabilities @ 0x14010E8C8 (NvmeNamespaceReservationReportCapabilities.c)
 *     NvmeNamespaceDiskVerifyIoctl @ 0x1401A5B5C (NvmeNamespaceDiskVerifyIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     WaitForNVMeCommandComplete @ 0x1400C6F10 (WaitForNVMeCommandComplete.c)
 */

__int64 __fastcall NvmeControllerProcessCommandSync(PVOID SystemArgument2, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x2000u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x10000u;
  result = NvmeControllerProcessCommand(SystemArgument2);
  if ( (int)result >= 0 )
    return WaitForNVMeCommandComplete(SystemArgument2);
  return result;
}
