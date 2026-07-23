/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x140AC9A20
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FFE48 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MmApplyVerifierToRunningImage @ 0x140C49760 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x1404D5AAC (MiIsImportOptimizationEnabled.c)
 */

__int64 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  if ( MiIsImportOptimizationEnabled() )
    return (*(_DWORD *)(v0 + 104) >> 7) & 1;
  else
    return 0LL;
}
