/*
 * XREFs of RtlDeleteRange_0 @ 0x140055D9D
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1400B5AD0 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1400BE070 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1400BF040 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
