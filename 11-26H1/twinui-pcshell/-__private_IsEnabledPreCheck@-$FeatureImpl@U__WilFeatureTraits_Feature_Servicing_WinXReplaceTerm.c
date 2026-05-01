/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180227A40
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801927C4 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ABCDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::__private_IsEnabledPreCheck(
        _DWORD *a1,
        __int64 a2,
        __int64 a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    a1,
    1u,
    a3);
  return 1;
}
