/*
 * XREFs of RtlpHpVaMgrRangeCreate @ 0x140353268
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x140352C2C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140353158 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitsClear @ 0x1403501DC (RtlCSparseBitmapBitsClear.c)
 *     RtlSparseArrayElementAllocate @ 0x140353358 (RtlSparseArrayElementAllocate.c)
 */

_BYTE *__fastcall RtlpHpVaMgrRangeCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r14
  _BYTE *v7; // rax
  _BYTE *v8; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // rax

  if ( (*(_BYTE *)a3 & 4) != 0 )
    v6 = *(_QWORD *)(a3 + 24);
  else
    v6 = *(unsigned __int16 *)(a3 + 24);
  v7 = (_BYTE *)RtlSparseArrayElementAllocate(
                  *(_QWORD *)(a1 + 24) + 16LL,
                  (unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20);
  v8 = v7;
  if ( v7 )
  {
    if ( (*v7 & 4) == 0 )
    {
      v10 = a2 + 0x100000;
      *(_BYTE *)a3 |= 2u;
      v11 = 1LL;
      *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 44);
      *(_OWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)(a3 + 24) = 2309737967LL;
      while ( v11 < v6 )
      {
        if ( !RtlSparseArrayElementAllocate(
                *(_QWORD *)(a1 + 24) + 16LL,
                (unsigned __int64)(v10 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20) )
          goto LABEL_11;
        ++v11;
        v10 += 0x100000LL;
      }
    }
  }
  else
  {
    v11 = 0LL;
    v8 = 0LL;
    if ( v6 )
    {
LABEL_11:
      while ( v11 )
      {
        v12 = *(_QWORD *)(a1 + 24);
        RtlCSparseBitmapBitsClear(
          v12 + 32,
          8 * ((unsigned __int64)&v8[-*(_QWORD *)(v12 + 40)] >> *(_DWORD *)(v12 + 24) << *(_DWORD *)(v12 + 24)),
          8 * (1LL << *(_DWORD *)(v12 + 24)));
        v8 += 32;
        --v11;
      }
      return 0LL;
    }
  }
  return v8;
}
