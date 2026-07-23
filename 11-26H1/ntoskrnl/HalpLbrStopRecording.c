/*
 * XREFs of HalpLbrStopRecording @ 0x14078A430
 * Callers:
 *     <none>
 * Callees:
 *     HalpLbrConfigurationWorker @ 0x14078A1D8 (HalpLbrConfigurationWorker.c)
 */

__int64 __fastcall HalpLbrStopRecording(int a1)
{
  if ( !dword_140F87A24 )
    return 290LL;
  if ( a1 != dword_140F87A30 )
    return 3221225480LL;
  dword_140F87A34 = 0;
  HalpLbrConfigurationWorker(0, 0);
  _interlockedbittestandreset(&KiCpuTracingFlags, 1u);
  _InterlockedCompareExchange(&dword_140F87A24, 0, 1);
  return 0LL;
}
