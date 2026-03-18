/*
 * XREFs of ZwModifyDriverEntry @ 0x140725810
 * Callers:
 *     DifZwModifyDriverEntryWrapper @ 0x1406AA6D0 (DifZwModifyDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
