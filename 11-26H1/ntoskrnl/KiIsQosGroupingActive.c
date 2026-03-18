/*
 * XREFs of KiIsQosGroupingActive @ 0x140474CC0
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x14021EB80 (KiCheckPreferredHeteroProcessor.c)
 * Callees:
 *     <none>
 */

bool KiIsQosGroupingActive()
{
  return (KiHeteroSchedulerOptionsMask & 2) == 0 || (KiHeteroSchedulerOptions & 2) != 0;
}
