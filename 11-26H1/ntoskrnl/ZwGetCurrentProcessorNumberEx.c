/*
 * XREFs of ZwGetCurrentProcessorNumberEx @ 0x140729F60
 * Callers:
 *     DifZwGetCurrentProcessorNumberExWrapper @ 0x1406AB250 (DifZwGetCurrentProcessorNumberExWrapper.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl ZwGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessorNumber);
}
