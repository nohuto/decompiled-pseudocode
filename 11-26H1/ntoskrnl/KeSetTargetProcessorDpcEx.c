/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x140428940
 * Callers:
 *     HalpHvInitMcaPcrContext @ 0x14050944C (HalpHvInitMcaPcrContext.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x1405805F8 (HalpPmuReservedResourcesProcessorCallback.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FCC08 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406D6F0C (WheaFlushETWEventsAddWorkRtn.c)
 *     HalpMcaInitializePcrContext @ 0x140BEA068 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140428990 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 2048;
  return 0;
}
