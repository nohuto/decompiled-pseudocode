/*
 * XREFs of RtlClearAllBitsEx @ 0x14047CE30
 * Callers:
 *     MiIdentifyPatchImageDataPages @ 0x1408768A0 (MiIdentifyPatchImageDataPages.c)
 *     MiCopyToCfgBitMap @ 0x140999540 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14099A770 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCachedPageNotifyPf @ 0x140A69B20 (MiCachedPageNotifyPf.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset_0(
    BitMapHeader->Buffer,
    0,
    4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
