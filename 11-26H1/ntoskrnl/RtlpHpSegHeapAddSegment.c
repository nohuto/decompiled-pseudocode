/*
 * XREFs of RtlpHpSegHeapAddSegment @ 0x1404B7CAC
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x14034D918 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x14063C2D4 (RtlpHpSegContextReserve.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegHeapAddSegment(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  *(_QWORD *)(a2 + 16) = a2 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ a1;
  result = a1 + 72;
  v3 = *(unsigned __int64 **)(a1 + 80);
  if ( *v3 != a1 + 72 )
    __fastfail(3u);
  *(_QWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  *(_QWORD *)(a1 + 80) = a2;
  ++*(_QWORD *)(a1 + 88);
  return result;
}
