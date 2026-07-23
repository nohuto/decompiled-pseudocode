/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x180010BC0
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180010020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 *     RtlpPopulateListIndex @ 0x18006C8A8 (RtlpPopulateListIndex.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x180103CD4 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180146460 (RtlZeroHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapRemoveListEntry(__int64 a1, __int64 a2, char a3, __int64 *a4, unsigned int a5, int a6)
{
  unsigned int v8; // edi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // r15
  __int64 result; // rax
  __int64 v14; // rsi
  int v15; // edx
  __int16 v16; // bp
  int v17; // ecx

  v8 = a5 - *(_DWORD *)(a2 + 24);
  v9 = *(_QWORD *)(a2 + 48);
  v10 = 2 * v8;
  if ( !*(_DWORD *)(a2 + 12) )
    v10 = v8;
  v11 = *(__int64 **)(v9 + 8 * v10);
  v12 = 8 * v10;
  result = *(unsigned int *)(a2 + 8);
  --*(_DWORD *)(a2 + 16);
  if ( a5 == (_DWORD)result - 1 )
    --*(_DWORD *)(a2 + 20);
  if ( v11 == a4 )
  {
    v14 = *a4;
    if ( !*(_QWORD *)a2 )
      result = (unsigned int)(result - 1);
    if ( a5 >= (unsigned int)result )
    {
      if ( v14 == *(_QWORD *)(a2 + 32) )
      {
        *(_QWORD *)(v9 + v12) = 0LL;
        result = *(_QWORD *)(a2 + 40);
        *(_DWORD *)(result + 4 * ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
      }
      else
      {
        *(_QWORD *)(v9 + v12) = v14;
      }
    }
    else
    {
      if ( v14 == *(_QWORD *)(a2 + 32) )
        goto LABEL_16;
      if ( a3 )
      {
        v15 = *(_DWORD *)(v14 - 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v15 ^= *(_DWORD *)(a1 + 136);
          v16 = v15;
          if ( HIBYTE(v15) != ((unsigned __int8)v15 ^ (unsigned __int8)(BYTE1(v15) ^ BYTE2(v15))) )
          {
            RtlpLogHeapFailure(3, a1, v14 - 16, 0, 0LL, 0LL);
            LOWORD(v15) = v16;
          }
        }
        v17 = a6 - (unsigned __int16)v15;
      }
      else
      {
        v17 = a6 - *(_DWORD *)(v14 + 40);
      }
      if ( v17 )
      {
LABEL_16:
        *(_QWORD *)(v12 + *(_QWORD *)(a2 + 48)) = 0LL;
        result = *(_QWORD *)(a2 + 40);
        *(_DWORD *)(result + 4 * ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
      }
      else
      {
        result = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(v12 + result) = v14;
      }
    }
  }
  return result;
}
