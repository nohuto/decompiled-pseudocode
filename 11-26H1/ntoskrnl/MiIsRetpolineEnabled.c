/*
 * XREFs of MiIsRetpolineEnabled @ 0x14047FA5C
 * Callers:
 *     MiParseImageLoadConfig @ 0x1409CC9F0 (MiParseImageLoadConfig.c)
 *     MiPerformFixups @ 0x1409CED50 (MiPerformFixups.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140AD69F0 (MiCaptureRetpolineRelocationTables.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140B1F2FC (MiMarkKernelImageRetpolineBits.c)
 *     MiCaptureRetpolineImportInfo @ 0x140B3C58C (MiCaptureRetpolineImportInfo.c)
 *     MmMarkHiberPhase @ 0x140C01120 (MmMarkHiberPhase.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
