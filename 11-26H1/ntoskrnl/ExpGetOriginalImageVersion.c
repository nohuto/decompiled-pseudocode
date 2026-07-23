/*
 * XREFs of ExpGetOriginalImageVersion @ 0x1406D80A0
 * Callers:
 *     ExpQueryOriginalImageFeatureInformation @ 0x14084CA90 (ExpQueryOriginalImageFeatureInformation.c)
 * Callees:
 *     <none>
 */

__int64 ExpGetOriginalImageVersion()
{
  return *(unsigned int *)&WheapConfigTableLock.WaitBlockFill11[32];
}
