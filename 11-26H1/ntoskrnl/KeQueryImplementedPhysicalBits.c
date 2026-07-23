/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x1405F9AB0
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14077BA94 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return LODWORD(gLoadedDiffHivesLock.StackBase);
}
