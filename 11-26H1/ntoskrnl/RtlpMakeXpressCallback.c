/*
 * XREFs of RtlpMakeXpressCallback @ 0x1403F38F0
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x1403F1B00 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzStandard @ 0x1403F23B0 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1403F2C10 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x1403F3C50 (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x140626920 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x140626F60 (RtlDecompressBufferXpressLzProgress.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
