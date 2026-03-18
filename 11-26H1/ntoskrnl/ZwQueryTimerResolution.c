/*
 * XREFs of ZwQueryTimerResolution @ 0x1407261F0
 * Callers:
 *     DifZwQueryTimerResolutionWrapper @ 0x1406B4980 (DifZwQueryTimerResolutionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryTimerResolution(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
