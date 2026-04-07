/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800BF660
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BEA40 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18008A16C (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID52435335@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C0534 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID52435335@@@details@wil@@QEAAX_NW4Report.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // eax
  int v9; // edx
  char v10; // cl
  int v11; // edi

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x2B69C68,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v7;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v8 = 0;
    if ( v6 == 2 )
      v8 = 64;
  }
  else
  {
    v8 = 64;
  }
  v9 = v8 | v7;
  *(_DWORD *)a2 = v9;
  v10 = 0;
  v11 = 1;
  if ( (v9 & 0xC00) == 0xC00 || (v9 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID52435335>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_ID52435335>::GetImpl'::`2'::impl);
    v10 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v10 )
    v11 = 0;
  *(_DWORD *)a2 = v11 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
