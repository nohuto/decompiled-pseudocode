/*
 * XREFs of HvlIsSchedulerAssistAvailable @ 0x1405BB8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlIsSchedulerAssistAvailable()
{
  return (HvlpFlags & 0x8000) != 0;
}
