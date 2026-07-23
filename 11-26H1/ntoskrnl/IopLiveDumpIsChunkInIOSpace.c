/*
 * XREFs of IopLiveDumpIsChunkInIOSpace @ 0x1405D29BC
 * Callers:
 *     IopLiveDumpShouldCheckChunkCRC @ 0x1403460B4 (IopLiveDumpShouldCheckChunkCRC.c)
 *     IopLiveDumpBufferDumpData @ 0x1405D0720 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     IopLiveDumpIsChunkInIOSpaceBuffer @ 0x1405D29F8 (IopLiveDumpIsChunkInIOSpaceBuffer.c)
 */

__int64 __fastcall IopLiveDumpIsChunkInIOSpace(__int64 a1)
{
  __int64 v1; // r11
  unsigned int v2; // r10d

  if ( (unsigned int)IopLiveDumpIsChunkInIOSpaceBuffer(a1 + 160)
    || (unsigned int)IopLiveDumpIsChunkInIOSpaceBuffer(v1 + 120) )
  {
    return 1;
  }
  return v2;
}
