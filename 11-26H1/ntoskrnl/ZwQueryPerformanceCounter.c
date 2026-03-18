/*
 * XREFs of ZwQueryPerformanceCounter @ 0x140723A10
 * Callers:
 *     DifZwQueryPerformanceCounterWrapper @ 0x1406B3450 (DifZwQueryPerformanceCounterWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryPerformanceCounter(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
