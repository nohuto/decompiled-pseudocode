/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x14034B28C
 * Callers:
 *     RtlpHpSegContextCompact @ 0x14034742C (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14034B898 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14051C3D4 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x1406392C4 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14034F200 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax

  v3 = 0LL;
  if ( !(_DWORD)a3
    && (*(_BYTE *)(a1 + 13) & 0x10) != 0
    && (a3 = 256 - (unsigned int)*(unsigned __int8 *)(a1 + 10), *(unsigned __int8 *)(a2 + 31) == (_DWORD)a3) )
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
    v7 = a1 + 96;
    v8 = *(_QWORD *)(a1 + 96);
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
    {
      if ( v8 )
        v8 ^= v7;
      else
        v8 = 0LL;
    }
    LOBYTE(a3) = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 28) < *(_DWORD *)(v8 + 28) )
        {
          v9 = *(_QWORD *)v8;
          if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
          {
            if ( !v9 )
              break;
            v9 ^= v8;
          }
          if ( !v9 )
            break;
        }
        else
        {
          v9 = *(_QWORD *)(v8 + 8);
          if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_9;
            v9 ^= v8;
          }
          if ( !v9 )
          {
LABEL_9:
            LOBYTE(a3) = 1;
            break;
          }
        }
        v8 = v9;
      }
    }
    RtlRbInsertNodeEx(v7, v8, a3, a2);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(a2 + 28));
  }
  return v3;
}
