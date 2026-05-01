/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180348B94
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180347C10 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovement.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801CE808 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_09_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E4CC4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_09_NonSec@@@details@wil@@QE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802E7938 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NW4R.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GameInput_XInputExplorer@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180358AC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GameInput_XInputExplorer@@@detail.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  bool v11; // cl
  int v12; // edi
  char v13; // si
  __int64 v14; // rdx
  __int64 v15; // r8

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x359F505,
                                        0LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = (8 * (FeatureEnabledState & 0x80 | (4 * (FeatureEnabledState & 0x40)))) | ((FeatureEnabledState & 3) << 7);
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v8 = 0;
    if ( v6 == 2 )
      v8 = 64;
    v9 = v7 | v8;
  }
  else
  {
    v8 = 64;
    v9 = v7 | 0x40;
  }
  *(_DWORD *)a2 = v9;
  v10 = v7 | v8;
  v11 = 0;
  v12 = 1;
  if ( (v10 & 0x400) != 0 && v10 >= 0x800 )
  {
    v13 = 1;
  }
  else
  {
    v13 = 0;
    if ( (v10 & 0x40) == 0 )
      goto LABEL_17;
  }
  v11 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_50902630>::GetImpl'::`2'::impl) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_09_NonSec>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_09_NonSec>::GetImpl'::`2'::impl,
      v14,
      v15);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameInput_XInputExplorer>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GameInput_XInputExplorer>::GetImpl'::`2'::impl) )
      v11 = 1;
  }
  if ( v13 && !v11 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_17:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v11 )
    v12 = 0;
  *(_DWORD *)a2 = v12 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
