/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x14002F6B4
 * Callers:
 *     RaidAdapterQuerySystemPowerIrp @ 0x14002EFF8 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x14002F46C (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x14002F554 (RaidAdapterSetSystemPowerIrp.c)
 *     StorEtwEnableCallback @ 0x140038A60 (StorEtwEnableCallback.c)
 *     StorpLogStatistics @ 0x140038EB8 (StorpLogStatistics.c)
 *     StorEnableRegistryKeyNotification @ 0x140050904 (StorEnableRegistryKeyNotification.c)
 *     RaidAdapterDeviceReset @ 0x140060C14 (RaidAdapterDeviceReset.c)
 *     RaidAdapterUpdateDynamicRegistrySettings @ 0x14006C0F0 (RaidAdapterUpdateDynamicRegistrySettings.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x14006D350 (RaidPnPAsyncStartCompleteWorker.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x140071D84 (RemoveNvmeIceInterfaceFromList.c)
 *     StorpQueueWorkItemInternal @ 0x14007D808 (StorpQueueWorkItemInternal.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1400A3064 (RaUnitStorageFreeDumpInfo.c)
 *     StorEtwResetCounters @ 0x1400B24B8 (StorEtwResetCounters.c)
 *     StorpLogPerAdapterStatistics @ 0x1400B84B8 (StorpLogPerAdapterStatistics.c)
 *     RaWmiDispatchIrp @ 0x1401B7718 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAcquireAdapterRemoveLock(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336)) == 0 ? 0xC0000056 : 0;
}
