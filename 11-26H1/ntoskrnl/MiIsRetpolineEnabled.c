/*
 * XREFs of MiIsRetpolineEnabled @ 0x1404793CC
 * Callers:
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 *     MiPerformFixups @ 0x14099FD30 (MiPerformFixups.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140AD3700 (MiCaptureRetpolineRelocationTables.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140B2137C (MiMarkKernelImageRetpolineBits.c)
 *     MiCaptureRetpolineImportInfo @ 0x140B3E80C (MiCaptureRetpolineImportInfo.c)
 *     MmMarkHiberPhase @ 0x140C07330 (MmMarkHiberPhase.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
