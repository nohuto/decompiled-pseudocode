/*
 * XREFs of _lambda_7099901f832ab090231de188016256f4_::operator() @ 0x1805CCE00
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7099901f832ab090231de188016256f4__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1805DA6F0 (std--_Func_impl_no_alloc__lambda_7099901f832ab090231de188016256f4__void_winrt--Wind_ea_1805DA6F0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_ @ 0x1801C9850 (std--_Optional_destruct_base__anonymous_namespace_--DashboardExtensionVersion_0_--__Optional_des.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1801C986C (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x180208B60 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180279994 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0 @ 0x180295C90 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_0.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1802AC1D8 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEB_N$$QEAPEBG3AEAY0L@$$CBGAEAPEBG@Z @ 0x1805C42F0 (--$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::operator_ @ 0x1805CC5E8 (_anonymous_namespace_--DashboardExtensionVersion--operator_.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x1805D2064 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     ?StartSwipe@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBUPoint@Foundation@Windows@3@@Z @ 0x1805D745C (-StartSwipe@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Das.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D89C0 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805DA9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix@@@details@wil@@QEAA_NXZ @ 0x1805DAEB4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookup.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_7099901f832ab090231de188016256f4_::operator()(__int64 a1, IUnknown **a2)
{
  HRESULT v4; // eax
  const WCHAR *v5; // rbx
  __int64 DashboardAppExtension; // rax
  __int64 AvailableDashboardExtensionVersion_0; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  const WCHAR *v10; // rax
  int v11; // eax
  HRESULT v12; // eax
  int v13; // [rsp+28h] [rbp-D8h]
  int v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15[7]; // [rsp+50h] [rbp-B0h] BYREF
  char v16; // [rsp+88h] [rbp-78h]
  const WCHAR *v17; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v18; // [rsp+98h] [rbp-68h] BYREF
  int v19[2]; // [rsp+A0h] [rbp-60h] BYREF
  IUnknown **v20; // [rsp+A8h] [rbp-58h]
  _BYTE v21[64]; // [rsp+B0h] [rbp-50h] BYREF
  GUID pguid; // [rsp+F0h] [rbp-10h] BYREF
  GUID v23; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v24[4]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v20 = a2;
  pguid = 0LL;
  v4 = CoCreateGuid(&pguid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4CF,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = &pvData;
  std::wstring::wstring((__int64)v24, (__int64)&pvData);
  v16 = 0;
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
    if ( v16 )
    {
      anonymous_namespace_::DashboardExtensionVersion::operator_(v15, (__int64 *)AvailableDashboardExtensionVersion_0);
    }
    else
    {
      anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0(
        v15,
        (__int64 *)AvailableDashboardExtensionVersion_0);
      v16 = 1;
    }
  }
  else if ( v16 )
  {
    anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion(v15);
    v16 = 0;
  }
  std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v21);
  if ( v16 )
  {
    v8 = std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)v15);
    v5 = (const WCHAR *)(v8 + 24);
    if ( *(_QWORD *)(v8 + 48) > 7uLL )
      v5 = *(const WCHAR **)v5;
  }
  v18 = v5;
  v9 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 40) > 7uLL )
    v9 = (_QWORD *)*v9;
  *(_QWORD *)v19 = v9;
  v10 = (const WCHAR *)v24;
  if ( v24[3] > 7uLL )
    v10 = (const WCHAR *)v24[0];
  v17 = v10;
  v14[0] = 3;
  v23 = pguid;
  DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool const &,unsigned short const *,unsigned short const *,unsigned short const (&)[11],unsigned short const * &>(
    (__int128 *)&v23,
    v14,
    (_BYTE *)(a1 + 48),
    &v17,
    (const WCHAR **)v19,
    v13,
    &v18);
  v11 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4E5,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v11);
  v12 = CoAllowSetForegroundWindow(*a2, 0LL);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4E6,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v12);
  *(float *)v14 = (float)*(int *)(a1 + 8);
  *(float *)&v14[1] = (float)*(int *)(a1 + 12);
  v23 = pguid;
  winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::StartSwipe(
    a2,
    &v23,
    v14);
  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(*(_QWORD *)a1 + 152LL), (__int64 *)a2);
  std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v15);
  std::wstring::_Tidy_deallocate(v24);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
}
