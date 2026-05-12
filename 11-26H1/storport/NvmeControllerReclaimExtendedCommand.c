/*
 * XREFs of NvmeControllerReclaimExtendedCommand @ 0x140044E24
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
 *     NvmeControllerReConfigAsyncEventCompletion @ 0x1400CF960 (NvmeControllerReConfigAsyncEventCompletion.c)
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
 *     NvmeAdapterFirmwareActivateAfterResetCallback @ 0x1400D5880 (NvmeAdapterFirmwareActivateAfterResetCallback.c)
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D5D1C (NvmeAdapterFirmwareActivateIoctl.c)
 *     NvmeAdapterFirmwareActivateIoctlCompletion @ 0x1400D62D0 (NvmeAdapterFirmwareActivateIoctlCompletion.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D6F6C (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareDownloadIoctlCompletion @ 0x1400D75B0 (NvmeAdapterFirmwareDownloadIoctlCompletion.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D7D50 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctlCompletion @ 0x1400D82B0 (NvmeAdapterFirmwareGetInfoIoctlCompletion.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400DD020 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     NvmeAdapterSetTemperatureThresholdIoctlCommandCompletion @ 0x1400DD5E0 (NvmeAdapterSetTemperatureThresholdIoctlCommandCompletion.c)
 *     NvmeAdapterStorageProtocolCommandIoctlCompletion @ 0x1400DFF80 (NvmeAdapterStorageProtocolCommandIoctlCompletion.c)
 *     NvmeControllerGetTemperatureThresholdWorkerCompletion @ 0x1400E0E40 (NvmeControllerGetTemperatureThresholdWorkerCompletion.c)
 *     NvmeGetStorageTemperaturePropertyComplete @ 0x1400E1690 (NvmeGetStorageTemperaturePropertyComplete.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400F06B0 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerCheckOCPCompliance @ 0x1400F15A4 (NvmeControllerCheckOCPCompliance.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400F3F00 (NvmeControllerGetIoCommandSetIdentify.c)
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400F4110 (NvmeControllerGetLogPageCompletionForAER.c)
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
 *     NvmeNamespaceCleanupSanitizeContext @ 0x140102008 (NvmeNamespaceCleanupSanitizeContext.c)
 *     NvmeNamespaceDsmWriteZeroes @ 0x140103E38 (NvmeNamespaceDsmWriteZeroes.c)
 *     NvmeNamespaceExecuteNvmeSrbComplete @ 0x1401044F0 (NvmeNamespaceExecuteNvmeSrbComplete.c)
 *     NvmeNamespaceExecuteScsiSrbComplete @ 0x140104F50 (NvmeNamespaceExecuteScsiSrbComplete.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceQueryDeviceEndurancePropertyCompletion @ 0x14010A090 (NvmeNamespaceQueryDeviceEndurancePropertyCompletion.c)
 *     NvmeNamespaceReservationAcquire @ 0x14010D88C (NvmeNamespaceReservationAcquire.c)
 *     NvmeNamespaceReservationRegister @ 0x14010DAC4 (NvmeNamespaceReservationRegister.c)
 *     NvmeNamespaceReservationRegisterAndMove @ 0x14010DD1C (NvmeNamespaceReservationRegisterAndMove.c)
 *     NvmeNamespaceReservationRelease @ 0x14010DF2C (NvmeNamespaceReservationRelease.c)
 *     NvmeNamespaceReservationReport @ 0x14010E124 (NvmeNamespaceReservationReport.c)
 *     NvmeNamespaceReservationReportCapabilities @ 0x14010E8C8 (NvmeNamespaceReservationReportCapabilities.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x140113B00 (NvmeNamespaceStorMQFirmwareGetInfoIoctl.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion @ 0x140114060 (NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion.c)
 *     NvmeNamespaceStorageProtocolCommandIoctlCompletion @ 0x140114940 (NvmeNamespaceStorageProtocolCommandIoctlCompletion.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14011FFE0 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeQueryProtocolInfoFeatureData @ 0x140120B58 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012113C (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x140121494 (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetProtocolInfoCompletion @ 0x140121FB0 (NvmeSetProtocolInfoCompletion.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x140122774 (NvmeSetProtocolInfoFeatureData.c)
 *     NvmeAdapterGetTemperatureProperty @ 0x14019D994 (NvmeAdapterGetTemperatureProperty.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54 (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceDiskVerifyIoctl @ 0x1401A5B5C (NvmeNamespaceDiskVerifyIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AAF40 (NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401BCE2C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 * Callees:
 *     IsNvmeExtendedCommandCompleted @ 0x140032758 (IsNvmeExtendedCommandCompleted.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall NvmeControllerReclaimExtendedCommand(union _SLIST_HEADER *a1, __int64 a2)
{
  int v4; // edi
  unsigned __int64 Alignment; // rbx
  __int64 v6; // rsi
  KIRQL v7; // r15
  __int64 v8; // r8
  struct _SLIST_ENTRY *v9; // rdx
  union _SLIST_HEADER *v10; // rcx

  if ( a2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4176LL) )
    {
      v4 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL);
      Alignment = a1[8].Alignment;
      v6 = *(_QWORD *)(*(_QWORD *)a2 + 4176LL);
      v7 = KfRaiseIrql(2u);
      LOBYTE(v8) = (v4 & 0x200) != 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(Alignment + 1160) + 8LL) + 96LL))(
        *(_QWORD *)(Alignment + 1160),
        v6,
        v8);
      if ( v7 < 2u )
        KeLowerIrql(v7);
      *(_QWORD *)(*(_QWORD *)a2 + 4176LL) = 0LL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x8000) == 0 || IsNvmeExtendedCommandCompleted(a2) )
    {
      memset_0(*(void **)a2, 0, 0x10B0uLL);
      *(_DWORD *)(a2 + 48) &= ~1u;
      v9 = (struct _SLIST_ENTRY *)(a2 + 16);
      v10 = a1 + 71;
    }
    else
    {
      *(_DWORD *)(a2 + 48) |= 2u;
      v9 = (struct _SLIST_ENTRY *)(a2 + 16);
      if ( *(_WORD *)(a2 + 54) )
        v10 = (union _SLIST_HEADER *)(a1[74].Alignment - 16 + 16LL * *(unsigned __int16 *)(a2 + 54));
      else
        v10 = a1 + 73;
    }
    ExpInterlockedPushEntrySList(v10, v9);
  }
}
