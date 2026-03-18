/*
 * XREFs of VmpDereferencePinInProgress @ 0x14063E7F4
 * Callers:
 *     VmpPinMemoryRange @ 0x14063ED00 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x14063F3A0 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     VmpVaRangeCheckPinnedGpaRanges @ 0x14063F8DC (VmpVaRangeCheckPinnedGpaRanges.c)
 */

__int64 __fastcall VmpDereferencePinInProgress(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_QWORD *)(a1 + 64))-- == 1LL )
    return VmpVaRangeCheckPinnedGpaRanges(a1);
  return result;
}
