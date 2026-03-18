/*
 * XREFs of ZwAddDriverEntry @ 0x140724150
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x1406989D0 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
