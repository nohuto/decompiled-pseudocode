/*
 * XREFs of _lambda_96ecd2df1703701600c983d4c680e5f8_::operator() @ 0x1805A8D4C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_96ecd2df1703701600c983d4c680e5f8__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1805B6DA0 (std--_Func_impl_no_alloc__lambda_96ecd2df1703701600c983d4c680e5f8__void_winrt--Wind_ea_1805B6DA0.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_ @ 0x18005BCDC (std--_Optional_destruct_base__anonymous_namespace_--DashboardExtensionVersion_0_--__Optional_des.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x18005BCF8 (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x180217230 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282748 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1802B4FA4 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEB_N$$QEAPEBG3AEAY0L@$$CBGAEAPEBG@Z @ 0x1805A00AC (--$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@.c)
 *     std::_Optional_construct_base__anonymous_namespace_::DashboardExtensionVersion_::_Assign__anonymous_namespace_::DashboardExtensionVersion_ @ 0x1805A056C (std--_Optional_construct_base__anonymous_namespace_--DashboardExtensionVersion_--_Assign__anonym.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x1805AE22C (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     ?StartSwipe@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBUPoint@Foundation@Windows@3@@Z @ 0x1805B35EC (-StartSwipe@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Das.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805B4DB8 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805B709C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix@@@details@wil@@QEAA_NXZ @ 0x1805B7568 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookup.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_96ecd2df1703701600c983d4c680e5f8_::operator()(__int64 a1, IUnknown **a2)
{
  HRESULT v4; // eax
  __int64 DashboardAppExtension; // rax
  __int64 AvailableDashboardExtensionVersion_0; // rax
  const WCHAR *v7; // rax
  _QWORD *v8; // rax
  const WCHAR *v9; // rax
  int v10; // eax
  HRESULT v11; // eax
  float v12; // xmm1_4
  int v13; // [rsp+28h] [rbp-D8h]
  int v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v15; // [rsp+48h] [rbp-B8h] BYREF
  const WCHAR *v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v18[56]; // [rsp+60h] [rbp-A0h] BYREF
  char v19; // [rsp+98h] [rbp-68h]
  IUnknown **v20; // [rsp+A0h] [rbp-60h]
  _BYTE v21[64]; // [rsp+A8h] [rbp-58h] BYREF
  GUID pguid; // [rsp+E8h] [rbp-18h] BYREF
  GUID v23; // [rsp+F8h] [rbp-8h] BYREF
  void *v24[4]; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v20 = a2;
  pguid = 0LL;
  v4 = CoCreateGuid(&pguid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4B2,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v4);
  std::wstring::wstring((char **)v24, &LocaleName);
  v19 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::GetImpl'::`2'::impl)
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
  {
    DashboardAppExtension = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
                              *(_QWORD *)a1,
                              v14);
    AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0(
                                             v21,
                                             DashboardAppExtension);
  }
  else
  {
    AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion((__int64)v21);
  }
  if ( *(_BYTE *)(AvailableDashboardExtensionVersion_0 + 56) )
  {
    std::_Optional_construct_base__anonymous_namespace_::DashboardExtensionVersion_::_Assign__anonymous_namespace_::DashboardExtensionVersion_(
      (__int64)v18,
      AvailableDashboardExtensionVersion_0);
  }
  else if ( v19 )
  {
    anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion((__int64)v18);
    v19 = 0;
  }
  std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v21);
  if ( v19 )
  {
    v7 = (const WCHAR *)(std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)v18) + 24);
    if ( *((_QWORD *)v7 + 3) > 7uLL )
      v7 = *(const WCHAR **)v7;
  }
  else
  {
    v7 = &LocaleName;
  }
  v16 = v7;
  v8 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 40) > 7uLL )
    v8 = (_QWORD *)*v8;
  *(_QWORD *)v17 = v8;
  v9 = (const WCHAR *)v24;
  if ( v24[3] > (void *)7 )
    v9 = (const WCHAR *)v24[0];
  v15 = v9;
  v14[0] = 3;
  v23 = pguid;
  DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool const &,unsigned short const *,unsigned short const *,unsigned short const (&)[11],unsigned short const * &>(
    (__int128 *)&v23,
    v14,
    (_BYTE *)(a1 + 48),
    &v15,
    (const WCHAR **)v17,
    v13,
    &v16);
  v10 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4C8,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v10);
  v11 = CoAllowSetForegroundWindow(*a2, 0LL);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4C9,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v11);
  v12 = (float)*(int *)(a1 + 12);
  *(float *)v14 = (float)*(int *)(a1 + 8);
  *(float *)&v14[1] = v12;
  v23 = pguid;
  winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::StartSwipe(
    a2,
    &v23,
    v14);
  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(*(_QWORD *)a1 + 152LL), (__int64 *)a2);
  std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v18);
  std::wstring::_Tidy_deallocate(v24);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
}
