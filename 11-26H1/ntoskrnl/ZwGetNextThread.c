/*
 * XREFs of ZwGetNextThread @ 0x140725410
 * Callers:
 *     DifZwGetNextThreadWrapper @ 0x1406A7C70 (DifZwGetNextThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetNextThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
