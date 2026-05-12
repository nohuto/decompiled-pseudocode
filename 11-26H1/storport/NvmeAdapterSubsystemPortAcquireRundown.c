/*
 * XREFs of NvmeAdapterSubsystemPortAcquireRundown @ 0x1400E0BE8
 * Callers:
 *     NvmeAdapterFindNvmeController @ 0x1400D55CC (NvmeAdapterFindNvmeController.c)
 *     NvmeAdapterFindSubsystemPort @ 0x1400D5754 (NvmeAdapterFindSubsystemPort.c)
 *     NvmeAdapterStop @ 0x1400DEC40 (NvmeAdapterStop.c)
 *     NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400EC734 (NvmeAdapterProcessFabricControllerDiscoveryEntry.c)
 *     NvmeAdapterAddSubsystemPort @ 0x1401977B0 (NvmeAdapterAddSubsystemPort.c)
 *     NvmeAdapterGetSubsystemPorts @ 0x14019D2F4 (NvmeAdapterGetSubsystemPorts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterSubsystemPortAcquireRundown(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 40)) == 0 ? 0xC0000056 : 0;
}
