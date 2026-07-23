/*
 * XREFs of RtlpHpSegSubAllocate @ 0x180117AE0
 * Callers:
 *     RtlpHpSegLfhAllocate @ 0x180117AA0 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpSegVsAllocate @ 0x180117B90 (RtlpHpSegVsAllocate.c)
 *     RtlpHpSegPgAllocate @ 0x1801584F0 (RtlpHpSegPgAllocate.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x1800DD93C (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1800E94C0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegSubAllocate(__int64 a1, unsigned int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v8; // rbx
  __int64 result; // rax
  bool v10; // cc

  v8 = RtlpHpSegAlloc(a1, a2, a2, 0LL, a3);
  *a4 = 0;
  *a5 = 0;
  if ( !v8 )
    return v8;
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(unsigned __int8)BYTE1(*(_QWORD *)(a1 + 40))] > 0x100000 )
  {
    *a4 |= 1u;
    return v8;
  }
  if ( (RtlpHpLfhPerfFlags & 0x10) == 0 || (*(_BYTE *)(a1 + 13) & 7) == 0 )
    return v8;
  v10 = (int)RtlpHpSegPageRangeComputeLargePageCost((_QWORD *)a1, v8, a2) <= 1;
  result = v8;
  if ( v10 )
    *a4 |= 1u;
  return result;
}
