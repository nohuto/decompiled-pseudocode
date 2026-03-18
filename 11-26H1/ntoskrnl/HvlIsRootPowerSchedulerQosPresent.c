/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1405B87D4
 * Callers:
 *     PpmHvEnableQosEnlightenment @ 0x140A9CE18 (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
