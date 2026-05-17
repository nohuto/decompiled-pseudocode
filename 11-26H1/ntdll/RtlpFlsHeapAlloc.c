/*
 * XREFs of RtlpFlsHeapAlloc @ 0x1800937F8
 * Callers:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x1800931A8 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK.c)
 *     RtlFlsSetValue @ 0x180093500 (RtlFlsSetValue.c)
 *     RtlpFlsSetValue @ 0x180093690 (RtlpFlsSetValue.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 */

__int64 __fastcall RtlpFlsHeapAlloc(unsigned int a1)
{
  _DWORD *ProcessHeap; // r9
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( ProcessHeap[4] != -571548178 )
    return RtlAllocateHeap_0();
  v3 = *(_OWORD *)ProcessHeap;
  return RtlpHpMetadataAlloc(a1, a1, 2, &v3);
}
