/*
 * XREFs of MmApplyVerifierToRunningImage @ 0x140C43750
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140C35250 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140C354B0 (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140C355E0 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x1404DC3CC (MiIsImportOptimizationEnabled.c)
 *     MmIsVerifierApplicableToImage @ 0x1406F3918 (MmIsVerifierApplicableToImage.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplaceImportEntriesForVerifier @ 0x14086A738 (MiReplaceImportEntriesForVerifier.c)
 *     MmHasImageBeenImportOptimized @ 0x140AC7E30 (MmHasImageBeenImportOptimized.c)
 */

__int64 __fastcall MmApplyVerifierToRunningImage(ULONG_PTR BugCheckParameter2, int *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

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
