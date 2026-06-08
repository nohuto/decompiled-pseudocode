/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x140004CB4
 * Callers:
 *     Feature_QosHysteresisExperiment__private_GetVariant @ 0x1400047BC (Feature_QosHysteresisExperiment__private_GetVariant.c)
 * Callees:
 *     wil_details_GetCurrentVariantState @ 0x140004DBC (wil_details_GetCurrentVariantState.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

signed __int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedVariantState(
        __int64 a1,
        signed __int64 a2,
        __int64 a3)
{
  unsigned int v3; // esi
  int v5; // ecx
  unsigned int v6; // r9d
  signed __int64 v7; // rbx
  unsigned int v8; // r8d
  unsigned int v9; // edx
  bool v10; // zf
  signed __int64 v11; // rax
  __int64 CurrentVariantState; // [rsp+30h] [rbp+8h]
  unsigned __int64 v14; // [rsp+30h] [rbp+8h]
  int v15; // [rsp+40h] [rbp+18h] BYREF
  int v16; // [rsp+44h] [rbp+1Ch]

  v16 = HIDWORD(a3);
  v3 = 0;
  v15 = 0;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  CurrentVariantState = wil_details_GetCurrentVariantState(a1, &v15);
  v5 = CurrentVariantState;
  v6 = HIDWORD(CurrentVariantState);
  do
  {
    v7 = a2;
    HIDWORD(v14) = HIDWORD(a2);
    if ( (a2 & 8) != 0 )
    {
      v8 = a2;
    }
    else
    {
      v8 = (v15 != 0 ? 8 : 0) | v5 & 0x3F800 | a2 & 0xFFFC07F7;
      v14 = __PAIR64__(v6, v8);
      v7 = __PAIR64__(v6, v8);
    }
    v9 = ((unsigned int)a2 >> 2) & 1;
    if ( !v9 )
    {
      LODWORD(v14) = v8 & 0xFFFFFBFF | v5 & 0x400 | 4;
      v7 = v14;
    }
    v11 = _InterlockedCompareExchange64(&Feature_QosHysteresisExperiment__private_featureState, v7, a2);
    v10 = a2 == v11;
    a2 = v11;
  }
  while ( !v10 );
  if ( !v9 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(
      &Feature_QosHysteresisExperiment__private_featureState,
      3LL,
      v3);
  return v7;
}
