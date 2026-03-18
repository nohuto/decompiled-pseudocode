/*
 * XREFs of RtlDecompressBufferProgress @ 0x140617CB8
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140BFA2A4 (PopDecompressHiberBlocks.c)
 * Callees:
 *     RtlDecompressBufferXpressHuffProgress @ 0x1406238D0 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x140623F10 (RtlDecompressBufferXpressLzProgress.c)
 *     RtlDecompressBufferLz4Progress @ 0x140624E6C (RtlDecompressBufferLz4Progress.c)
 */

__int64 __fastcall RtlDecompressBufferProgress(
        char a1,
        void *a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  switch ( a1 )
  {
    case 3:
      return RtlDecompressBufferXpressLzProgress((_DWORD)a2, a3, a4, a5, a6, a8, a9);
    case 4:
      return RtlDecompressBufferXpressHuffProgress((_DWORD)a2, a3, a4, a5, a6, a7, a8, a9, 4096);
    case 6:
      return RtlDecompressBufferLz4Progress(a2, a6, a8, a9);
  }
  return 3221226079LL;
}
