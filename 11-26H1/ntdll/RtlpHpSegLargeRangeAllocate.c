/*
 * XREFs of RtlpHpSegLargeRangeAllocate @ 0x18015816C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1800715F0 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeSplit @ 0x180071970 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18008B1C8 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18008B350 (RtlpHpSegFreeRangeRemove.c)
 */

unsigned __int64 __fastcall RtlpHpSegLargeRangeAllocate(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  unsigned int v6; // r10d
  char v8; // cl
  unsigned int v9; // r9d
  unsigned __int8 v10; // al
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rdx
  int v13; // ebx
  __int16 *v14; // r8
  unsigned __int64 j; // rcx
  _QWORD **v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD *i; // rcx
  int v20; // ebx
  unsigned __int64 v21; // rbx

  v6 = a3 << *(_BYTE *)(a1 + 8);
  while ( 1 )
  {
    v8 = *(_BYTE *)(a1 + 8);
    v9 = *(unsigned __int8 *)(a2 + 31) << v8;
    if ( !a4 )
      goto LABEL_7;
    v10 = *(_BYTE *)(a2 + 30);
    if ( v10 <= 2u )
      break;
LABEL_14:
    v16 = *(_QWORD ***)(a2 + 8);
    v17 = a2;
    if ( v16 )
    {
      a2 = *(_QWORD *)(a2 + 8);
      for ( i = *v16; i; i = (_QWORD *)*i )
        a2 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        a2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !a2 || *(_QWORD *)a2 == v17 )
          break;
        v17 = a2;
      }
    }
    if ( !a2 )
      return 0LL;
  }
  if ( !v10 && (v6 <= (v9 & 0x1FFFFF) || (v9 & 0x1FFFFF) == 0) )
  {
    v20 = 0;
LABEL_26:
    RtlpHpSegFreeRangeRemove(a1, a2);
    goto LABEL_27;
  }
LABEL_7:
  v11 = (a2 & *(_QWORD *)a1) + ((unsigned int)((__int64)(a2 - (a2 & *(_QWORD *)a1)) >> 5) << v8);
  v12 = v11 + v9;
  v13 = v11;
  v14 = (__int16 *)(*(_QWORD *)((v11 & *(_QWORD *)a1) + 0x18) + 2 * ((v11 - (v11 & *(_QWORD *)a1)) >> 21));
  for ( j = (v11 + 0x200000) & 0xFFFFFFFFFFE00000uLL; ; j += 0x200000LL )
  {
    if ( *v14 < 0 )
    {
      if ( j >= v12 )
        j = v11 + v9;
      if ( (int)j - v13 >= v6 )
        break;
    }
    if ( j >= v12 )
      goto LABEL_14;
    v13 = j;
    ++v14;
  }
  v20 = v13 - v11;
  if ( a4 )
    goto LABEL_26;
LABEL_27:
  if ( v20 )
  {
    LOBYTE(j) = *(_BYTE *)(a1 + 8);
    v21 = RtlpHpSegPageRangeSplit(j, a2, v20 << j);
    RtlpHpSegFreeRangeInsert(a1, a2, 0);
    return v21;
  }
  return a2;
}
