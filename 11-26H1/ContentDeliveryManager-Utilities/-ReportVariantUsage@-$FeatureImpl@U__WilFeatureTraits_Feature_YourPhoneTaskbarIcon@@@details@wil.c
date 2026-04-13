/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x18003A0B0
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA?AW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x18003E1B4 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@w.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180030B34 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18003A184 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportVariantUsage(
        wil::details *a1,
        unsigned __int8 a2,
        char a3,
        int a4,
        unsigned __int64 a5)
{
  int v6; // ebp
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
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
                       a1,
                       (__int64)&a5);
    a5 = v10;
    v7 = v10;
  }
  if ( a3 )
    v11 = HIDWORD(v10);
  else
    LODWORD(v11) = 0;
  v13 = 2;
  v14 = 3;
  return wil::details::ReportVariantUsageToService(
           (char *)a1 + 8,
           0LL,
           (v7 >> 10) & 1,
           (v7 >> 11) & 1,
           &v13,
           v6,
           a3,
           v11,
           a4);
}
