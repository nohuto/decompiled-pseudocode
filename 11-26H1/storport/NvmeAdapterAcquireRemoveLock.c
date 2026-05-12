/*
 * XREFs of NvmeAdapterAcquireRemoveLock @ 0x14004B464
 * Callers:
 *     StorpLogStatistics @ 0x140038EB8 (StorpLogStatistics.c)
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0 (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     StorEnableRegistryKeyNotification @ 0x140050904 (StorEnableRegistryKeyNotification.c)
 *     StorpQueueWorkItemInternal @ 0x14007D808 (StorpQueueWorkItemInternal.c)
 *     StorEtwResetCounters @ 0x1400B24B8 (StorEtwResetCounters.c)
 *     StorpLogNvmePerAdapterStatistics @ 0x1400B842C (StorpLogNvmePerAdapterStatistics.c)
 *     NvmeAdapterPnpIrp @ 0x1400DA0D8 (NvmeAdapterPnpIrp.c)
 *     NvmeAdapterPowerIrp @ 0x1400DAD68 (NvmeAdapterPowerIrp.c)
 *     NvmeAdapterUpdateDynamicRegistrySettings @ 0x1400E0D00 (NvmeAdapterUpdateDynamicRegistrySettings.c)
 *     NvmePnpAsyncStartCompleteWorker @ 0x1400E2A20 (NvmePnpAsyncStartCompleteWorker.c)
 *     NvmeNamespaceWaitForPendingRequestsDrain @ 0x14011629C (NvmeNamespaceWaitForPendingRequestsDrain.c)
 *     NvmeAdapterPowerDownDevice @ 0x140124260 (NvmeAdapterPowerDownDevice.c)
 *     NvmeAdapterPowerUpDevice @ 0x140124C90 (NvmeAdapterPowerUpDevice.c)
 *     NvmeAdapterQuerySystemPowerIrp @ 0x140125C4C (NvmeAdapterQuerySystemPowerIrp.c)
 *     NvmeAdapterSetSystemPowerIrp @ 0x140126B94 (NvmeAdapterSetSystemPowerIrp.c)
 *     RaWmiDispatchIrp @ 0x1401B7718 (RaWmiDispatchIrp.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterAcquireRemoveLock(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152)) == 0 ? 0xC0000056 : 0;
}
