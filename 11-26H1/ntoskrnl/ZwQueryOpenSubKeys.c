/*
 * XREFs of ZwQueryOpenSubKeys @ 0x140726070
 * Callers:
 *     DifZwQueryOpenSubKeysWrapper @ 0x1406B32E0 (DifZwQueryOpenSubKeysWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryOpenSubKeys(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
