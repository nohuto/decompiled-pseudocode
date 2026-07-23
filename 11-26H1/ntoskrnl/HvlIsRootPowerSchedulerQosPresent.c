/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1405BB044
 * Callers:
 *     PpmHvEnableQosEnlightenment @ 0x140AEBAB8 (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
