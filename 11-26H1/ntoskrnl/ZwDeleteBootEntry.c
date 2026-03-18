/*
 * XREFs of ZwDeleteBootEntry @ 0x140724F10
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x1406A3DA0 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x140893DD8 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
