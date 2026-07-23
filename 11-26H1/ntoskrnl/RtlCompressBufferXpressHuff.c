/*
 * XREFs of RtlCompressBufferXpressHuff @ 0x1403F2B50
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompressBufferXpressHuffMax @ 0x1403F1B00 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1403F2C10 (RtlCompressBufferXpressHuffStandard.c)
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
