/*
 * XREFs of ZwModifyBootEntry @ 0x14069D520
 * Callers:
 *     DifZwModifyBootEntryWrapper @ 0x140634F30 (DifZwModifyBootEntryWrapper.c)
 *     BiModifyBootEntry @ 0x1408059F4 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
