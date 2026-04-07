/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConvergence@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800E5104
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConvergence@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E495C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConverg.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18008A16C (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800ADCAC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NTUserRailV2Support@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E7D5C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NTUserRailV2Support@@@details@wil@@QEAAX_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800E9258 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2@@@de.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplyWindowActionConvergence>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // eax
  bool v9; // cl
  int v10; // edi
  char v11; // si

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x34C5626,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v8 = 0;
    if ( v6 == 2 )
      v8 = 64;
    v7 |= v8;
  }
  *(_DWORD *)a2 = v7;
  v9 = 0;
  v10 = 1;
  if ( (v7 & 0xC00) == 0xC00 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( (v7 & 0x40) == 0 )
      goto LABEL_15;
  }
  v9 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_UxAccOptimization>::GetImpl'::`2'::impl) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_NTUserRailV2Support>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_NTUserRailV2Support>::GetImpl'::`2'::impl);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2>::GetImpl'::`2'::impl) )
      v9 = 1;
  }
  if ( v11 && !v9 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_15:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v9 )
    v10 = 0;
  *(_DWORD *)a2 = v10 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
