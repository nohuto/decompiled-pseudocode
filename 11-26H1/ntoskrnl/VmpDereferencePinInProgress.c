/*
 * XREFs of VmpDereferencePinInProgress @ 0x1406C49E4
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C5B54 (VmpPinMemoryRanges.c)
 *     VmpUnpinMemoryRangeHelper @ 0x1406C644C (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     VmpVaRangeCheckPinnedGpaRanges @ 0x1406C68EC (VmpVaRangeCheckPinnedGpaRanges.c)
 */

__int64 __fastcall VmpDereferencePinInProgress(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( (*(_QWORD *)(a1 + 64))-- == 1LL )
    return VmpVaRangeCheckPinnedGpaRanges(a1);
  return v1;
}
