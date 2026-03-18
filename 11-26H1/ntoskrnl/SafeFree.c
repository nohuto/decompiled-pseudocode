/*
 * XREFs of SafeFree @ 0x14071E3D8
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x1408A4DD8 (FseInitializeGovernedFeaturesEffectiveStates.c)
 *     FsepPropagateGovernedFeatureEffectiveState @ 0x1408A4E88 (FsepPropagateGovernedFeatureEffectiveState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SafeFree(void **a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x6C506346u);
      *a1 = 0LL;
    }
  }
}
