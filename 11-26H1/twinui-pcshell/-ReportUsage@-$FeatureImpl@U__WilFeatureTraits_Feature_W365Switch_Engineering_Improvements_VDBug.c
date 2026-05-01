/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A0100
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180260A50 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180552D50 (-FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesk.c)
 *     ?SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180557A30 (-SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805584F0 (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x18055AD24 (-_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18054B664 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_I.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::ReportUsage(
        _DWORD *a1,
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
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetCachedFeatureEnabledState(
                      a1,
                      &v6);
    v6 = v3;
  }
  LODWORD(v7) = 0;
  WORD2(v7) = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x2CEF947u,
    ((unsigned int)v3 >> 10) & 1,
    ((unsigned int)v3 >> 11) & 1,
    (__int64)va,
    v5,
    3);
}
