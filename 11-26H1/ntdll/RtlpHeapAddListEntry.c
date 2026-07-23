/*
 * XREFs of RtlpHeapAddListEntry @ 0x18006CAA0
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlpInitializeUCRIndex @ 0x18006C558 (RtlpInitializeUCRIndex.c)
 *     RtlpPopulateListIndex @ 0x18006C8A8 (RtlpPopulateListIndex.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     RtlZeroHeap @ 0x180146460 (RtlZeroHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapAddListEntry(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 result; // rax
  _DWORD *v13; // r8
  int v14; // edx
  __int16 v15; // r15
  int v16; // ecx

  ++*(_DWORD *)(a2 + 16);
  v8 = a5 - *(_DWORD *)(a2 + 24);
  v9 = 2 * v8;
  if ( !*(_DWORD *)(a2 + 12) )
    v9 = v8;
  v10 = 8 * v9;
  v11 = *(_QWORD *)(8 * v9 + *(_QWORD *)(a2 + 48));
  result = (unsigned int)(*(_DWORD *)(a2 + 8) - 1);
  if ( a5 == (_DWORD)result )
    ++*(_DWORD *)(a2 + 20);
  if ( !v11 )
    goto LABEL_6;
  if ( a3 )
  {
    v14 = *(_DWORD *)(v11 - 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v14 ^= *(_DWORD *)(a1 + 136);
      v15 = v14;
      if ( HIBYTE(v14) != ((unsigned __int8)v14 ^ (unsigned __int8)(BYTE1(v14) ^ BYTE2(v14))) )
      {
        RtlpLogHeapFailure(3, a1, v11 - 16, 0, 0LL, 0LL);
        LOWORD(v14) = v15;
      }
    }
    result = (unsigned __int16)v14;
    v16 = a6 - (unsigned __int16)v14;
  }
  else
  {
    v16 = a6 - *(_DWORD *)(v11 + 40);
  }
  if ( v16 <= 0 )
  {
LABEL_6:
    result = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(v10 + result) = a4;
    if ( !v11 )
    {
      v13 = (_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * ((unsigned __int64)v8 >> 5));
      result = (unsigned int)(1 << (v8 & 0x1F));
      *v13 |= result;
    }
  }
  return result;
}
