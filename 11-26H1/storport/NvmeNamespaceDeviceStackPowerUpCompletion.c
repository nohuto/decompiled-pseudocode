/*
 * XREFs of NvmeNamespaceDeviceStackPowerUpCompletion @ 0x1401278A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceDeviceStackPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context)
{
  *(_DWORD *)(*((_QWORD *)Context + 16) + 80LL) &= ~2u;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 15));
}
