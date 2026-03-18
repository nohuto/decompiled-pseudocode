/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x1404DC3CC
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x1407BA658 (KeQuerySpeculationControlInformation.c)
 *     MiParseImageLoadConfig @ 0x1409CC9F0 (MiParseImageLoadConfig.c)
 *     MmHasImageBeenImportOptimized @ 0x140AC7E30 (MmHasImageBeenImportOptimized.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3C35C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     VfUtilIsProtectedDriver @ 0x140C219D8 (VfUtilIsProtectedDriver.c)
 *     MmApplyVerifierToRunningImage @ 0x140C43750 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiFeatureSettings & 0x20000) == 0;
}
