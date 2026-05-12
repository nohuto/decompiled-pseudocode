/*
 * XREFs of _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280
 * Callers:
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x140029AA8 (StorpTelemetryMiniportEventAdapter.c)
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x14003E550 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     RaUnitTelemetryIdIoctl @ 0x140048110 (RaUnitTelemetryIdIoctl.c)
 *     StorpCSExitTelemetry @ 0x140048DA4 (StorpCSExitTelemetry.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x14005399C (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x14005A0C8 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x14005ABAC (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x14005B190 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBusNoLock @ 0x14006571C (RaidAdapterResetBusNoLock.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x14007F758 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x14007FE4C (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14009A788 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     RaidUnitResetTarget @ 0x1400A8D98 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1400A90F8 (RaidUnitResetUnit.c)
 *     StorpCSEntryTelemetry @ 0x1400B7140 (StorpCSEntryTelemetry.c)
 *     StorpLogPerAdapterStatistics @ 0x1400B84B8 (StorpLogPerAdapterStatistics.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1400B8A68 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryAdapterNvmeHealthCriticalInfo @ 0x1400B9DC8 (StorpTelemetryAdapterNvmeHealthCriticalInfo.c)
 *     StorpTelemetryAdapterNvmeHealthInfo @ 0x1400BA040 (StorpTelemetryAdapterNvmeHealthInfo.c)
 *     StorpTelemetryLogNvmeNamespaceErrorDataCriticalData @ 0x1400BAC78 (StorpTelemetryLogNvmeNamespaceErrorDataCriticalData.c)
 *     StorpTelemetryLogNvmeNamespaceErrorDataMeasures @ 0x1400BAEFC (StorpTelemetryLogNvmeNamespaceErrorDataMeasures.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1400BB180 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1400BB660 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1400BBB48 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1400BBE58 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1400BC1B4 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1400BC6CC (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1400BCB0C (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryMarkNamespaceResponsive @ 0x1400BCF44 (StorpTelemetryMarkNamespaceResponsive.c)
 *     StorpTelemetryMarkNamespaceUnresponsive @ 0x1400BD168 (StorpTelemetryMarkNamespaceUnresponsive.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1400BD3A0 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1400BD510 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryNvmeControllerHealthCriticalInfo @ 0x1400BD7B0 (StorpTelemetryNvmeControllerHealthCriticalInfo.c)
 *     StorpTelemetryNvmeControllerHealthInfo @ 0x1400BDA60 (StorpTelemetryNvmeControllerHealthInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1400BDE84 (StorpTelemetryNvmeHealthInfo.c)
 *     StorpTelemetryNvmeIceKeySlotFull @ 0x1400BE190 (StorpTelemetryNvmeIceKeySlotFull.c)
 *     StorpTelemetryNvmeLogNamespacePerfDataCriticalData @ 0x1400BE338 (StorpTelemetryNvmeLogNamespacePerfDataCriticalData.c)
 *     StorpTelemetryNvmeLogNamespacePerfDataMeasures @ 0x1400BE67C (StorpTelemetryNvmeLogNamespacePerfDataMeasures.c)
 *     StorpTelemetrySendAdapterDlrmStatistics @ 0x1400BFFBC (StorpTelemetrySendAdapterDlrmStatistics.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     StorpTelemetrySendAdapterUfsHealthInfo @ 0x1400C14F4 (StorpTelemetrySendAdapterUfsHealthInfo.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1400C17D8 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400D3950 (NvmeAdapterCompleteInitialization.c)
 *     NvmeNamespaceDeviceUsageNotificationIrp @ 0x1401033E8 (NvmeNamespaceDeviceUsageNotificationIrp.c)
 *     NvmeNamespaceTelemetryIdIoctl @ 0x140115190 (NvmeNamespaceTelemetryIdIoctl.c)
 *     NvmeRegisterForRuntimePowerManagement @ 0x14012A824 (NvmeRegisterForRuntimePowerManagement.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x1401A0664 (NvmeAdapterSurpriseRemovalIrp.c)
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A9E6C (NvmeNamespaceStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401B8714 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a6)
{
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rdx
  EVENT_DESCRIPTOR v9; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *a2 << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  v9.Keyword = v6;
  a6->Ptr = (unsigned __int64)off_140172180;
  a6->Size = *(unsigned __int16 *)off_140172180;
  a6[1].Ptr = (unsigned __int64)v7;
  a6->Reserved = 2;
  a6[1].Size = *v7;
  a6[1].Reserved = 1;
  return EtwWriteTransfer(RegHandle, &v9, 0LL, 0LL, UserDataCount, a6);
}
