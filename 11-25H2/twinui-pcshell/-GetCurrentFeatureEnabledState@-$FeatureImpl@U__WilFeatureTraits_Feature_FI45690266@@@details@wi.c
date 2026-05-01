/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FI45690266@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803AB36C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FI45690266@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803A93E0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FI45690266@@@details@wil.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801D8C14 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_03_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802DE1D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_03_NonSec@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FI48896771@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803AF6AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FI48896771@@@details@wil@@QEAAX_NW4Report.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FI45690266>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  char v9; // cl
  int v10; // edi

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x2B92D9A,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x40) != 0 ? 0x800 : 0) | ((FeatureEnabledState & 0x80) != 0
                                                                                           ? 0x400
                                                                                           : 0);
  if ( (_DWORD)v6 )
  {
    v8 = 0;
    if ( (_DWORD)v6 == 2 )
      v8 = 64;
    v7 = v8 | (unsigned int)v7;
  }
  *(_DWORD *)a2 = v7;
  v9 = 0;
  v10 = 1;
  if ( (v7 & 0xC00) == 0xC00 || (v7 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_03_NonSec>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_03_NonSec>::GetImpl'::`2'::impl,
      v7,
      3072LL,
      v6);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FI48896771>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_FI48896771>::GetImpl'::`2'::impl);
    v9 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v9 )
    v10 = 0;
  *(_DWORD *)a2 = v10 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
