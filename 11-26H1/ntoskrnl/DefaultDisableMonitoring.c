/*
 * XREFs of DefaultDisableMonitoring @ 0x1405869D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerStopProfileInterrupt @ 0x1405847EC (HalpTimerStopProfileInterrupt.c)
 */

void __fastcall DefaultDisableMonitoring(int a1)
{
  if ( !a1 )
    HalpTimerStopProfileInterrupt();
}
