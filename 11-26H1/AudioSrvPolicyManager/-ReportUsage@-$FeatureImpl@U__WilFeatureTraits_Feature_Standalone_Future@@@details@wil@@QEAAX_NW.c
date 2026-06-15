/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003CEA0
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18003D720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003B864 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@deta.c)
 */

_QWORD *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_Future>::ReportUsage(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  _QWORD *result; // rax
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  result = (_QWORD *)*(unsigned int *)Feature_Standalone_Future__descriptor;
  if ( ((unsigned __int8)result & 4) == 0 )
    return wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_Future>::GetCachedFeatureEnabledState(
             a1,
             (__int64 *)va);
  return result;
}
