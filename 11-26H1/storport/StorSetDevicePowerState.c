/*
 * XREFs of StorSetDevicePowerState @ 0x140049CC0
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x14000F504 (RaidAdapterDevicePowerstopAdapter.c)
 *     NvmeAdapterDevicePowerStopAdapter @ 0x140123208 (NvmeAdapterDevicePowerStopAdapter.c)
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x140124E40 (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x140128C7C (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     <none>
 */

POWER_STATE __fastcall StorSetDevicePowerState(struct _DEVICE_OBJECT *a1, POWER_STATE a2)
{
  return PoSetPowerState(a1, DevicePowerState, a2);
}
