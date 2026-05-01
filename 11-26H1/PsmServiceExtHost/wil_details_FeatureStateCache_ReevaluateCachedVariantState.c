/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x180075C18
 * Callers:
 *     CrmComparisonRoutineBinaryBackoffSearchIndexerNPUUsageHigh @ 0x180075130 (CrmComparisonRoutineBinaryBackoffSearchIndexerNPUUsageHigh.c)
 *     Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant @ 0x18007584C (Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant.c)
 * Callees:
 *     wil_details_GetCurrentVariantState @ 0x180075EB8 (wil_details_GetCurrentVariantState.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed __int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedVariantState(
        __int64 a1,
        signed __int64 a2,
        __int64 a3)
{
  unsigned int v3; // esi
  int v5; // r9d
  signed __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  bool v9; // zf
  signed __int64 v10; // rax
  __int64 CurrentVariantState; // [rsp+30h] [rbp+8h]
  unsigned __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  HIDWORD(v13) = HIDWORD(a3);
  v3 = 0;
  LODWORD(v13) = 0;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  CurrentVariantState = wil_details_GetCurrentVariantState(a1, &v13);
  v5 = v3 != 0 ? v13 : 0;
  do
  {
    v6 = a2;
    v13 = a2;
    if ( (a2 & 8) != 0 )
    {
      v7 = v13;
    }
    else
    {
      v7 = (v5 != 0 ? 8 : 0) | CurrentVariantState & 0x3F800 | a2 & 0xFFFC07F7;
      v13 = __PAIR64__(HIDWORD(CurrentVariantState), v7);
      v6 = __PAIR64__(HIDWORD(CurrentVariantState), v7);
    }
    v8 = ((unsigned int)a2 >> 2) & 1;
    if ( (((unsigned int)a2 >> 2) & 1) == 0 )
    {
      LODWORD(v13) = v7 & 0xFFFFFBFF | CurrentVariantState & 0x400 | 4;
      v6 = v13;
    }
    v10 = _InterlockedCompareExchange64(&Feature_CRMDrivenIndexerNPUBackoff__private_featureState, v6, a2);
    v9 = a2 == v10;
    a2 = v10;
  }
  while ( !v9 );
  if ( !(_DWORD)v8 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(
      &Feature_CRMDrivenIndexerNPUBackoff__private_featureState,
      v8,
      v3);
  return v6;
}
