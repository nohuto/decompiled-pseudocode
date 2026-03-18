/*
 * XREFs of EmonPreOverflowHandler @ 0x140429890
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x1404298AC (HalpInterruptEnablePerformanceEvents.c)
 */

__int64 EmonPreOverflowHandler()
{
  return HalpInterruptEnablePerformanceEvents(1LL);
}
