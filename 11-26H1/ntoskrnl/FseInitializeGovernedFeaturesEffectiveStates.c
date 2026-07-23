/*
 * XREFs of FseInitializeGovernedFeaturesEffectiveStates @ 0x1408AB1E8
 * Callers:
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140806C78 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 * Callees:
 *     AllocateZeroMemory @ 0x14072300C (AllocateZeroMemory.c)
 *     SafeFree @ 0x140723068 (SafeFree.c)
 *     FsepPropagateGovernedFeatureEffectiveState @ 0x1408AB298 (FsepPropagateGovernedFeatureEffectiveState.c)
 *     FsepInitializeOverridesViewForGovernedFeatures @ 0x140B2C938 (FsepInitializeOverridesViewForGovernedFeatures.c)
 */

__int64 __fastcall FseInitializeGovernedFeaturesEffectiveStates(__int64 a1, __int64 a2, _DWORD *a3)
{
  size_t v4; // rdx
  int v6; // ebx
  _DWORD *v7; // r14
  __int64 v8; // r8
  __int64 v9; // rdi
  _DWORD *v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 4LL * (unsigned __int16)*a3;
  v11 = 0LL;
  v6 = AllocateZeroMemory(&v11, v4);
  if ( v6 >= 0 )
  {
    v7 = v11;
    FsepInitializeOverridesViewForGovernedFeatures(a3, a1, v11);
    v9 = 0LL;
    if ( *(_WORD *)a3 )
    {
      do
      {
        if ( (v7[v9] & 1) != 0 )
        {
          v6 = FsepPropagateGovernedFeatureEffectiveState(v7, (unsigned int)v9, v8, a3);
          if ( v6 < 0 )
            break;
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < (unsigned __int16)*a3 );
    }
  }
  else
  {
    v6 = -1073741801;
  }
  SafeFree((void **)&v11);
  return (unsigned int)v6;
}
