/*
 * XREFs of MxCreatePfnsForDescriptor @ 0x140CFC444
 * Callers:
 *     MxCreatePfnsForConsumedRegions @ 0x140CFC31C (MxCreatePfnsForConsumedRegions.c)
 *     MxEmptyDepletedList @ 0x140CFCAFC (MxEmptyDepletedList.c)
 *     MxMapFreePageNode @ 0x140CFE074 (MxMapFreePageNode.c)
 * Callees:
 *     MxMapPfnRange @ 0x140CFE128 (MxMapPfnRange.c)
 */

__int64 __fastcall MxCreatePfnsForDescriptor(__int64 a1)
{
  return MxMapPfnRange(*(_QWORD *)(a1 + 32));
}
