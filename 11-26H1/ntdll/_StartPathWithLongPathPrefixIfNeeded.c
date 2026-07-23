/*
 * XREFs of _StartPathWithLongPathPrefixIfNeeded @ 0x1800E3FF4
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18001D950 (GetOverlayFilePathUsingChecksum.c)
 *     _BuildCumulativeOverlayFilePath @ 0x18001E54C (_BuildCumulativeOverlayFilePath.c)
 * Callees:
 *     memcpy_s @ 0x1801338C0 (memcpy_s.c)
 *     memmove_s @ 0x180133960 (memmove_s.c)
 */

__int64 __fastcall StartPathWithLongPathPrefixIfNeeded(rsize_t SourceSize, rsize_t DestinationSize, char *Destination)
{
  unsigned int v4; // esi

  if ( (unsigned int)DestinationSize <= 0x208 )
    return 0LL;
  v4 = DestinationSize;
  if ( memmove_s(Destination + 8, (unsigned int)DestinationSize - 8LL, Destination, (unsigned int)SourceSize) )
    return 3221225701LL;
  else
    return memcpy_s(Destination, v4, L"\\\\?\\", 8uLL) != 0 ? 0xC00000E5 : 0;
}
