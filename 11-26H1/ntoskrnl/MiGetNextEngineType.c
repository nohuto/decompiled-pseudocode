/*
 * XREFs of MiGetNextEngineType @ 0x14052234C
 * Callers:
 *     MiReduceZeroingThreads @ 0x1405211AC (MiReduceZeroingThreads.c)
 *     MiFindOptimalEngineToAddThread @ 0x14052203C (MiFindOptimalEngineToAddThread.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x14052A72C (MiSuitableZeroingProcessorAvailable.c)
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
