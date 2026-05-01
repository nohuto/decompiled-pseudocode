/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805AE170
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805ACE5C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA-AT.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_08_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802DDFE0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_08_NonSec@@@details@wil@@QE.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180318B48 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

unsigned int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::GetCurrentVariantState(
        __int64 a1,
        unsigned int *a2,
        int *a3)
{
  int FeatureVariant; // eax
  int v5; // esi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v14 = HIDWORD(a1);
  v13 = 0;
  v15 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant((wil::details *)0x2F626B1, 3LL, (__int64)&v15, &v13, a3);
  *(_QWORD *)a2 = 0LL;
  v5 = FeatureVariant & 0x100;
  v6 = FeatureVariant;
  v7 = v13 != 0 ? 0x400 : 0;
  *a2 = v7 | (16 * (FeatureVariant & 0x80));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_24_08_NonSec>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_24_08_NonSec>::GetImpl'::`2'::impl,
    v7,
    v8,
    v9);
  v10 = *a2;
  v11 = v6 & 0xFFFFFE7F;
  if ( v11 )
  {
    *a2 = v10 ^ (v10 ^ (v11 << 12)) & 0x3F000;
    a2[1] = v5 != 0 ? v15 : 0;
  }
  else
  {
    a2[1] = 0;
    *a2 = v10 & 0xFFFC0FFF;
  }
  return a2;
}
