/*
 * XREFs of ExRealTimeIsUniversal @ 0x1404F9010
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x140B268C4 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
