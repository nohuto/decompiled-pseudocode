/*
 * XREFs of IopLiveDumpShouldCheckChunkCRC @ 0x140344034
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x140343D08 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpBufferDumpData @ 0x1405CDF10 (IopLiveDumpBufferDumpData.c)
 *     IopLiveDumpGetCapturePages @ 0x1405CF8E0 (IopLiveDumpGetCapturePages.c)
 * Callees:
 *     IopLiveDumpIsChunkInIOSpace @ 0x1405D01AC (IopLiveDumpIsChunkInIOSpace.c)
 */

bool __fastcall IopLiveDumpShouldCheckChunkCRC(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_QWORD *)(a1 + 200) )
    return (unsigned int)IopLiveDumpIsChunkInIOSpace() != 0;
  return v1;
}
