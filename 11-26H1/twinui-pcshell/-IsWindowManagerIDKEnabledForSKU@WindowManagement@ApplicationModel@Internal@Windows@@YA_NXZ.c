/*
 * XREFs of ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1800C8E88
 * Callers:
 *     ?IsUwpWindowEventDispatcherDisabled@@YA_NXZ @ 0x1800C8E70 (-IsUwpWindowEventDispatcherDisabled@@YA_NXZ.c)
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800CA22C (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 *     ?IsUwpWindowEventDispatcherEnabled@@YA_NXZ @ 0x1802C63F0 (-IsUwpWindowEventDispatcherEnabled@@YA_NXZ.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802F7058 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x18034AB00 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 * Callees:
 *     ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18006D36C (-IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18006E120 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesk.c)
 *     ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802BB5C0 (-IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationActivationWatcher@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802F2370 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationActivationWat.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RequestFromAppModelWatcher@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802F2444 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RequestFromAppModelWatch.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802F2B90 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 */

char __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(
        Windows::Internal::ApplicationModel::WindowManagement *this)
{
  Windows::Internal::ApplicationModel::WindowManagement *v1; // rcx
  char IsIDKOnXboxEnabled; // al
  char v3; // dl
  Windows::Internal::ApplicationModel::WindowManagement *v4; // rcx
  char v5; // bl
  char v6; // di
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  Windows::Internal::ApplicationModel::WindowManagement *v10; // [rsp+60h] [rbp+20h] BYREF
  int v11; // [rsp+68h] [rbp+28h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp+2Ch]
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF

  LODWORD(v10) = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v10, 0LL);
  IsIDKOnXboxEnabled = Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled(v1);
  v4 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v10;
  v5 = 0;
  v6 = IsIDKOnXboxEnabled;
  if ( (_DWORD)v10 == 16 )
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsMinShellPresent((Windows::Internal::ApplicationModel::WindowManagement *)0x10) )
      goto LABEL_8;
    v4 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v10;
  }
  if ( (_DWORD)v4 == 5 && v6 || (_DWORD)v4 == 11 && v6 || (_DWORD)v4 == 12 && v6 )
    goto LABEL_8;
  if ( (_DWORD)v4 == 10 )
  {
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled(v4) )
      goto LABEL_8;
    LODWORD(v4) = (_DWORD)v10;
  }
  if ( (_DWORD)v4 != 3 && (_DWORD)v4 != 9 )
    return v5;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::GetImpl'::`2'::impl,
    v3);
LABEL_8:
  v7 = `wil::Feature<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v13 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetImpl'::`2'::impl,
                       &v13);
    v7 = v13;
  }
  v11 = 0;
  v12 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1808DAFE8,
    0x14B83D3u,
    (v7 >> 10) & 1,
    (v7 >> 11) & 1,
    (__int64)&v11,
    1u,
    3);
  v8 = `wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v13 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl,
                       &v13);
    v8 = v13;
  }
  v11 = 0;
  v12 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1808DAFF8,
    0x13DADF1u,
    (v8 >> 10) & 1,
    (v8 >> 11) & 1,
    (__int64)&v11,
    1u,
    3);
  return 1;
}
