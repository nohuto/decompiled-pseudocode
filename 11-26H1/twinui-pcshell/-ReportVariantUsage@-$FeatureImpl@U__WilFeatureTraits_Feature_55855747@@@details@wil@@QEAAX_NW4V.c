/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAAX_NW4Variant_55855747@@W4VariantReportingKind@3@_K@Z @ 0x1803B8328
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA?AW4Variant_55855747@@W4VariantReportingKind@3@_N@Z @ 0x1803BAB68 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA-AW4.c)
 * Callees:
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18020F754 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B2A9C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA-AT.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::ReportVariantUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int64 a5)
{
  unsigned int v6; // ebp
  unsigned int v7; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int16 v14; // [rsp+64h] [rbp+Ch]

  v6 = a2;
  v7 = *(_DWORD *)a1;
  HIDWORD(a5) = *((_DWORD *)a1 + 1);
  LODWORD(a5) = v7;
  if ( (v7 & 4) != 0 )
  {
    v10 = a5;
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::GetCachedVariantState(
                       a1,
                       (__int64)&a5);
    a5 = v10;
    v7 = v10;
  }
  if ( a3 )
    v11 = HIDWORD(v10);
  else
    LODWORD(v11) = 0;
  v13 = 0;
  v14 = 1;
  return wil::details::ReportVariantUsageToService(
           (__int64)a1 + 8,
           0x3544A83u,
           (v7 >> 10) & 1,
           (v7 >> 11) & 1,
           (__int64)&v13,
           v6,
           a3,
           v11,
           a4);
}
