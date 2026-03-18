/*
 * XREFs of ZwQueryIntervalProfile @ 0x140725FB0
 * Callers:
 *     DifZwQueryIntervalProfileWrapper @ 0x1406B2450 (DifZwQueryIntervalProfileWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryIntervalProfile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
