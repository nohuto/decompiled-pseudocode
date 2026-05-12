/*
 * XREFs of NvmeControllerAcquireRundown @ 0x1400C5B84
 * Callers:
 *     NvmeControllerStartReenumeration @ 0x1400C6538 (NvmeControllerStartReenumeration.c)
 *     NvmeAdapterConnectControllerInternal @ 0x1400D3D60 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterStorMQAddController @ 0x1400DF1F4 (NvmeAdapterStorMQAddController.c)
 *     NvmeAdapterStorMQControllerStartInitialize @ 0x1400DF680 (NvmeAdapterStorMQControllerStartInitialize.c)
 *     NvmeAdapterStorMQRemoveController @ 0x1400DF6F8 (NvmeAdapterStorMQRemoveController.c)
 *     NvmeControllerCommandTimeoutDetectThread @ 0x14012B190 (NvmeControllerCommandTimeoutDetectThread.c)
 *     NvmeAdapterAddController @ 0x1401971E8 (NvmeAdapterAddController.c)
 *     NvmeAdapterGetControllers @ 0x14019A7FC (NvmeAdapterGetControllers.c)
 *     NvmeAdapterGetNamespaces @ 0x14019C0D0 (NvmeAdapterGetNamespaces.c)
 *     NvmeAdapterGetNvmeControllerDiscoveryEntries @ 0x14019C654 (NvmeAdapterGetNvmeControllerDiscoveryEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerAcquireRundown(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 552)) == 0 ? 0xC0000056 : 0;
}
