/*
 * XREFs of RtlInvertRangeList_0 @ 0x140055D55
 * Callers:
 *     ArbInitializeRangeList @ 0x1400BF160 (ArbInitializeRangeList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInvertRangeList_0(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeList(InvertedRangeList, RangeList);
}
