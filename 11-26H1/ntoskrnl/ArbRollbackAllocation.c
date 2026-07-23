/*
 * XREFs of ArbRollbackAllocation @ 0x14078C380
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x140AE2C50 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbRollbackAllocation(__int64 a1)
{
  RtlFreeRangeList(*(_QWORD *)(a1 + 48));
  return 0LL;
}
