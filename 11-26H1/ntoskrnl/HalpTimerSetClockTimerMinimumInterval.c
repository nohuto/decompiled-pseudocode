/*
 * XREFs of HalpTimerSetClockTimerMinimumInterval @ 0x140583D44
 * Callers:
 *     HaliSetSystemInformation @ 0x14077965C (HaliSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetClockTimerMinimumInterval(int a1)
{
  HalpTimerMinIncrement = a1;
  return 0LL;
}
