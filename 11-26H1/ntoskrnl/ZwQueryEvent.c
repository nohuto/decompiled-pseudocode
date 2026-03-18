/*
 * XREFs of ZwQueryEvent @ 0x140723EB0
 * Callers:
 *     DifZwQueryEventWrapper @ 0x1406B0A00 (DifZwQueryEventWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
