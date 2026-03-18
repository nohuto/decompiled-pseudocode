/*
 * XREFs of VmpDereferencePinInProgress @ 0x1406C0E04
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C1F74 (VmpPinMemoryRanges.c)
 *     VmpUnpinMemoryRangeHelper @ 0x1406C286C (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     VmpVaRangeCheckPinnedGpaRanges @ 0x1406C2D0C (VmpVaRangeCheckPinnedGpaRanges.c)
 */

__int64 __fastcall VmpDereferencePinInProgress(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( (*(_QWORD *)(a1 + 64))-- == 1LL )
    return VmpVaRangeCheckPinnedGpaRanges(a1);
  return v1;
}
