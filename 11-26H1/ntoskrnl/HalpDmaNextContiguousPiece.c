/*
 * XREFs of HalpDmaNextContiguousPiece @ 0x14035D8E4
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x14035CC90 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x14035D320 (HalPutScatterGatherListV2.c)
 *     IopMapTransfer @ 0x14035E030 (IopMapTransfer.c)
 *     IoFlushAdapterBuffersV2 @ 0x14035E4B0 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x140436D4C (HalpDmaFlushContiguousTransferV3.c)
 *     IoMapTransferInternal @ 0x14043841C (IoMapTransferInternal.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x140438E00 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404396C4 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x14043A03C (HalpDmaMapContiguousTransferV3.c)
 * Callees:
 *     HalpDmaNextContiguousPieceV2 @ 0x14035D930 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x140438948 (HalpDmaNextContiguousPieceV3.c)
 */

__int64 __fastcall HalpDmaNextContiguousPiece(__int64 a1, int a2, int a3, int a4, char a5, int a6)
{
  if ( *(_DWORD *)(a1 + 156) == 2 )
    return HalpDmaNextContiguousPieceV2(a1, a2, a3, a4, a5, a6);
  else
    return HalpDmaNextContiguousPieceV3(a1, a2, a3, a4, a5, a6);
}
