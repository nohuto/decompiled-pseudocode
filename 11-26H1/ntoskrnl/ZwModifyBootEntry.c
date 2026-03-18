/*
 * XREFs of ZwModifyBootEntry @ 0x1407257F0
 * Callers:
 *     DifZwModifyBootEntryWrapper @ 0x1406AA560 (DifZwModifyBootEntryWrapper.c)
 *     BiModifyBootEntry @ 0x14089408C (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
