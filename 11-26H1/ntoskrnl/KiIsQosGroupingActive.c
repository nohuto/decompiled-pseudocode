/*
 * XREFs of KiIsQosGroupingActive @ 0x14046E440
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 * Callees:
 *     <none>
 */

bool KiIsQosGroupingActive()
{
  return (KiHeteroSchedulerOptionsMask & 2) == 0 || (KiHeteroSchedulerOptions & 2) != 0;
}
