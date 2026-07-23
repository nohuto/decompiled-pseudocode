/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x14034D30C
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1403494AC (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14034D918 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x140518FC4 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x14063C2D4 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x140351280 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  char v6; // al
  _RTL_RB_TREE *v7; // rcx
  __int64 v8; // rdx
  BOOLEAN v9; // r8
  __int64 v10; // rax

  v3 = 0LL;
  if ( !a3 && (*(_BYTE *)(a1 + 13) & 0x10) != 0 && *(unsigned __int8 *)(a2 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    v3 = a2 & *(_QWORD *)a1;
    *(_DWORD *)a2 = -857879297;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
      v6 = RtlpHpSegPageRangeComputeLargePageCost(
             a1,
             (*(_QWORD *)a1 & a2) + ((unsigned int)((a2 - (*(_QWORD *)a1 & a2)) >> 5) << *(_BYTE *)(a1 + 8)),
             *(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8));
    else
      v6 = 4;
    *(_BYTE *)(a2 + 30) = v6;
    v7 = (_RTL_RB_TREE *)(a1 + 96);
    v8 = *(_QWORD *)(a1 + 96);
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
    {
      if ( v8 )
        v8 ^= (unsigned __int64)v7;
      else
        v8 = 0LL;
    }
    v9 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 28) < *(_DWORD *)(v8 + 28) )
        {
          v10 = *(_QWORD *)v8;
          if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
          {
            if ( !v10 )
              break;
            v10 ^= v8;
          }
          if ( !v10 )
            break;
        }
        else
        {
          v10 = *(_QWORD *)(v8 + 8);
          if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_9;
            v10 ^= v8;
          }
          if ( !v10 )
          {
LABEL_9:
            v9 = 1;
            break;
          }
        }
        v8 = v10;
      }
    }
    RtlRbInsertNodeEx(v7, (PRTL_BALANCED_NODE)v8, v9, (PRTL_BALANCED_NODE)a2);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(a2 + 28));
  }
  return v3;
}
