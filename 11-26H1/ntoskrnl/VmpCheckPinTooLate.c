/*
 * XREFs of VmpCheckPinTooLate @ 0x140823A38
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C5B54 (VmpPinMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpCheckPinTooLate(__int64 a1)
{
  return (*(_BYTE *)(a1 + 154) & 1) != 0 ? 0xC000010A : 0;
}
