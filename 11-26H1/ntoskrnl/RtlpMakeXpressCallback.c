/*
 * XREFs of RtlpMakeXpressCallback @ 0x140401B40
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x1403FFD60 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzStandard @ 0x140400610 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x140400E70 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x140401EA0 (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1406238D0 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x140623F10 (RtlDecompressBufferXpressLzProgress.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall RtlpMakeXpressCallback(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
