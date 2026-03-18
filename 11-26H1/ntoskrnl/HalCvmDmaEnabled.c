/*
 * XREFs of HalCvmDmaEnabled @ 0x140501ADC
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x140915648 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     <none>
 */

char HalCvmDmaEnabled()
{
  return HalpDmaCvmConfiguration;
}
