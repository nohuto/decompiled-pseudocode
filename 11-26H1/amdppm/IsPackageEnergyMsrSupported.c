/*
 * XREFs of IsPackageEnergyMsrSupported @ 0x1400232FC
 * Callers:
 *     InitDriver @ 0x140023F88 (InitDriver.c)
 * Callees:
 *     <none>
 */

char IsPackageEnergyMsrSupported()
{
  __readmsr(0xC0010299);
  __readmsr(0xC001029B);
  return 1;
}
