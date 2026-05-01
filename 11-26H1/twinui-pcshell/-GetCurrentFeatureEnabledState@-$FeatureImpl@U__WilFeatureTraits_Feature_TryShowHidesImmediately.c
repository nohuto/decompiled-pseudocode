/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18046DA68
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18046D160 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801CE808 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_10_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E8FEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_10_NonSec@@@details@wil@@QE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180330638 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NW4R.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticGamepadInvocation@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180474924 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticGamepadInvocation@@@deta.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18047499C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DelegationInCoreInputView_5878910.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // ecx
  int v7; // r8d
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // edi
  char v15; // si

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x384EF0B,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0x80;
  v7 = 4 * (FeatureEnabledState & 0x40);
  v8 = FeatureEnabledState & 0xFFFFFF3F;
  v9 = (8 * (v6 | v7)) | ((unsigned __int8)(v8 & 3) << 7);
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
  v12 = v9 | v10;
  v13 = v11 | v9;
  LOBYTE(v9) = 0;
  *(_DWORD *)a2 = v13;
  v14 = 1;
  if ( (v12 & 0x400) != 0 && v12 >= 0x800 )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    if ( (v12 & 0x40) == 0 )
      goto LABEL_18;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_10_NonSec>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_10_NonSec>::GetImpl'::`2'::impl,
    v9,
    v11);
  LOBYTE(v9) = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108>::GetImpl'::`2'::impl)
            && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutomaticGamepadInvocation>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AutomaticGamepadInvocation>::GetImpl'::`2'::impl)
            && wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  if ( v15 && !(_BYTE)v9 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_18:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !(_BYTE)v9 )
    v14 = 0;
  *(_DWORD *)a2 = v14 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
