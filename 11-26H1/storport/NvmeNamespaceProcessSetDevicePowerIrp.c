/*
 * XREFs of NvmeNamespaceProcessSetDevicePowerIrp @ 0x140128C38
 * Callers:
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x140124E40 (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 *     NvmeNamespaceSetPowerIrp @ 0x1401299C8 (NvmeNamespaceSetPowerIrp.c)
 * Callees:
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x140128C7C (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 */

__int64 __fastcall NvmeNamespaceProcessSetDevicePowerIrp(__int64 a1, __int64 a2, char a3)
{
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL) == 4 )
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = 0;
  if ( !a3 )
    _interlockedbittestandset(*(volatile signed __int32 **)(a1 + 256), 2u);
  NvmeNamespaceProcessSetDevicePowerIrpComplete();
  return 0LL;
}
