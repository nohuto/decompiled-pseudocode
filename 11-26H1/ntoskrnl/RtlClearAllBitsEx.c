/*
 * XREFs of RtlClearAllBitsEx @ 0x140483500
 * Callers:
 *     MiIdentifyPatchImageDataPages @ 0x140870540 (MiIdentifyPatchImageDataPages.c)
 *     MiCopyToCfgBitMap @ 0x1409C8560 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409C9790 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCachedPageNotifyPf @ 0x140A5CB60 (MiCachedPageNotifyPf.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset_0(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
