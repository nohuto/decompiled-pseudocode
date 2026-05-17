/*
 * XREFs of Xp10ScatteredReadBytes @ 0x1800FA940
 * Callers:
 *     Xp10ReadMtfHeader @ 0x1800F95EC (Xp10ReadMtfHeader.c)
 *     RtlDecompressBuffer2Xp10 @ 0x1800F9768 (RtlDecompressBuffer2Xp10.c)
 *     Xp10ReadAndDecodeHuffmanTables @ 0x1800F99B8 (Xp10ReadAndDecodeHuffmanTables.c)
 *     Xp10ExecuteHuffmanDecode @ 0x1800FA190 (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ScatteredBitBufferReadBytes @ 0x180121128 (Xp10ScatteredBitBufferReadBytes.c)
 *     Xp10Compute2Crc32 @ 0x180151E94 (Xp10Compute2Crc32.c)
 *     Xp10Compute2Crc64 @ 0x180151F9C (Xp10Compute2Crc64.c)
 * Callees:
 *     Xp10ScatteredNextBuffer @ 0x180122E64 (Xp10ScatteredNextBuffer.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall Xp10ScatteredReadBytes(__int64 a1, char *a2, int a3)
{
  unsigned int v6; // edi
  size_t v7; // rbx

  v6 = 0;
  do
  {
    v7 = a3 - v6;
    if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 <= v7 )
      v7 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    memmove(a2, *(const void **)a1, v7);
    *(_QWORD *)a1 += v7;
    v6 += v7;
    a2 += v7;
  }
  while ( v6 != a3 && (unsigned int)Xp10ScatteredNextBuffer(a1) );
  return v6;
}
