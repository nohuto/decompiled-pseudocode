/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802E1900
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802E05B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@detail.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801CE808 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802E79F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802E7A6C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers@@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802E7B20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapLauncherAPI>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  int v5; // edi
  unsigned int FeatureEnabledState; // eax
  unsigned int v7; // r9d
  int v8; // r8d
  char v9; // dl
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  __int16 v13; // dx
  bool v14; // cl
  char v15; // si

  v5 = 1;
  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x306858F,
                                        1LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  v8 = FeatureEnabledState & 0x80 | (4 * (FeatureEnabledState & 0x40));
  v9 = FeatureEnabledState & 0x3F;
  v10 = 0;
  v11 = (8 * v8) | ((v9 & 3) << 7);
  if ( v7 )
  {
    if ( v7 == 2 )
      v10 = 64;
    v12 = v11 | v10;
  }
  else
  {
    v12 = v11;
  }
  v13 = v10 | v11;
  *(_DWORD *)a2 = v12;
  v14 = 0;
  if ( (v13 & 0xC00) == 0xC00 )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    if ( (v13 & 0x40) == 0 )
      goto LABEL_17;
  }
  v14 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers>::GetImpl'::`2'::impl)
     && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_UxAccOptimization>::GetImpl'::`2'::impl)
     && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustStartMenu>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullTrustStartMenu>::GetImpl'::`2'::impl);
  if ( v15 && !v14 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_17:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v14 )
    v5 = 0;
  *(_DWORD *)a2 = v5 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
