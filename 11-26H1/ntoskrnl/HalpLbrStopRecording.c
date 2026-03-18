/*
 * XREFs of HalpLbrStopRecording @ 0x140787900
 * Callers:
 *     <none>
 * Callees:
 *     HalpLbrConfigurationWorker @ 0x1407876A8 (HalpLbrConfigurationWorker.c)
 */

__int64 __fastcall HalpLbrStopRecording(int a1)
{
  if ( !dword_140F87644 )
    return 290LL;
  if ( a1 != dword_140F87650 )
    return 3221225480LL;
  dword_140F87658 = 0;
  HalpLbrConfigurationWorker(0, 0);
  _interlockedbittestandreset(&KiCpuTracingFlags, 1u);
  _InterlockedCompareExchange(&dword_140F87644, 0, 1);
  return 0LL;
}
