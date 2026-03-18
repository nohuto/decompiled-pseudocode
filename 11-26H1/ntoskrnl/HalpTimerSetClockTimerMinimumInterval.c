/*
 * XREFs of HalpTimerSetClockTimerMinimumInterval @ 0x140581824
 * Callers:
 *     HaliSetSystemInformation @ 0x1407767B4 (HaliSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetClockTimerMinimumInterval(int a1)
{
  HalpTimerMinIncrement = a1;
  return 0LL;
}
