/*
 * XREFs of ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140729480
 * Callers:
 *     DifZwConvertBetweenAuxiliaryCounterAndPerformanceCounterWrapper @ 0x1406A1A70 (DifZwConvertBetweenAuxiliaryCounterAndPerformanceCounterWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        BOOLEAN ConvertAuxiliaryToPerformanceCounter,
        PLARGE_INTEGER PerformanceOrAuxiliaryCounterValue,
        PLARGE_INTEGER ConvertedValue,
        PLARGE_INTEGER ConversionError)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ConvertAuxiliaryToPerformanceCounter);
}
