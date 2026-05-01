/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18021C264
 * Callers:
 *     ?UnsubscribeFromServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D89F0 (-UnsubscribeFromServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180260A50 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJV?$com_ptr_t@UIApplicationViewVisibilityDebouncedNotificationService@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180556A10 (-SubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJV-$com_ptr_t@UIApplicationViewVisi.c)
 *     ?UnsubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJXZ @ 0x180558030 (-UnsubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJXZ.c)
 *     ?TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x18056887C (-TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18054B590 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  unsigned int v5; // r8d
  unsigned int v6; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::GetCachedFeatureEnabledState(
                      a1,
                      &v7);
    v5 = v7;
  }
  LODWORD(v8) = 0;
  WORD2(v8) = 3;
  wil::details::ReportUsageToService((__int64)(a1 + 2), 0x1EC58F4u, (v5 >> 10) & 1, (v5 >> 11) & 1, (__int64)va, v6, v3);
}
