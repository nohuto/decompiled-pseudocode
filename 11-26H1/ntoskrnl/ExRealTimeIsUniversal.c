/*
 * XREFs of ExRealTimeIsUniversal @ 0x1404F2620
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x140B28B24 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
