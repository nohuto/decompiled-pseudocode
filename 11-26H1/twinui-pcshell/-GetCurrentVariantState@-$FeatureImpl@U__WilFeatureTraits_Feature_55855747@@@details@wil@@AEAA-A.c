/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803B45C0
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B2A9C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA-AT.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802E7B20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180314D50 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        int *a3)
{
  int FeatureVariant; // eax
  unsigned int v5; // ecx
  int v6; // esi
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = HIDWORD(a1);
  v10 = 0;
  v12 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant((wil::details *)0x3544A83, 3LL, (__int64)&v12, &v10, a3);
  v5 = v10;
  *(_QWORD *)a2 = 0LL;
  v6 = FeatureVariant & 0x100;
  v7 = FeatureVariant & 0xFFFFFE7F;
  *a2 = (v5 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_UxAccOptimization>::GetImpl'::`2'::impl) )
  {
    *a2 &= 0xFFFC0FFF;
    goto LABEL_6;
  }
  v8 = *a2;
  if ( !v7 )
  {
    *a2 = v8 & 0xFFFC0FFF | 0x4000;
LABEL_6:
    a2[1] = 0;
    return a2;
  }
  *a2 = v8 ^ (v8 ^ (v7 << 12)) & 0x3F000;
  a2[1] = v6 != 0 ? v12 : 0;
  return a2;
}
