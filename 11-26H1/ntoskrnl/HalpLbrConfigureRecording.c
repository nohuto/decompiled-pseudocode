/*
 * XREFs of HalpLbrConfigureRecording @ 0x1407877B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpLbrConfigurationWorker @ 0x1407876A8 (HalpLbrConfigurationWorker.c)
 */

__int64 __fastcall HalpLbrConfigureRecording(int a1, int a2)
{
  if ( a2 != dword_140F87650 || !dword_140F87644 )
    return 3221225485LL;
  HalpLbrConfigurationWorker(a1, 1u);
  return 0LL;
}
