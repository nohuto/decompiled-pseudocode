/*
 * XREFs of RtlpCollectFreeBlocks @ 0x180002140
 * Callers:
 *     RtlpFlushHeap @ 0x1800020DC (RtlpFlushHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     RtlpDecommitBlock @ 0x180002230 (RtlpDecommitBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 */

void __fastcall RtlpCollectFreeBlocks(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  unsigned __int16 v4; // ax
  char v5; // cl

  v1 = a1 + 336;
  v2 = *(_QWORD *)(a1 + 344);
  while ( v2 != v1 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v2 - 8) ^= *(_DWORD *)(a1 + 136);
      if ( HIBYTE(*(_DWORD *)(v2 - 8)) != ((unsigned __int8)*(_DWORD *)(v2 - 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v2 - 8)) ^ HIWORD(*(_DWORD *)(v2 - 8)))) )
        RtlpAnalyzeHeapFailure(a1, v2 - 16);
    }
    v4 = *(_WORD *)(v2 - 8);
    if ( v4 <= 0x100u )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v2 - 5) = v4 ^ *(_BYTE *)(v2 - 6) ^ HIBYTE(v4);
        *(_DWORD *)(v2 - 8) ^= *(_DWORD *)(a1 + 136);
      }
      return;
    }
    v5 = *(_BYTE *)(v2 - 6);
    if ( (v5 & 8) != 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v2 - 5) = HIBYTE(v4) ^ v5 ^ v4;
        *(_DWORD *)(v2 - 8) ^= *(_DWORD *)(a1 + 136);
      }
      v2 = *(_QWORD *)(v2 + 8);
    }
    else
    {
      RtlpDecommitBlock(a1);
      v2 = *(_QWORD *)(v2 + 8);
    }
  }
}
