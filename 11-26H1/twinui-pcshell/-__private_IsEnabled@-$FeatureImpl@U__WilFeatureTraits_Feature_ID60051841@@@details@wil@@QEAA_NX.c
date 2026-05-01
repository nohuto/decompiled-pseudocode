/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NXZ @ 0x18063682C
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180621AA4 (--$serialize@Vinput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVinput_archive@ts.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180621B84 (--$serialize@Voutput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVoutput_archive@.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180632CA0 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180635280 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 *     ?evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ @ 0x180636E48 (-evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1806247D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806341B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
