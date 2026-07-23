/*
 * XREFs of RtlpHpVaMgrRangeFind @ 0x18006FAD4
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x18006F7E8 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x1800706A0 (RtlSparseArrayElementAllocated.c)
 */

unsigned __int64 __fastcall RtlpHpVaMgrRangeFind(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rsi
  int v9; // ecx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v13; // r9
  __int64 v14; // r11
  unsigned __int64 v15; // rdx
  _QWORD **v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD *i; // rcx

  v5 = *(_QWORD *)(a1 + 8);
  v8 = a2;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v5 )
    v5 ^= a1 + 8;
  v9 = *(_BYTE *)(a1 + 16) & 1;
  v10 = 0LL;
  while ( v5 )
  {
    if ( a2 < *(_WORD *)(v5 + 24) )
    {
      v11 = *(_QWORD *)v5;
      v10 = v5;
    }
    else
    {
      if ( a2 <= *(_WORD *)(v5 + 24) )
        goto LABEL_10;
      v11 = *(_QWORD *)(v5 + 8);
    }
    if ( v9 && v11 )
      v5 ^= v11;
    else
      v5 = v11;
  }
  v5 = v10;
  if ( !v10 )
    return 0LL;
LABEL_10:
  if ( a3 > 1u )
  {
    v13 = *(_QWORD *)(a1 + 24);
    v14 = a3 - 1LL;
    while ( 1 )
    {
      v15 = (v5 - *(_QWORD *)(v13 + 40)) >> *(_DWORD *)(v13 + 24);
      if ( a3 + v15 - (v14 & (v15 + a3 - 1LL)) - 1 + v8 <= v15 + *(unsigned __int16 *)(v5 + 24) )
        break;
      v16 = *(_QWORD ***)(v5 + 8);
      v17 = v5;
      if ( v16 )
      {
        v5 = *(_QWORD *)(v5 + 8);
        for ( i = *v16; i; i = (_QWORD *)*i )
          v5 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v5 || *(_QWORD *)v5 == v17 )
            break;
          v17 = v5;
        }
      }
      if ( !v5 )
        return v5;
    }
    *a4 = RtlSparseArrayElementAllocated(
            v13 + 16,
            a3 + ((v5 - *(_QWORD *)(v13 + 40)) >> *(_DWORD *)(v13 + 24)) - (v14 & (v15 + a3 - 1LL)) - 1);
  }
  else
  {
    *a4 = v5;
  }
  return v5;
}
