/*
 * XREFs of ZwSetTimerResolution @ 0x140726C50
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404E2B78 (ExCleanTimerResolutionRequest.c)
 *     DifZwSetTimerResolutionWrapper @ 0x1406BC530 (DifZwSetTimerResolutionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetTimerResolution(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
