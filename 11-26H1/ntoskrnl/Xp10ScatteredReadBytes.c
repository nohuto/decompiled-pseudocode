/*
 * XREFs of Xp10ScatteredReadBytes @ 0x1408148E8
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x14080FFC0 (RtlDecompressBuffer2Xp10.c)
 *     Xp10Compute2Crc32 @ 0x140811CBC (Xp10Compute2Crc32.c)
 *     Xp10Compute2Crc64 @ 0x140811DC4 (Xp10Compute2Crc64.c)
 *     Xp10ExecuteHuffmanDecode @ 0x140812000 (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ReadAndDecodeHuffmanTables @ 0x140813A6C (Xp10ReadAndDecodeHuffmanTables.c)
 *     Xp10ReadMtfHeader @ 0x14081430C (Xp10ReadMtfHeader.c)
 *     Xp10ScatteredBitBufferReadBytes @ 0x140814484 (Xp10ScatteredBitBufferReadBytes.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     Xp10ScatteredNextBuffer @ 0x140814894 (Xp10ScatteredNextBuffer.c)
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
  while ( v6 != a3 && (unsigned int)Xp10ScatteredNextBuffer((_QWORD *)a1) );
  return v6;
}
