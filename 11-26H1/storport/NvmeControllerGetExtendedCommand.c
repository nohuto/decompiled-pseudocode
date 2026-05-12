/*
 * XREFs of NvmeControllerGetExtendedCommand @ 0x140044DA8
 * Callers:
 *     NvmeControllerSetPowerState @ 0x140044218 (NvmeControllerSetPowerState.c)
 *     NvmeNamespaceDsmDeallocate @ 0x140044400 (NvmeNamespaceDsmDeallocate.c)
 *     NvmeControllerGetChangedNamespaceListLog @ 0x1400C5C50 (NvmeControllerGetChangedNamespaceListLog.c)
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
 *     NvmeControllerReConfigAsyncEvent @ 0x1400CF810 (NvmeControllerReConfigAsyncEvent.c)
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
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D5D1C (NvmeAdapterFirmwareActivateIoctl.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D6F6C (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D7D50 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400DD020 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400F06B0 (NvmeControllerAsyncEventCommandCompletion.c)
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
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x140100F94 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     NvmeNamespaceDsmWriteZeroes @ 0x140103E38 (NvmeNamespaceDsmWriteZeroes.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceReinitializeMediaIoctl @ 0x14010C518 (NvmeNamespaceReinitializeMediaIoctl.c)
 *     NvmeNamespaceReservationAcquire @ 0x14010D88C (NvmeNamespaceReservationAcquire.c)
 *     NvmeNamespaceReservationRegister @ 0x14010DAC4 (NvmeNamespaceReservationRegister.c)
 *     NvmeNamespaceReservationRegisterAndMove @ 0x14010DD1C (NvmeNamespaceReservationRegisterAndMove.c)
 *     NvmeNamespaceReservationRelease @ 0x14010DF2C (NvmeNamespaceReservationRelease.c)
 *     NvmeNamespaceReservationReport @ 0x14010E124 (NvmeNamespaceReservationReport.c)
 *     NvmeNamespaceReservationReportCapabilities @ 0x14010E8C8 (NvmeNamespaceReservationReportCapabilities.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x140113B00 (NvmeNamespaceStorMQFirmwareGetInfoIoctl.c)
 *     NvmeQueryProtocolInfoFeatureData @ 0x140120B58 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012113C (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x140121494 (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x140122774 (NvmeSetProtocolInfoFeatureData.c)
 *     NvmeAdapterGetTemperatureProperty @ 0x14019D994 (NvmeAdapterGetTemperatureProperty.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54 (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceDiskVerifyIoctl @ 0x1401A5B5C (NvmeNamespaceDiskVerifyIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AAF40 (NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401BCE2C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 * Callees:
 *     NvmeControllerAllocateExtendedCommand @ 0x140058910 (NvmeControllerAllocateExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerGetExtendedCommand(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY v2; // rax
  __int64 ExtendedCommand; // rdx
  __int64 result; // rax
  __int16 v5; // cx
  __int64 v6; // rax

  v2 = ExpInterlockedPopEntrySList(a1 + 71);
  if ( v2 )
    ExtendedCommand = (__int64)&v2[-1];
  else
    ExtendedCommand = NvmeControllerAllocateExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 0LL;
  v5 = *(_WORD *)(a1[8].Alignment + 1108);
  v6 = *(_QWORD *)ExtendedCommand;
  *(_DWORD *)(ExtendedCommand + 48) |= 1u;
  *(_WORD *)(ExtendedCommand + 52) = v5;
  *(_QWORD *)(v6 + 4240) = ExtendedCommand;
  result = ExtendedCommand;
  *(_WORD *)(ExtendedCommand + 54) = 0;
  return result;
}
