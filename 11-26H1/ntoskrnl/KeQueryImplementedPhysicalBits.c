/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x1405F70F0
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140778BF4 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return LODWORD(gLoadedDiffHivesLock.StackBase);
}
