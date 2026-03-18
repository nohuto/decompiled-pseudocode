/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPool @ 0x140357080
 * Callers:
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140356984 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140782CB0 (HalpDmaAllocateLocalScatterPool.c)
 * Callees:
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x1403572E0 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaGetMasterAdapterVersion @ 0x14035943C (HalpDmaGetMasterAdapterVersion.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x140518290 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d

  if ( (unsigned int)HalpDmaGetMasterAdapterVersion(a2) == 2 )
    return HalpDmaAllocateScatterPagesFromContiguousPoolV2(v6, v9, v7, v8, a5, a6);
  else
    return HalpDmaAllocateScatterPagesFromContiguousPoolV3(v6, v9, v7, v8, a5, a6);
}
