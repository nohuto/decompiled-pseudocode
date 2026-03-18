/*
 * XREFs of ExpGetOriginalImageVersion @ 0x1406D4014
 * Callers:
 *     ExpQueryOriginalImageFeatureInformation @ 0x140846830 (ExpQueryOriginalImageFeatureInformation.c)
 * Callees:
 *     <none>
 */

__int64 ExpGetOriginalImageVersion()
{
  return *(unsigned int *)&WheapConfigTableLock.WaitBlockFill11[32];
}
