/*
 * XREFs of HalpDmaNextContiguousPiece @ 0x14035BB44
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x14035AEF0 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x14035B580 (HalPutScatterGatherListV2.c)
 *     IopMapTransfer @ 0x14035C290 (IopMapTransfer.c)
 *     IoFlushAdapterBuffersV2 @ 0x14035C710 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x14043E23C (HalpDmaFlushContiguousTransferV3.c)
 *     IoMapTransferInternal @ 0x14043F90C (IoMapTransferInternal.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404402F0 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140440BB4 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x14044152C (HalpDmaMapContiguousTransferV3.c)
 * Callees:
 *     HalpDmaNextContiguousPieceV2 @ 0x14035BB90 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x14043FE38 (HalpDmaNextContiguousPieceV3.c)
 */

__int64 __fastcall HalpDmaNextContiguousPiece(__int64 a1, int a2, int a3, int a4, char a5, int a6)
{
  if ( *(_DWORD *)(a1 + 156) == 2 )
    return HalpDmaNextContiguousPieceV2(a1, a2, a3, a4, a5, a6);
  else
    return HalpDmaNextContiguousPieceV3(a1, a2, a3, a4, a5, a6);
}
