/*
 * XREFs of NvmeAdapterHostGatewayAcquireRundown @ 0x1400D8F28
 * Callers:
 *     NvmeAdapterAddSubsystemPortMiniport @ 0x1400D2D7C (NvmeAdapterAddSubsystemPortMiniport.c)
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400D41C0 (NvmeAdapterCreateAddSubsystemPort.c)
 *     NvmeAdapterFindNvmeController @ 0x1400D55CC (NvmeAdapterFindNvmeController.c)
 *     NvmeAdapterFindSubsystemPort @ 0x1400D5754 (NvmeAdapterFindSubsystemPort.c)
 *     NvmeAdapterRemoveSubsystemPortMiniport @ 0x1400DC2B4 (NvmeAdapterRemoveSubsystemPortMiniport.c)
 *     NvmeAdapterStop @ 0x1400DEC40 (NvmeAdapterStop.c)
 *     NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400EC734 (NvmeAdapterProcessFabricControllerDiscoveryEntry.c)
 *     NvmeAdapterGetHostGatewayByHandle @ 0x14019B214 (NvmeAdapterGetHostGatewayByHandle.c)
 *     NvmeAdapterGetHostGateways @ 0x14019B70C (NvmeAdapterGetHostGateways.c)
 *     NvmeAdapterGetSubsystemPorts @ 0x14019D2F4 (NvmeAdapterGetSubsystemPorts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterHostGatewayAcquireRundown(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 56)) == 0 ? 0xC0000056 : 0;
}
