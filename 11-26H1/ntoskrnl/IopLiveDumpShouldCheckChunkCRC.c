/*
 * XREFs of IopLiveDumpShouldCheckChunkCRC @ 0x1403460B4
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x140345D88 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpBufferDumpData @ 0x1405D0720 (IopLiveDumpBufferDumpData.c)
 *     IopLiveDumpGetCapturePages @ 0x1405D20F0 (IopLiveDumpGetCapturePages.c)
 * Callees:
 *     IopLiveDumpIsChunkInIOSpace @ 0x1405D29BC (IopLiveDumpIsChunkInIOSpace.c)
 */

bool __fastcall IopLiveDumpShouldCheckChunkCRC(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_QWORD *)(a1 + 200) )
    return (unsigned int)IopLiveDumpIsChunkInIOSpace() != 0;
  return v1;
}
