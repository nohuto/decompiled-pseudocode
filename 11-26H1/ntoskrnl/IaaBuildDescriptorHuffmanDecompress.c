/*
 * XREFs of IaaBuildDescriptorHuffmanDecompress @ 0x1406E585C
 * Callers:
 *     AccelpSiovIaaCompressionDecompression @ 0x1406E3F00 (AccelpSiovIaaCompressionDecompression.c)
 * Callees:
 *     IaaBuildDescriptorCommon @ 0x1404B9304 (IaaBuildDescriptorCommon.c)
 */

__int64 __fastcall IaaBuildDescriptorHuffmanDecompress(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        char a8,
        char a9,
        char a10,
        unsigned __int8 a11,
        unsigned __int8 a12,
        int a13,
        char a14,
        char a15)
{
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 result; // rax

  IaaBuildDescriptorCommon(66, a1, a2, a12, a13, a14, a15);
  *(_BYTE *)(v18 + 6) = *(_BYTE *)(v18 + 6) & 0xFC | 1;
  *(_WORD *)(v16 + 38) = ((a9 & 7) << 6) | *(_WORD *)(v16 + 38) & 0xFE1F | (32 * (a8 & 1)) & 0x3F | 3;
  if ( a10 )
  {
    *(_QWORD *)(v17 + 184) = a11;
    *(_BYTE *)(v17 + 440) = a10;
  }
  *(_QWORD *)(v16 + 16) = a6;
  *(_DWORD *)(v16 + 32) = a7;
  result = a5;
  *(_DWORD *)(v16 + 48) = a5;
  *(_QWORD *)(v16 + 24) = a4;
  *(_QWORD *)(v16 + 40) = v17;
  *(_DWORD *)(v16 + 52) = 5376;
  return result;
}
