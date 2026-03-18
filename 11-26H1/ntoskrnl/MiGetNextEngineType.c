/*
 * XREFs of MiGetNextEngineType @ 0x14051FCA8
 * Callers:
 *     MiReduceZeroingThreads @ 0x14051EB08 (MiReduceZeroingThreads.c)
 *     MiFindOptimalEngineToAddThread @ 0x14051F998 (MiFindOptimalEngineToAddThread.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x1405280BC (MiSuitableZeroingProcessorAvailable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextEngineType(int a1, int a2)
{
  if ( a2 == 1 )
  {
    return (unsigned int)(a1 + 1);
  }
  else if ( a1 )
  {
    return (unsigned int)(a1 - 1);
  }
  else
  {
    return 2;
  }
}
