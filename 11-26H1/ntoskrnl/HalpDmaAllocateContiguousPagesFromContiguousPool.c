/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14035754C
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407829AC (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1403575A0 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14035C9B8 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140518414 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 */

__int64 HalpDmaAllocateContiguousPagesFromContiguousPool()
{
  __int64 v0; // rcx
  __int64 v1; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion() == 2 )
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV2(v0, v1);
  else
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v0, v1);
}
