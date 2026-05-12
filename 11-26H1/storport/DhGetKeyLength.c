/*
 * XREFs of DhGetKeyLength @ 0x1400E31B4
 * Callers:
 *     NvmeFabricControllerQueueComputeCtrlAugmentedChallenge @ 0x1400FBFC8 (NvmeFabricControllerQueueComputeCtrlAugmentedChallenge.c)
 *     NvmeFabricControllerQueueComputeHostAugmentedChallenge @ 0x1400FC5F4 (NvmeFabricControllerQueueComputeHostAugmentedChallenge.c)
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400FCC1C (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400FCF50 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 *     NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400FD5A8 (NvmeFabricControllerQueueReceiveAuthChallenge.c)
 *     BuildNvmeAuthReplyMessage @ 0x140118BD4 (BuildNvmeAuthReplyMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DhGetKeyLength(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 256LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 384LL;
  if ( v2 == 1 )
    return 512LL;
  return 0LL;
}
