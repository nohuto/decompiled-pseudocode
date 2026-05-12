/*
 * XREFs of NvmeNamespaceAcquireRemoveLock @ 0x140041680
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140040B50 (NvmeNamespacePnpIrp.c)
 *     NvmeNamespaceFlushIrp @ 0x140041328 (NvmeNamespaceFlushIrp.c)
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceDeviceUsageNotificationIrp @ 0x1401033E8 (NvmeNamespaceDeviceUsageNotificationIrp.c)
 *     NvmeNamespacePowerIrp @ 0x1401085E4 (NvmeNamespacePowerIrp.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010CBE0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 *     NvmeNamespaceScsiIrp @ 0x14010ECE8 (NvmeNamespaceScsiIrp.c)
 *     NvmeNamespaceSystemThread @ 0x14011B1F0 (NvmeNamespaceSystemThread.c)
 *     NvmeNamespacePowerRequiredStep1 @ 0x140128720 (NvmeNamespacePowerRequiredStep1.c)
 *     NvmeNamespacePreProcessSetDevicePowerIrp @ 0x140128AF4 (NvmeNamespacePreProcessSetDevicePowerIrp.c)
 *     NvmeNamespaceSetSystemPowerIrp @ 0x14012A0E0 (NvmeNamespaceSetSystemPowerIrp.c)
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     NvmeNamespaceCheckRemoveState @ 0x1400416C8 (NvmeNamespaceCheckRemoveState.c)
 */

__int64 __fastcall NvmeNamespaceAcquireRemoveLock(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r11
  __int64 result; // rax

  v2 = 0;
  v3 = a1;
  if ( !a2 || (result = NvmeNamespaceCheckRemoveState(), v2 = result, (int)result >= 0) )
  {
    if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 120)) )
      return (unsigned int)-1073741738;
    return v2;
  }
  return result;
}
