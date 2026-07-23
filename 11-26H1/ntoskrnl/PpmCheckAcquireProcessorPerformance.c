/*
 * XREFs of PpmCheckAcquireProcessorPerformance @ 0x140258F60
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckQueueControlAction @ 0x140258FDC (PpmCheckQueueControlAction.c)
 */

char PpmCheckAcquireProcessorPerformance()
{
  PBOOLEAN v0; // rcx
  char result; // al
  bool v2; // zf

  v0 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
  result = 0;
  if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
  {
    do
    {
      v2 = v0[1446] == 0;
      v0 = *(PBOOLEAN *)v0;
      if ( !v2 )
        result = 1;
    }
    while ( v0 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) );
    if ( result )
      return PpmCheckQueueControlAction(PpmPerfControlAcquirePerformance);
  }
  PpmCheckPipelineIndex += 2;
  return result;
}
