/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801D7BA4
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x18009D874 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x18019913C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ @ 0x1801D7B10 (-RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x1805DC0C0 (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator().c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1805DD240 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801D7C2C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTer.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetCachedFeatureEnabledState(
                      a1,
                      v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x23CC459u,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v8,
    v6,
    3);
}
