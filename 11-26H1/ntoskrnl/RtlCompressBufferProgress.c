/*
 * XREFs of RtlCompressBufferProgress @ 0x14061AAD0
 * Callers:
 *     PopAddPagesToCompressedPageSet @ 0x140BFF9B4 (PopAddPagesToCompressedPageSet.c)
 * Callees:
 *     RtlCompressBufferXpressHuffMax @ 0x1403F1B00 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzStandard @ 0x1403F23B0 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1403F2C10 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x1403F3C50 (RtlCompressBufferXpressLzMax.c)
 *     LZ4_compress_fast_extState_progress @ 0x14062C938 (LZ4_compress_fast_extState_progress.c)
 */

__int64 __fastcall RtlCompressBufferProgress(
        __int16 a1,
        _BYTE *a2,
        unsigned int a3,
        int *a4,
        __int64 a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int16 v9; // ax
  __int16 v10; // cx
  unsigned int v12; // ebx
  int v13; // eax

  v9 = (unsigned __int8)a1;
  v10 = a1 & 0xFF00;
  if ( v9 == 3 )
  {
    if ( !v10 )
      return RtlCompressBufferXpressLzStandard(
               a2,
               a3,
               a4,
               0x10000u,
               a6,
               (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL,
               a8,
               a9,
               0x1000u);
    if ( v10 == 256 )
      return RtlCompressBufferXpressLzMax(
               (unsigned __int64)a2,
               a3,
               (__int64)a4,
               0x10000u,
               a6,
               (_QWORD *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               0x1000u);
    return 3221226079LL;
  }
  if ( v9 == 4 )
  {
    if ( !v10 )
      return RtlCompressBufferXpressHuffStandard(
               (unsigned __int64)a2,
               a3,
               (__int64)a4,
               0x10000u,
               a6,
               (unsigned __int8 *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               0x1000u);
    if ( v10 == 256 )
      return RtlCompressBufferXpressHuffMax(
               (unsigned __int64)a2,
               a3,
               (__int64)a4,
               0x10000u,
               a6,
               (char *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               0x1000u);
    return 3221226079LL;
  }
  if ( v9 != 6 )
    return 3221226079LL;
  v12 = 0;
  if ( v10 )
    return 3221226079LL;
  if ( (a7 & 7) != 0 )
  {
    return (unsigned int)-1073740684;
  }
  else
  {
    v13 = LZ4_compress_fast_extState_progress(a7, a2, a4, a3);
    if ( v13 <= 0 )
      return (unsigned int)-1073741789;
    else
      *a6 = v13;
  }
  return v12;
}
