/*
 * XREFs of ZwAddDriverEntry @ 0x14069BEA0
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x14062F5B0 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
