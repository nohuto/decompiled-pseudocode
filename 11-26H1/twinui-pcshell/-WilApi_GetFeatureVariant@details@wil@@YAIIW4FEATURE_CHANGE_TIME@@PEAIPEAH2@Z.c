/*
 * XREFs of ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180314D50
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180311F8C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803120CC (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@w.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18031248C (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803B45C0 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA-A.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805B76A4 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATw.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805D1FA0 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA-A.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::WilApi_GetFeatureVariant(
        wil::details *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        int *a5)
{
  __int64 result; // rax

  if ( g_wil_details_internalGetFeatureVariant )
    return ((__int64 (__fastcall *)(wil::details *, __int64, __int64, unsigned int *, int *))g_wil_details_internalGetFeatureVariant)(
             this,
             a2,
             a3,
             a4,
             a5);
  result = g_wil_details_apiGetFeatureVariant;
  if ( g_wil_details_apiGetFeatureVariant )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, unsigned int *, int *))g_wil_details_apiGetFeatureVariant)(
             (unsigned int)this,
             a2,
             a3,
             a4,
             a5);
  return result;
}
