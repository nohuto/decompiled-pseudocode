/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180074108
 * Callers:
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18021F69C (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?OnViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180233D20 (-OnViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?Hide@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180244A90 (-Hide@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x180245368 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 *     ?Show@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180245630 (-Show@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180245720 (-SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180245C20 (-UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Close@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180343570 (-Close@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18034E2F0 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetAllowPointerActivation@GamingOverlayExperienceManager@@UEAAJE@Z @ 0x18034F020 (-SetAllowPointerActivation@GamingOverlayExperienceManager@@UEAAJE@Z.c)
 *     ?SetForeground@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18034F3C0 (-SetForeground@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z @ 0x18034F5D0 (-SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z.c)
 *     ?get_IsMultiWindowSupported@GamingOverlayExperienceManager@@UEAAJPEAE@Z @ 0x1803534B0 (-get_IsMultiWindowSupported@GamingOverlayExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180074308 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindow.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // edi
  __int64 v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h] BYREF
  __int16 v7; // [rsp+4Ch] [rbp-1Ch]

  v2 = *a1;
  v4 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v5 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetCachedFeatureEnabledState(
                      a1,
                      &v5);
    v2 = v5;
  }
  v6 = 0;
  v7 = 3;
  wil::details::ReportUsageToService((__int64)(a1 + 2), 0x1CF9176u, (v2 >> 10) & 1, (v2 >> 11) & 1, (__int64)&v6, v4, 3);
}
