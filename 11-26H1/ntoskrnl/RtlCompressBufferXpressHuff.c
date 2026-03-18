/*
 * XREFs of RtlCompressBufferXpressHuff @ 0x140400DB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompressBufferXpressHuffMax @ 0x1403FFD60 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x140400E70 (RtlCompressBufferXpressHuffStandard.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuff(
        __int16 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8)
{
  if ( !a1 )
    return RtlCompressBufferXpressHuffStandard(
             a2,
             a3,
             a4,
             a5,
             (__int64)a7,
             (a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL,
             0LL,
             0LL,
             a3);
  if ( a1 == 256 )
    return RtlCompressBufferXpressHuffMax(a2, a3, a4, a5, a7, (char *)((a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL), 0LL, 0LL, a3);
  return 3221225659LL;
}
