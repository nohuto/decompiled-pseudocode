/*
 * XREFs of AccelpSiovIaaCompressionDecompression @ 0x1406E3F00
 * Callers:
 *     AccelpSiovIaaOperationHandler @ 0x1406E4274 (AccelpSiovIaaOperationHandler.c)
 * Callees:
 *     IaaBuildDescriptorCommon @ 0x1404B9304 (IaaBuildDescriptorCommon.c)
 *     AccelpPrepareCompressionBufferForHeader @ 0x1406E39C8 (AccelpPrepareCompressionBufferForHeader.c)
 *     IaaBuildDescriptorFixedCompress @ 0x1406E556C (IaaBuildDescriptorFixedCompress.c)
 *     IaaBuildDescriptorHuffmanCompress @ 0x1406E5730 (IaaBuildDescriptorHuffmanCompress.c)
 *     IaaBuildDescriptorHuffmanDecompress @ 0x1406E585C (IaaBuildDescriptorHuffmanDecompress.c)
 *     IaapSetAecsDecompressionHuffmanTable @ 0x1406E5B68 (IaapSetAecsDecompressionHuffmanTable.c)
 */

__int64 __fastcall AccelpSiovIaaCompressionDecompression(__int64 a1, char a2, int a3, char a4, char a5)
{
  int v5; // r11d
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v12; // r10
  unsigned int v13; // esi
  int v14; // ecx
  _DWORD *v15; // rdx
  __int64 v16; // rdi
  int v17; // ecx
  int v18; // ecx
  char *v19; // rcx
  int v20; // ebx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // r11

  v5 = *(_DWORD *)a1;
  v7 = *(_DWORD *)(a1 + 104);
  v8 = 0LL;
  v12 = a1 + 88;
  if ( !v7 )
    goto LABEL_5;
  if ( *(_DWORD *)(*(_QWORD *)v12 + 16LL) == v7 )
  {
    v13 = AccelpPrepareCompressionBufferForHeader(a1);
    if ( (v13 & 0x80000000) != 0 )
      return v13;
LABEL_5:
    v14 = *(_DWORD *)(a1 + 96);
    v15 = (_DWORD *)(a1 + 100);
    if ( v14 == 1 && *v15 == 1 )
    {
      v16 = v12;
    }
    else
    {
      v8 = *(_QWORD *)(*(_QWORD *)v12 + 80LL);
      if ( !v8 )
        return (unsigned int)-1073741811;
      v16 = a1 + 88;
    }
    v13 = 0;
    if ( v5 == 512 )
    {
      v17 = v14 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          IaaBuildDescriptorHuffmanCompress(
            *(_QWORD *)(a1 + 32),
            *(_QWORD *)(a1 + 40),
            *(_QWORD *)(*(_QWORD *)v12 + 72LL),
            v8 + 12616,
            *(_QWORD *)(a1 + 56),
            *(_DWORD *)(a1 + 64),
            *(_QWORD *)(a1 + 72),
            *(_DWORD *)(a1 + 80),
            **(_BYTE **)(a1 + 112),
            a2,
            a3,
            a4,
            a5);
          return v13;
        }
        return (unsigned int)-1073741811;
      }
      if ( *v15 == 1 )
      {
        IaaBuildDescriptorFixedCompress(
          *(_QWORD *)(a1 + 32),
          *(_QWORD *)(a1 + 40),
          *(_QWORD *)(*(_QWORD *)v16 + 72LL),
          *(_QWORD *)(a1 + 56),
          *(_DWORD *)(a1 + 64),
          *(_QWORD *)(a1 + 72),
          *(_DWORD *)(a1 + 80),
          a2,
          a3,
          a4,
          a5);
        return v13;
      }
    }
    else
    {
      v18 = v14 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v19 = *(char **)(a1 + 120);
          IaaBuildDescriptorHuffmanDecompress(
            *(_QWORD *)(a1 + 32),
            *(_QWORD *)(a1 + 40),
            *(_QWORD *)(*(_QWORD *)v16 + 72LL),
            *(_QWORD *)(a1 + 56),
            *(_DWORD *)(a1 + 64),
            *(_QWORD *)(a1 + 72),
            *(_DWORD *)(a1 + 80),
            *v19,
            v19[1],
            v19[2],
            v19[3],
            a2,
            a3,
            a4,
            a5);
          IaapSetAecsDecompressionHuffmanTable(
            v8 + 12616,
            *(_QWORD *)(*(_QWORD *)v16 + 72LL),
            v8 + 15176,
            v8 + 16200,
            v8 + 17224);
          return v13;
        }
      }
      else if ( *v15 == 1 )
      {
        v20 = *(_DWORD *)(a1 + 80);
        v21 = *(_DWORD *)(a1 + 64);
        IaaBuildDescriptorCommon(66, *(int **)(a1 + 32), *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
        *(_WORD *)(v22 + 38) |= 0x1Fu;
        *(_QWORD *)(v22 + 16) = v23;
        *(_DWORD *)(v22 + 32) = v20;
        *(_QWORD *)(v22 + 24) = v24;
        *(_DWORD *)(v22 + 48) = v21;
        return v13;
      }
    }
    return (unsigned int)-1073741217;
  }
  return (unsigned int)-1073741811;
}
