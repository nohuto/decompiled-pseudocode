/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805B76A4
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA?AW4Variant_SETest@@W4VariantReportingKind@3@_N@Z @ 0x1800B9D3C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA-AW4Va.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B9EEC (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATwi.c)
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800E48C4 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEA.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180314D50 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        int *a3)
{
  int FeatureVariant; // eax
  unsigned int v5; // ecx
  int v6; // esi
  int v7; // ebx
  int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = HIDWORD(a1);
  v12 = 0;
  v14 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant((wil::details *)0x1C567CD, 3LL, (__int64)&v14, &v12, a3);
  v5 = v12;
  *(_QWORD *)a2 = 0LL;
  v6 = FeatureVariant & 0x100;
  v7 = FeatureVariant;
  *a2 = (v5 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
    0);
  v8 = *a2;
  v9 = v7 & 0xFFFFFE7F;
  if ( v9 )
  {
    v10 = 1966852;
    *a2 = v8 ^ (v8 ^ (v9 << 12)) & 0x3F000;
    if ( v6 )
      v10 = v14;
    a2[1] = v10;
  }
  else
  {
    a2[1] = 1966852;
    *a2 = v8 & 0xFFFC0FFF;
  }
  return a2;
}
