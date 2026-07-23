/*
 * XREFs of VfUtilIsProtectedDriver @ 0x140C279E8
 * Callers:
 *     VfDriverEnableVerifierForAll @ 0x140C261A0 (VfDriverEnableVerifierForAll.c)
 *     VfDriverApplyDifVerification @ 0x140C2E174 (VfDriverApplyDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140C2E500 (ViDriverReApplyVerifierForAll.c)
 *     VfDriverEnableVerifier @ 0x140C4C854 (VfDriverEnableVerifier.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x1404D5AAC (MiIsImportOptimizationEnabled.c)
 *     KeIsImageIATProtected @ 0x1405E73F4 (KeIsImageIATProtected.c)
 */

__int64 VfUtilIsProtectedDriver()
{
  bool IsImportOptimizationEnabled; // al
  __int64 v1; // rcx
  unsigned int v2; // edx

  IsImportOptimizationEnabled = MiIsImportOptimizationEnabled();
  v2 = 0;
  if ( IsImportOptimizationEnabled )
    LOBYTE(v2) = (*(_WORD *)(v1 + 110) & 0x180) != 0;
  else
    return (unsigned int)KeIsImageIATProtected(v1);
  return v2;
}
