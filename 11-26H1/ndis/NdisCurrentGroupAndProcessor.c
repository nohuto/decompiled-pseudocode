/*
 * XREFs of NdisCurrentGroupAndProcessor @ 0x14005BD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PROCESSOR_NUMBER NdisCurrentGroupAndProcessor(void)
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  return ProcNumber;
}
