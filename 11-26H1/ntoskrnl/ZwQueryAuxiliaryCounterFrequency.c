/*
 * XREFs of ZwQueryAuxiliaryCounterFrequency @ 0x14072A900
 * Callers:
 *     DifZwQueryAuxiliaryCounterFrequencyWrapper @ 0x1406B35A0 (DifZwQueryAuxiliaryCounterFrequencyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AuxiliaryCounterFrequency);
}
