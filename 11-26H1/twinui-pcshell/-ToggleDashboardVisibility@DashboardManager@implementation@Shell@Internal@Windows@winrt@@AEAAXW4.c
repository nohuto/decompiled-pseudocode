/*
 * XREFs of ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D7E2C
 * Callers:
 *     ?OnMessage@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x18026D9A0 (-OnMessage@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1800CD0A4 (-IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_ @ 0x1801C9850 (std--_Optional_destruct_base__anonymous_namespace_--DashboardExtensionVersion_0_--__Optional_des.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1801C986C (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x180208B60 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180279994 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName @ 0x180279CBC (_anonymous_namespace_--TryGetDashboardPackageName.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0 @ 0x180295C90 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_0.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ??$DashboardInteracted@AEAU_GUID@@IAEA_NAEAY00$$CBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAXAEAU_GUID@@$$QEAIAEA_NAEAY00$$CBG$$QEAPEBGAEAY0BK@$$CBGAEAPEBG@Z @ 0x1805C41C0 (--$DashboardInteracted@AEAU_GUID@@IAEA_NAEAY00$$CBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTele.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::operator_ @ 0x1805CC5E8 (_anonymous_namespace_--DashboardExtensionVersion--operator_.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x1805D2064 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     ?ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uguid@6@W4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D8660 (-ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D89C0 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName_0 @ 0x1805D8AF4 (_anonymous_namespace_--TryGetDashboardPackageName_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805DA9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix@@@details@wil@@QEAA_NXZ @ 0x1805DAEB4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookup.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibility(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 *v3; // rsi
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v4; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  HRESULT v7; // eax
  const char *v8; // r9
  __int64 *DashboardAppExtension; // rax
  _QWORD *DashboardPackageName_0; // rax
  __int64 *v11; // rax
  __int64 AvailableDashboardExtensionVersion_0; // rax
  __int64 v13; // r9
  const WCHAR *v14; // rax
  __int128 *v15; // rax
  int v16; // [rsp+28h] [rbp-100h]
  char v17[8]; // [rsp+40h] [rbp-E8h] BYREF
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v18; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v19[7]; // [rsp+50h] [rbp-D8h] BYREF
  char v20; // [rsp+88h] [rbp-A0h]
  __int128 v21; // [rsp+90h] [rbp-98h] BYREF
  GUID pguid; // [rsp+A0h] [rbp-88h] BYREF
  _OWORD v23[4]; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v24; // [rsp+F0h] [rbp-38h] BYREF
  __m128i si128; // [rsp+100h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v3 = a3;
  v4 = (winrt::Windows::Internal::Shell::implementation::DashboardManager *)a1;
  v18 = (winrt::Windows::Internal::Shell::implementation::DashboardManager *)a1;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    || (result = IsGamingFullScreenExperienceActive(v5), !(_DWORD)result) )
  {
    pguid = 0LL;
    v7 = CoCreateGuid(&pguid);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x784,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v7);
    try
    {
      v17[0] = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardVisible(v4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x78B,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        v8);
      v3 = a3;
      v4 = v18;
    }
    v24 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v24) = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
    {
      DashboardAppExtension = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
                                (RTL_SRWLOCK *)v4,
                                (__int64 *)&v18);
      DashboardPackageName_0 = (_QWORD *)anonymous_namespace_::TryGetDashboardPackageName_0(
                                           v23,
                                           (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)DashboardAppExtension);
      std::wstring::operator=(&v24, DashboardPackageName_0);
      std::wstring::_Tidy_deallocate(v23);
    }
    else
    {
      anonymous_namespace_::TryGetDashboardPackageName(&v24);
    }
    v20 = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::GetImpl'::`2'::impl)
      && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
    {
      v11 = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
              (RTL_SRWLOCK *)v4,
              (__int64 *)&v18);
      AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0(v23, v11);
    }
    else
    {
      AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion((__int64)v23);
    }
    if ( *(_BYTE *)(AvailableDashboardExtensionVersion_0 + 56) )
    {
      if ( v20 )
      {
        anonymous_namespace_::DashboardExtensionVersion::operator_(v19, (__int64 *)AvailableDashboardExtensionVersion_0);
      }
      else
      {
        anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0(
          v19,
          (__int64 *)AvailableDashboardExtensionVersion_0);
        v20 = 1;
      }
    }
    else if ( v20 )
    {
      anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion(v19);
      v20 = 0;
    }
    std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v23);
    if ( v20 )
    {
      v14 = (const WCHAR *)(std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)v19) + 24);
      if ( *((_QWORD *)v14 + 3) > 7uLL )
        v14 = *(const WCHAR **)v14;
    }
    else
    {
      v14 = &pvData;
    }
    *(_QWORD *)&v21 = v14;
    v15 = &v24;
    if ( si128.m128i_i64[1] > 7uLL )
      v15 = (__int128 *)v24;
    *(_QWORD *)&v23[0] = v15;
    LODWORD(v18) = 1;
    DashboardManagerTelemetry::DashboardInteracted<_GUID &,unsigned int,bool &,unsigned short const (&)[1],unsigned short const *,unsigned short const (&)[26],unsigned short const * &>(
      (__int128 *)&pguid,
      (int *)&v18,
      v17,
      v13,
      (const WCHAR **)v23,
      v16,
      (const WCHAR **)&v21);
    v23[0] = pguid;
    v21 = *v3;
    winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync(v4, v17, v23);
    std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v19);
    return std::wstring::_Tidy_deallocate(&v24);
  }
  return result;
}
