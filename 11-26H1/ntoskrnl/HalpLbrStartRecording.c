/*
 * XREFs of HalpLbrStartRecording @ 0x14078A320
 * Callers:
 *     <none>
 * Callees:
 *     HalpLbrConfigurationWorker @ 0x14078A1D8 (HalpLbrConfigurationWorker.c)
 */

__int64 __fastcall HalpLbrStartRecording(int a1, int *a2)
{
  bool v4; // zf
  int v5; // eax

  if ( !dword_140F87A2C )
    return 3221225659LL;
  if ( (a1 & 0xFFFFF800) != 0 || (a1 & 3) == 3 || (a1 & 0x200) != 0 && (a1 & 0xFFFFFDFC) != 0 )
    return 3221225485LL;
  if ( dword_140F87A40 == 2 )
  {
    if ( (a1 & 0xFFFFFFFC) != 0 && (dword_140F87A44 & 1) == 0
      || (a1 & 0xFFFFFE03) != 0 && (dword_140F87A44 & 2) == 0
      || (a1 & 0xFFFFFDFF) != 0 && (dword_140F87A44 & 4) == 0 )
    {
      return 3221225485LL;
    }
  }
  else if ( dword_140F87A40 == 3 && (a1 & 0x200) != 0 )
  {
    return 3221225485LL;
  }
  if ( _InterlockedCompareExchange(&dword_140F87A24, 1, 0) )
    return 3221227272LL;
  _interlockedbittestandset(&KiCpuTracingFlags, 1u);
  HalpLbrConfigurationWorker(a1, 1u);
  v4 = dword_140F87A30 == -1;
  v5 = ++dword_140F87A30;
  if ( v4 )
  {
    v5 = 1;
    dword_140F87A30 = 1;
  }
  dword_140F87A34 = 1;
  *a2 = v5;
  return 0LL;
}
