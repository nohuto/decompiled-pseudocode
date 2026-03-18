/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x14035C9B8
 * Callers:
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14035754C (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalGetScatterGatherList @ 0x1403597B0 (HalGetScatterGatherList.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x14035AEF0 (HalpAllocateAdapterCallbackV2.c)
 *     IopMapTransfer @ 0x14035C290 (IopMapTransfer.c)
 *     IoFlushAdapterBuffersV2 @ 0x14035C710 (IoFlushAdapterBuffersV2.c)
 *     IoMapTransferInternal @ 0x14043F90C (IoMapTransferInternal.c)
 *     HalJoinDmaDomain @ 0x140517980 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x1405799D0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x140579B20 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x140579B4C (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     IoFreeMapRegistersThunk @ 0x140579C10 (IoFreeMapRegistersThunk.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x140588D7C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV3 @ 0x140783334 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140783920 (HalGetAdapterV2.c)
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
