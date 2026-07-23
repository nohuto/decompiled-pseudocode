/*
 * XREFs of MmApplyVerifierToRunningImage @ 0x140C49760
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140C3B260 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140C3B4C0 (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140C3B5F0 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x1404D5AAC (MiIsImportOptimizationEnabled.c)
 *     MmIsVerifierApplicableToImage @ 0x1406F8588 (MmIsVerifierApplicableToImage.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FFE48 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplaceImportEntriesForVerifier @ 0x140870B18 (MiReplaceImportEntriesForVerifier.c)
 *     MmHasImageBeenImportOptimized @ 0x140AC9A20 (MmHasImageBeenImportOptimized.c)
 */

__int64 __fastcall MmApplyVerifierToRunningImage(ULONG_PTR BugCheckParameter2, int *a2, unsigned int a3)
{
  __int64 result; // rax
  ULONG_PTR v7; // rcx

  result = MmIsVerifierApplicableToImage(BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    if ( MiIsImportOptimizationEnabled() && (unsigned int)MmHasImageBeenImportOptimized() )
      return MiReapplyImportOptimizationForDriverVerifier(v7, a2, a3);
    else
      return MiReplaceImportEntriesForVerifier(BugCheckParameter2, a2, a3);
  }
  return result;
}
