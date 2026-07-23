/*
 * XREFs of HalpPowerEarlyRestore @ 0x1404D92A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReenableAcpi @ 0x140C0D600 (HalpReenableAcpi.c)
 */

__int64 __fastcall HalpPowerEarlyRestore(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
      return HalpReenableAcpi();
  }
  else
  {
    HalpDmaHibernateAdaptersLock = 0LL;
    HalpDmaShadowDumpAdaptersLock = 0LL;
    HalpTimerWatchdogStopCount = 0;
  }
  return result;
}
