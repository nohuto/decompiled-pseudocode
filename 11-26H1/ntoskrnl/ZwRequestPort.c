/*
 * XREFs of ZwRequestPort @ 0x1407264D0
 * Callers:
 *     DifZwRequestPortWrapper @ 0x1406B7B10 (DifZwRequestPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
