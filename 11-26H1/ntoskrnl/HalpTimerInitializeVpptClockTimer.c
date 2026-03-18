/*
 * XREFs of HalpTimerInitializeVpptClockTimer @ 0x1405277F0
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BECAA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpVpptInitializePhysicalTimer @ 0x1405832A4 (HalpVpptInitializePhysicalTimer.c)
 */

__int64 HalpTimerInitializeVpptClockTimer()
{
  __int64 result; // rax

  result = HalpClockTimer;
  if ( *(_DWORD *)(HalpClockTimer + 228) == 12 )
    return HalpVpptInitializePhysicalTimer();
  return result;
}
