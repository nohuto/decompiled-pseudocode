/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x140440B80
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x14035AEF0 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x14035B580 (HalPutScatterGatherListV2.c)
 *     IopMapTransfer @ 0x14035C290 (IopMapTransfer.c)
 *     IoFlushAdapterBuffersV2 @ 0x14035C710 (IoFlushAdapterBuffersV2.c)
 *     HalFlushAdapterBuffersEx @ 0x14043EEB0 (HalFlushAdapterBuffersEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14043F81C (HalpDmaCheckMdlAccessibility.c)
 *     IoMapTransferInternal @ 0x14043F90C (IoMapTransferInternal.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x14043FE38 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404402F0 (HalpDmaFlushScatterTransferV3.c)
 *     HalGetDmaTransferInfoInternal @ 0x140440890 (HalGetDmaTransferInfoInternal.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140440BB4 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x140441650 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x14058970C (HalpFlushMapBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaGetAdapterCacheAlignment(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 156) == 2 )
    return 1LL;
  result = (unsigned int)HalpCoreDmaAlignment;
  if ( *(_BYTE *)(a1 + 445) )
    return 1LL;
  return result;
}
