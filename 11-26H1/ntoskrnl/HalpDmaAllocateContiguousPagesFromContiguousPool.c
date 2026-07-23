/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1403592EC
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407854E0 (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x140359340 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14035E758 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140511E84 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
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
