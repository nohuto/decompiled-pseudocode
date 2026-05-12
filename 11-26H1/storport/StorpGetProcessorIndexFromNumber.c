/*
 * XREFs of StorpGetProcessorIndexFromNumber @ 0x140001240
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetProcessorIndexFromNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2, ULONG *a3)
{
  ULONG ProcessorIndexFromNumber; // eax

  if ( a2
    && a3
    && (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2),
        *a3 = ProcessorIndexFromNumber,
        ProcessorIndexFromNumber != -1) )
  {
    return 0LL;
  }
  else
  {
    return 3238002694LL;
  }
}
