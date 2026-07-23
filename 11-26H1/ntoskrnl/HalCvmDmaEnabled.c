/*
 * XREFs of HalCvmDmaEnabled @ 0x1404FB2CC
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x1409700B4 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     <none>
 */

char HalCvmDmaEnabled()
{
  return HalpDmaCvmConfiguration;
}
