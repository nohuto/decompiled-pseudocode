/*
 * XREFs of AllocateZeroMemory @ 0x14072300C
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x1408AB1E8 (FseInitializeGovernedFeaturesEffectiveStates.c)
 *     FsepPropagateGovernedFeatureEffectiveState @ 0x1408AB298 (FsepPropagateGovernedFeatureEffectiveState.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AllocateZeroMemory(_QWORD *a1, size_t a2)
{
  void *Pool2; // rax

  if ( !a1 )
    return 3221225485LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  *a1 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memset_0(Pool2, 0, a2);
  return 0LL;
}
