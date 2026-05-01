/*
 * XREFs of ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180074580
 * Callers:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800A5438 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 *     ?IsUwpWindowEventDispatcherDisabled@@YA_NXZ @ 0x180225610 (-IsUwpWindowEventDispatcherDisabled@@YA_NXZ.c)
 *     ?IsUwpWindowEventDispatcherEnabled@@YA_NXZ @ 0x1802CEF70 (-IsUwpWindowEventDispatcherEnabled@@YA_NXZ.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FBE50 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x180347810 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 * Callees:
 *     ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180072428 (-IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180073188 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesk.c)
 *     ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802C4674 (-IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationActivationWatcher@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802F72CC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationActivationWat.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RequestFromAppModelWatcher@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802F73B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RequestFromAppModelWatch.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802F7B30 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
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
  _BYTE v10[8]; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-8h] BYREF
  Windows::Internal::ApplicationModel::WindowManagement *v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF
  __int16 v15; // [rsp+84h] [rbp+34h]
  __int64 v16; // [rsp+88h] [rbp+38h]

  LODWORD(v12) = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v12, 0LL);
  IsIDKOnXboxEnabled = Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled(v1);
  v4 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v12;
  v5 = 0;
  v6 = IsIDKOnXboxEnabled;
  if ( (_DWORD)v12 == 16 )
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsMinShellPresent((Windows::Internal::ApplicationModel::WindowManagement *)0x10) )
      goto LABEL_8;
    v4 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v12;
  }
  if ( (_DWORD)v4 == 5 && v6 || (_DWORD)v4 == 11 && v6 || (_DWORD)v4 == 12 && v6 )
    goto LABEL_8;
  if ( (_DWORD)v4 == 10 )
  {
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled(v4) )
      goto LABEL_8;
    LODWORD(v4) = (_DWORD)v12;
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
    v16 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetImpl'::`2'::impl,
                       v10);
    v7 = v16;
  }
  LODWORD(v13) = 0;
  WORD2(v13) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_18089A938,
    0x14B83D3u,
    (v7 >> 10) & 1,
    (v7 >> 11) & 1,
    (__int64)&v13,
    1u,
    3);
  v8 = `wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v13 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl,
                       v11);
    v8 = v13;
  }
  v14 = 0;
  v15 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_18089A928,
    0x13DADF1u,
    (v8 >> 10) & 1,
    (v8 >> 11) & 1,
    (__int64)&v14,
    1u,
    3);
  return 1;
}
