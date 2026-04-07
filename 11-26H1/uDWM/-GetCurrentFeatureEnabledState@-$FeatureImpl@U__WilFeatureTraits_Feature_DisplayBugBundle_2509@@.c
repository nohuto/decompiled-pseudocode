/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2509@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AB2AC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2509@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AA944 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2509@@@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800766B8 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ValLabTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A14DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ValLabTest@@@details@wil@@QEAAX_NW4Report.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2508@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800AD210 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2508@@@details@w.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2509>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // ecx
  int v7; // r8d
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // r8
  int v12; // eax
  int v13; // edi
  __int64 v14; // rdx
  bool v15; // cl
  char v16; // si
  char IsEnabled; // al

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x36D9174,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0x80;
  v7 = 4 * (FeatureEnabledState & 0x40);
  v8 = FeatureEnabledState & 0xFFFFFF3F;
  v9 = (8 * (v6 | v7)) | ((v8 & 3) << 7);
  if ( v8 )
  {
    v10 = 0;
    if ( v8 == 2 )
      v10 = 64;
    v11 = v10;
  }
  else
  {
    v10 = 64;
    v11 = 64LL;
  }
  v12 = v9;
  v13 = 1;
  v14 = v10 | v9;
  v15 = 0;
  *(_DWORD *)a2 = v11 | v12;
  if ( (v14 & 0x400) != 0 && (unsigned int)v14 >= 0x800 )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( (v14 & 0x40) == 0 )
      goto LABEL_13;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ValLabTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ValLabTest>::GetImpl'::`2'::impl,
    v14,
    v11);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2508>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DisplayBugBundle_2508>::GetImpl'::`2'::impl);
  v15 = IsEnabled != 0;
  if ( v16 && !IsEnabled )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_13:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v15 )
    v13 = 0;
  *(_DWORD *)a2 = v13 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
