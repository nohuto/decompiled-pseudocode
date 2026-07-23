/*
 * XREFs of RtlpHpSegSubAllocate @ 0x1404D8FC4
 * Callers:
 *     RtlpHpSegLfhAllocate @ 0x1404D8F50 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpSegVsAllocate @ 0x1404D8F90 (RtlpHpSegVsAllocate.c)
 *     RtlpHpSegPgAllocate @ 0x14063C3C0 (RtlpHpSegPgAllocate.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14034D14C (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x140351280 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegSubAllocate(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v8; // rsi

  v8 = RtlpHpSegAlloc(a1, a2, a2, 0LL, a3);
  *a4 = 0;
  *a5 = 0;
  if ( v8
    && ((unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(unsigned __int8)BYTE1(*(_QWORD *)(a1 + 40))] > 0x100000
     || (RtlpHpLfhPerfFlags & 0x10) != 0
     && (*(_BYTE *)(a1 + 13) & 7) != 0
     && (int)RtlpHpSegPageRangeComputeLargePageCost((_QWORD *)a1, v8, a2) <= 1) )
  {
    *a4 |= 1u;
  }
  return v8;
}
