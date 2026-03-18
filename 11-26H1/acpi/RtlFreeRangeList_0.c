/*
 * XREFs of RtlFreeRangeList_0 @ 0x140055D1F
 * Callers:
 *     ArbBootAllocation @ 0x1400A9B80 (ArbBootAllocation.c)
 *     ArbCommitAllocation @ 0x1400BF070 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1400BF0A4 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1400BF160 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1400BF550 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1400BFAD0 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x1400BFCB0 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x1400BFF20 (ArbStartArbiter.c)
 *     ArbTestAllocation @ 0x1400D0DC0 (ArbTestAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
