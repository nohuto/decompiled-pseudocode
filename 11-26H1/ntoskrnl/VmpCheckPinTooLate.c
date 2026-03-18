/*
 * XREFs of VmpCheckPinTooLate @ 0x14081D828
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C1F74 (VmpPinMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpCheckPinTooLate(__int64 a1)
{
  return (*(_BYTE *)(a1 + 154) & 1) != 0 ? 0xC000010A : 0;
}
