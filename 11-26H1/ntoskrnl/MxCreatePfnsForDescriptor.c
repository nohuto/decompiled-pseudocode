/*
 * XREFs of MxCreatePfnsForDescriptor @ 0x140CF60C4
 * Callers:
 *     MxCreatePfnsForConsumedRegions @ 0x140CF5F9C (MxCreatePfnsForConsumedRegions.c)
 *     MxEmptyDepletedList @ 0x140CF677C (MxEmptyDepletedList.c)
 *     MxMapFreePageNode @ 0x140CF7CF4 (MxMapFreePageNode.c)
 * Callees:
 *     MxMapPfnRange @ 0x140CF7DA8 (MxMapPfnRange.c)
 */

__int64 __fastcall MxCreatePfnsForDescriptor(__int64 a1)
{
  return MxMapPfnRange(*(_QWORD *)(a1 + 32));
}
