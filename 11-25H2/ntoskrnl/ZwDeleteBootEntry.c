/*
 * XREFs of ZwDeleteBootEntry @ 0x14069CC60
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x140632AC0 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x140805624 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
