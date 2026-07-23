/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x1404D5AAC
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x1407BD6B8 (KeQuerySpeculationControlInformation.c)
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 *     MmHasImageBeenImportOptimized @ 0x140AC9A20 (MmHasImageBeenImportOptimized.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3E5DC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     VfUtilIsProtectedDriver @ 0x140C279E8 (VfUtilIsProtectedDriver.c)
 *     MmApplyVerifierToRunningImage @ 0x140C49760 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiFeatureSettings & 0x20000) == 0;
}
