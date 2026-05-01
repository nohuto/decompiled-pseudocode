/*
 * XREFs of ?IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18022ED98
 * Callers:
 *     ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x1802B797C (-ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ.c)
 * Callees:
 *     ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18006D36C (-IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18006E120 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesk.c)
 *     ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802BB5C0 (-IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802F2B90 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewManagerPhaseout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804326D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewManagerPhaseout@@@details@wil@@QEAAX_.c)
 */

char __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsViewManagerPhaseoutEnabled(
        Windows::Internal::ApplicationModel::WindowManagement *this)
{
  Windows::Internal::ApplicationModel::WindowManagement *v1; // rcx
  char IsIDKOnXboxEnabled; // al
  __int64 v3; // rdx
  Windows::Internal::ApplicationModel::WindowManagement *v4; // rcx
  char v5; // bl
  char v6; // di
  Windows::Internal::ApplicationModel::WindowManagement *v8; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v8) = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v8, 0LL);
  IsIDKOnXboxEnabled = Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled(v1);
  v4 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v8;
  v5 = 0;
  v6 = IsIDKOnXboxEnabled;
  if ( (_DWORD)v8 == 16 )
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsMinShellPresent((Windows::Internal::ApplicationModel::WindowManagement *)0x10) )
      goto LABEL_16;
    v4 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v8;
  }
  if ( (_DWORD)v4 == 5 && v6 || (_DWORD)v4 == 11 && v6 || (_DWORD)v4 == 12 && v6 )
    goto LABEL_16;
  if ( (_DWORD)v4 == 10 )
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled(v4) )
    {
      LODWORD(v4) = (_DWORD)v8;
      goto LABEL_13;
    }
LABEL_16:
    v5 = 1;
    LOBYTE(v3) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewManagerPhaseout>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ViewManagerPhaseout>::GetImpl'::`2'::impl,
      v3);
    return v5;
  }
LABEL_13:
  if ( (_DWORD)v4 == 3 || (_DWORD)v4 == 9 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::__private_IsEnabledPreCheck(
      `wil::Feature<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::GetImpl'::`2'::impl,
      v3);
    goto LABEL_16;
  }
  return v5;
}
