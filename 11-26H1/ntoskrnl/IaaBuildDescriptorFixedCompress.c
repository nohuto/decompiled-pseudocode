/*
 * XREFs of IaaBuildDescriptorFixedCompress @ 0x1406E556C
 * Callers:
 *     AccelpSiovIaaCompressionDecompression @ 0x1406E3F00 (AccelpSiovIaaCompressionDecompression.c)
 * Callees:
 *     IaaBuildDescriptorCommon @ 0x1404B9304 (IaaBuildDescriptorCommon.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IaaBuildDescriptorFixedCompress(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned __int8 a8,
        int a9,
        char a10,
        char a11)
{
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // r10
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int128 v19; // xmm1
  __int64 result; // rax

  IaaBuildDescriptorCommon(67, a1, a2, a8, a9, a10, a11);
  v13 = *(_BYTE *)(v12 + 6) & 0xFD;
  *(_QWORD *)(v12 + 16) = v14;
  *(_QWORD *)(v12 + 40) = a3;
  *(_BYTE *)(v12 + 6) = v13 | 1;
  v15 = *(_WORD *)(v12 + 38) & 0xFFF7;
  *(_DWORD *)(v12 + 52) = 1568;
  *(_WORD *)(v12 + 38) = v15 | 6;
  *(_DWORD *)(v12 + 32) = a5;
  *(_QWORD *)(v12 + 24) = a6;
  *(_DWORD *)(v12 + 48) = a7;
  memset_0((void *)a3, 0, 0x620uLL);
  v16 = 8LL;
  v17 = a3 + 288;
  v18 = FixedLiteralLengthCodes;
  do
  {
    *(_OWORD *)v17 = *(_OWORD *)v18;
    *(_OWORD *)(v17 + 16) = *((_OWORD *)v18 + 1);
    *(_OWORD *)(v17 + 32) = *((_OWORD *)v18 + 2);
    *(_OWORD *)(v17 + 48) = *((_OWORD *)v18 + 3);
    *(_OWORD *)(v17 + 64) = *((_OWORD *)v18 + 4);
    *(_OWORD *)(v17 + 80) = *((_OWORD *)v18 + 5);
    *(_OWORD *)(v17 + 96) = *((_OWORD *)v18 + 6);
    v17 += 128LL;
    v19 = *((_OWORD *)v18 + 7);
    v18 += 16;
    *(_OWORD *)(v17 - 16) = v19;
    --v16;
  }
  while ( v16 );
  *(_OWORD *)v17 = *(_OWORD *)v18;
  *(_OWORD *)(v17 + 16) = *((_OWORD *)v18 + 1);
  *(_OWORD *)(v17 + 32) = *((_OWORD *)v18 + 2);
  *(_OWORD *)(v17 + 48) = *((_OWORD *)v18 + 3);
  *(_OWORD *)(v17 + 64) = *((_OWORD *)v18 + 4);
  *(_OWORD *)(v17 + 80) = *((_OWORD *)v18 + 5);
  *(_OWORD *)(v17 + 96) = *((_OWORD *)v18 + 6);
  *(_QWORD *)(v17 + 112) = v18[14];
  result = 3LL;
  *(_OWORD *)(a3 + 1440) = FixedDistanceCodes;
  *(_OWORD *)(a3 + 1456) = xmmword_14003BB80;
  *(_OWORD *)(a3 + 1472) = xmmword_14003BB90;
  *(_OWORD *)(a3 + 1488) = xmmword_14003BBA0;
  *(_OWORD *)(a3 + 1504) = xmmword_14003BBB0;
  *(_OWORD *)(a3 + 1520) = xmmword_14003BBC0;
  *(_OWORD *)(a3 + 1536) = xmmword_14003BBD0;
  *(_QWORD *)(a3 + 1552) = 0x2801D0002801CLL;
  *(_BYTE *)(a3 + 32) = 3;
  *(_WORD *)(a3 + 28) = 3;
  return result;
}
