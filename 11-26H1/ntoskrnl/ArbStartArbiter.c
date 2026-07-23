/*
 * XREFs of ArbStartArbiter @ 0x14078C5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFreeRangeList @ 0x140AE2C50 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbStartArbiter(__int64 a1, __int64 a2)
{
  RtlFreeRangeList(*(_QWORD *)(a1 + 40));
  return guard_dispatch_icall_no_overrides(a1, *(unsigned int *)(a2 + 16));
}
