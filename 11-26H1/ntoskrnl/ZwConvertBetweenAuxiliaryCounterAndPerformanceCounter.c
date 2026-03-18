/*
 * XREFs of ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x1407248B0
 * Callers:
 *     DifZwConvertBetweenAuxiliaryCounterAndPerformanceCounterWrapper @ 0x14069DE90 (DifZwConvertBetweenAuxiliaryCounterAndPerformanceCounterWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
