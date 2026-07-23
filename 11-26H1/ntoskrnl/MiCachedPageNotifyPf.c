/*
 * XREFs of MiCachedPageNotifyPf @ 0x140A69B20
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 *     RtlClearAllBitsEx @ 0x14047CE30 (RtlClearAllBitsEx.c)
 */

void __fastcall MiCachedPageNotifyPf(_RTL_BITMAP_EX *a1)
{
  __int64 v2; // rsi

  if ( a1[8].SizeOfBitMap )
  {
    v2 = *a1[1].Buffer;
    a1[10].SizeOfBitMap = MiReferenceControlAreaFile(v2);
    MiWalkAllBitmapRanges(&a1[7].SizeOfBitMap, (__int64)MiNotifyPfCheckCachedPages, (__int64)a1);
    MiDereferenceControlAreaFile(v2, a1[10].SizeOfBitMap);
    a1[10].SizeOfBitMap = 0LL;
    RtlClearAllBitsEx(a1 + 7);
    a1[8].SizeOfBitMap = 0LL;
  }
}
