/*
 * XREFs of RtlpHpVaMgrRangeFind @ 0x140352E90
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x140352C2C (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x140352638 (RtlSparseArrayElementAllocated.c)
 */

unsigned __int64 __fastcall RtlpHpVaMgrRangeFind(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, _QWORD *a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rbp
  int v9; // ecx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v13; // r9
  int v14; // r11d
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  _QWORD **v18; // rcx
  unsigned __int64 v19; // rax
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
        goto LABEL_11;
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
LABEL_11:
  if ( a3 > 1u )
  {
    v13 = *(_QWORD *)(a1 + 24);
    v14 = *(_DWORD *)(v13 + 24);
    v15 = *(_QWORD *)(v13 + 40);
    v16 = a3 - 1LL;
    while ( 1 )
    {
      v17 = (v5 - v15) >> v14;
      if ( a3 + v17 - (v16 & (v17 + a3 - 1LL)) - 1 + v8 <= v17 + *(unsigned __int16 *)(v5 + 24) )
        break;
      v18 = *(_QWORD ***)(v5 + 8);
      v19 = v5;
      if ( v18 )
      {
        v5 = *(_QWORD *)(v5 + 8);
        for ( i = *v18; i; i = (_QWORD *)*i )
          v5 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v5 || *(_QWORD *)v5 == v19 )
            break;
          v19 = v5;
        }
      }
      if ( !v5 )
        return v5;
    }
    *a4 = RtlSparseArrayElementAllocated(v13 + 16, a3 + ((v5 - v15) >> v14) - (v16 & (v17 + a3 - 1LL)) - 1);
  }
  else
  {
    *a4 = v5;
  }
  return v5;
}
