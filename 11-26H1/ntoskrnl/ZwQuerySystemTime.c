/*
 * XREFs of ZwQuerySystemTime @ 0x140723F30
 * Callers:
 *     DifZwQuerySystemTimeWrapper @ 0x1406B4810 (DifZwQuerySystemTimeWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemTime(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
