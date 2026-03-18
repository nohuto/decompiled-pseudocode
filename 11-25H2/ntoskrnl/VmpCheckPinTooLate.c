/*
 * XREFs of VmpCheckPinTooLate @ 0x14078FE00
 * Callers:
 *     VmpPinMemoryRange @ 0x14063ED00 (VmpPinMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpCheckPinTooLate(__int64 a1)
{
  return (*(_BYTE *)(a1 + 138) & 1) != 0 ? 0xC000010A : 0;
}
