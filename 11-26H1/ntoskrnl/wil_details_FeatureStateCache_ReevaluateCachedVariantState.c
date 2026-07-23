/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x14060EAD4
 * Callers:
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x14060E86C (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 * Callees:
 *     wil_details_GetCurrentVariantState @ 0x14060EBDC (wil_details_GetCurrentVariantState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

signed __int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedVariantState(
        __int64 a1,
        signed __int64 a2,
        __int64 a3)
{
  signed __int64 v3; // rdi
  int v4; // ecx
  unsigned int v5; // r9d
  signed __int64 v6; // rbx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  bool v9; // zf
  signed __int64 v10; // rax
  __int64 CurrentVariantState; // [rsp+30h] [rbp+8h]
  unsigned __int64 v13; // [rsp+30h] [rbp+8h]
  int v14; // [rsp+40h] [rbp+18h] BYREF
  int v15; // [rsp+44h] [rbp+1Ch]

  v15 = HIDWORD(a3);
  v3 = a2;
  v14 = 0;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    guard_dispatch_icall_no_overrides(a1, a2);
  CurrentVariantState = wil_details_GetCurrentVariantState(a1, &v14);
  v4 = CurrentVariantState;
  v5 = HIDWORD(CurrentVariantState);
  do
  {
    v6 = v3;
    HIDWORD(v13) = HIDWORD(v3);
    if ( (v3 & 8) != 0 )
    {
      v7 = v3;
    }
    else
    {
      v7 = (v14 != 0 ? 8 : 0) | v4 & 0x3F800 | v3 & 0xFFFC07F7;
      v13 = __PAIR64__(v5, v7);
      v6 = __PAIR64__(v5, v7);
    }
    v8 = ((unsigned int)v3 >> 2) & 1;
    if ( !v8 )
    {
      LODWORD(v13) = v7 & 0xFFFFFBFF | v4 & 0x400 | 4;
      v6 = v13;
    }
    v10 = _InterlockedCompareExchange64(&Feature_AdaptiveHibernateEnhancements__private_featureState, v6, v3);
    v9 = v3 == v10;
    v3 = v10;
  }
  while ( !v9 );
  if ( !v8 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    guard_dispatch_icall_no_overrides(&Feature_AdaptiveHibernateEnhancements__private_featureState, 3LL);
  return v6;
}
