/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x14035E758
 * Callers:
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1403592EC (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalGetScatterGatherList @ 0x14035B550 (HalGetScatterGatherList.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x14035CC90 (HalpAllocateAdapterCallbackV2.c)
 *     IopMapTransfer @ 0x14035E030 (IopMapTransfer.c)
 *     IoFlushAdapterBuffersV2 @ 0x14035E4B0 (IoFlushAdapterBuffersV2.c)
 *     IoMapTransferInternal @ 0x14043841C (IoMapTransferInternal.c)
 *     HalJoinDmaDomain @ 0x1405113F0 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x14057BF00 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x14057C050 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x14057C07C (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     IoFreeMapRegistersThunk @ 0x14057C140 (IoFreeMapRegistersThunk.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14058B44C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV3 @ 0x140785E68 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140786454 (HalGetAdapterV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaGetAdapterVersion(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 156);
  result = 2LL;
  if ( v1 != 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( v1 == 3 )
      return 3LL;
  }
  return result;
}
