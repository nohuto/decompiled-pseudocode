/*
 * XREFs of ArbBacktrackAllocation @ 0x1400BF040
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteRange_0 @ 0x140055D9D (RtlDeleteRange_0.c)
 */

NTSTATUS __fastcall ArbBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  return RtlDeleteRange_0(*(PRTL_RANGE_LIST *)(a1 + 48), *a2, a2[1], *(PVOID *)(a2[4] + 32));
}
