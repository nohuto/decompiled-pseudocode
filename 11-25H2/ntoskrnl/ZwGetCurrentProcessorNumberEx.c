/*
 * XREFs of ZwGetCurrentProcessorNumberEx @ 0x14069D0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl ZwGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessorNumber);
}
