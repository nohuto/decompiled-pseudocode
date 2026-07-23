/*
 * XREFs of RtlpMakeXpressCallback @ 0x1800B7400
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x1800B5AB0 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzStandard @ 0x1800B6440 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1800B6BA0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x180150850 (RtlCompressBufferXpressLzMax.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall RtlpMakeXpressCallback(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
