/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180299D48
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800ABDC8 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18024A938 (-InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x180299CE8 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 *     ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18067E950 (-InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x180687288 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180124780 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@detai.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  LODWORD(v3) = *(_DWORD *)a1;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v3 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::GetCachedFeatureEnabledState(a1, &v6);
    v6 = v3;
  }
  LODWORD(v7) = 1;
  WORD2(v7) = 3;
  wil::details::ReportUsageToService(
    (__int64)a1 + 8,
    0x1191BDDu,
    ((unsigned int)v3 >> 10) & 1,
    ((unsigned int)v3 >> 11) & 1,
    (__int64)va,
    v5,
    3);
}
