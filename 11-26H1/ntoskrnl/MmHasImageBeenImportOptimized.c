/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x140AC7E30
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MmApplyVerifierToRunningImage @ 0x140C43750 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x1404DC3CC (MiIsImportOptimizationEnabled.c)
 */

__int64 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  if ( MiIsImportOptimizationEnabled() )
    return (*(_DWORD *)(v0 + 104) >> 7) & 1;
  else
    return 0LL;
}
