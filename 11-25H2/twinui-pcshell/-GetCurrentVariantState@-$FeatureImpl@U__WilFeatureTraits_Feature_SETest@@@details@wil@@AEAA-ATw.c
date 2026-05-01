/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805936B4
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005F860 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATwi.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA?AW4Variant_SETest@@W4VariantReportingKind@3@_N@Z @ 0x18005F9E8 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA-AW4Va.c)
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BD500 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEA.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180318B48 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        int *a3)
{
  int FeatureVariant; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ecx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v12 = HIDWORD(a1);
  v11 = 0;
  v13 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant((wil::details *)0x1C567CD, 3LL, (__int64)&v13, &v11, a3);
  *(_QWORD *)a2 = 0LL;
  v5 = FeatureVariant & 0x100;
  v6 = FeatureVariant;
  *a2 = (v11 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
    0);
  v7 = *a2;
  v8 = v6 & 0xFFFFFE7F;
  if ( v8 )
  {
    v9 = 1966852;
    *a2 = v7 ^ (v7 ^ (v8 << 12)) & 0x3F000;
    if ( v5 )
      v9 = v13;
    a2[1] = v9;
  }
  else
  {
    a2[1] = 1966852;
    *a2 = v7 & 0xFFFC0FFF;
  }
  return a2;
}
