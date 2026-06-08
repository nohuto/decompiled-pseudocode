/*
 * XREFs of IsEnergyMsrSupported @ 0x1400232B8
 * Callers:
 *     InitEnergyCountersOnCurrentProcessor @ 0x140023170 (InitEnergyCountersOnCurrentProcessor.c)
 *     InitDriver @ 0x140023F88 (InitDriver.c)
 * Callees:
 *     <none>
 */

char IsEnergyMsrSupported()
{
  __readmsr(0xC0010299);
  __readmsr(0xC001029A);
  return 1;
}
