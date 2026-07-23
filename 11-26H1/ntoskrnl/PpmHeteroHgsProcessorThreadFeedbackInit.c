/*
 * XREFs of PpmHeteroHgsProcessorThreadFeedbackInit @ 0x1405265D4
 * Callers:
 *     PpmResetPerfEngineForProcessor @ 0x140526454 (PpmResetPerfEngineForProcessor.c)
 *     PpmHeteroHgsProcessorInit @ 0x14060E1CC (PpmHeteroHgsProcessorInit.c)
 * Callees:
 *     <none>
 */

char PpmHeteroHgsProcessorThreadFeedbackInit()
{
  char result; // al
  unsigned int v1; // ecx

  if ( PpmHeteroHgsThreadEnabled )
  {
    result = PpmHeteroHgsVendor;
    if ( PpmHeteroHgsVendor == 2 )
    {
      v1 = 6100;
      result = 1;
    }
    else
    {
      if ( PpmHeteroHgsVendor != 1 )
        return result;
      result = 1;
      v1 = -1073740544;
    }
    __writemsr(v1, 1uLL);
  }
  return result;
}
