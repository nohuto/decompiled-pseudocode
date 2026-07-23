/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x140439690
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x14035CC90 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x14035D320 (HalPutScatterGatherListV2.c)
 *     IopMapTransfer @ 0x14035E030 (IopMapTransfer.c)
 *     IoFlushAdapterBuffersV2 @ 0x14035E4B0 (IoFlushAdapterBuffersV2.c)
 *     HalFlushAdapterBuffersEx @ 0x1404379C0 (HalFlushAdapterBuffersEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14043832C (HalpDmaCheckMdlAccessibility.c)
 *     IoMapTransferInternal @ 0x14043841C (IoMapTransferInternal.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x140438948 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x140438E00 (HalpDmaFlushScatterTransferV3.c)
 *     HalGetDmaTransferInfoInternal @ 0x1404393A0 (HalGetDmaTransferInfoInternal.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404396C4 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14043A160 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x14058BDDC (HalpFlushMapBuffers.c)
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
