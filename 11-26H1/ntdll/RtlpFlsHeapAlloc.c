/*
 * XREFs of RtlpFlsHeapAlloc @ 0x180072AB8
 * Callers:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x180072708 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK.c)
 *     RtlFlsSetValue @ 0x1800727C0 (RtlFlsSetValue.c)
 *     RtlpFlsSetValue @ 0x180072950 (RtlpFlsSetValue.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18002DB90 (RtlpHpMetadataAlloc.c)
 */

PVOID __fastcall RtlpFlsHeapAlloc(SIZE_T Size)
{
  __int128 *ProcessHeap; // r9
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  ProcessHeap = (__int128 *)NtCurrentPeb()->ProcessHeap;
  if ( *((_DWORD *)ProcessHeap + 4) != -571548178 )
    return RtlAllocateHeap_0(ProcessHeap, 0, (unsigned int)Size);
  v3 = *ProcessHeap;
  return (PVOID)RtlpHpMetadataAlloc((unsigned int)Size, (unsigned int)Size, 2, &v3);
}
