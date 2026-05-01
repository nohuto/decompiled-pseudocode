/*
 * XREFs of ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18026CD50
 * Callers:
 *     <none>
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DashboardActivatorActivatingDashboard@DashboardManagerTelemetry@@SAXXZ @ 0x18018C964 (-DashboardActivatorActivatingDashboard@DashboardManagerTelemetry@@SAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0AEBW4AppExtensionOptions@2345@@Z @ 0x1801F4DEC (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@par.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x18021A770 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805D21D8 (_anonymous_namespace_--GetDashboardExtensionName.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805DA9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardActivator::CreateInstance(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v6; // eax
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r10
  unsigned __int8 v11; // r11
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // di
  unsigned __int8 v14; // si
  const char *v15; // r9
  unsigned int v16; // eax
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // r9
  unsigned __int8 v21; // r10
  unsigned __int8 v22; // r11
  unsigned __int8 v23; // bl
  unsigned __int8 v24; // di
  const char *v25; // r9
  const char *v26; // r9
  __int64 result; // rax
  int v28[2]; // [rsp+20h] [rbp-C8h] BYREF
  void (__fastcall ***v29)(_QWORD, __int64 *, __int64 *); // [rsp+28h] [rbp-C0h] BYREF
  int v30; // [rsp+30h] [rbp-B8h] BYREF
  void (__fastcall ***v31)(_QWORD, __int64 *, __int64 *); // [rsp+38h] [rbp-B0h] BYREF
  int v32[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-A0h]
  int v34; // [rsp+50h] [rbp-98h] BYREF
  __int128 v35; // [rsp+58h] [rbp-90h]
  _BYTE v36[32]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v37[4]; // [rsp+90h] [rbp-58h] BYREF
  const wchar_t *v38; // [rsp+B0h] [rbp-38h] BYREF
  __int128 v39; // [rsp+B8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  DashboardManagerTelemetry::DashboardActivatorActivatingDashboard();
  *a4 = 0LL;
  try
  {
    v28[0] = 16;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
    {
      *(_QWORD *)v32 = L"WindowsUdk.UI.Shell.Dashboard.DashboardExtension";
      v33 = 48LL;
      winrt::param::hstring::hstring((__int64)v36, (__int64 *)v32);
      v37[0] = *(_QWORD *)anonymous_namespace_::GetDashboardExtensionName((winrt::hstring *)&v38);
      winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
        (const struct winrt::param::hstring *)&v29,
        (const struct winrt::param::hstring *)v37,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v36,
        (__int64)v28);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v38);
      *(_QWORD *)v32 = 0LL;
      if ( winrt::Windows::Foundation::operator==(&v29, v32) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBED,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x80070490LL,
          v28[0]);
      if ( v29 )
      {
        *(_QWORD *)v32 = 0LL;
        v34 = 0;
        v35 = 0LL;
        v16 = ((__int64 (__fastcall *)(_QWORD, void *, int *))**v29)(
                v29,
                &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>,
                v32);
        winrt::check_hresult(&v30, v16, &v34);
        *(_QWORD *)v28 = *(_QWORD *)v32;
      }
      else
      {
        *(_QWORD *)v28 = 0LL;
      }
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        (__int64 **)v28,
        &v31);
      v38 = 0LL;
      if ( winrt::Windows::Foundation::operator==(&v31, &v38) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBF0,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x8000FFFFLL,
          v28[0]);
      v17 = a3->Data4[0];
      v18 = a3->Data4[1];
      v19 = a3->Data4[2];
      v20 = a3->Data4[3];
      v21 = a3->Data4[4];
      v22 = a3->Data4[5];
      v23 = a3->Data4[6];
      v24 = a3->Data4[7];
      v38 = *(const wchar_t **)&a3->Data1;
      LOBYTE(v39) = v17;
      BYTE1(v39) = v18;
      BYTE2(v39) = v19;
      BYTE3(v39) = v20;
      BYTE4(v39) = v21;
      BYTE5(v39) = v22;
      BYTE6(v39) = v23;
      BYTE7(v39) = v24;
      v25 = (const char *)(unsigned int)*winrt::Windows::Foundation::IUnknown::as(
                                           &v31,
                                           &v30,
                                           (__int64)&v38,
                                           (__int64)a4);
      if ( (int)v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBF1,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          v25,
          v28[0]);
    }
    else
    {
      v38 = L"WindowsUdk.UI.Shell.Dashboard.DashboardExtension";
      *(_QWORD *)&v39 = 48LL;
      winrt::param::hstring::hstring((__int64)&v34, (__int64 *)&v38);
      winrt::param::hstring::hstring((winrt::param::hstring *)v36, L"com.microsoft.windows.extension.dashboard");
      winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
        (const struct winrt::param::hstring *)&v29,
        (const struct winrt::param::hstring *)v36,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)&v34,
        (__int64)v28);
      *(_QWORD *)v32 = 0LL;
      if ( winrt::Windows::Foundation::operator==(&v29, v32) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBFA,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x80070490LL,
          v28[0]);
      if ( v29 )
      {
        *(_QWORD *)v32 = 0LL;
        LODWORD(v38) = 0;
        v39 = 0LL;
        v6 = ((__int64 (__fastcall *)(_QWORD, void *, int *))**v29)(
               v29,
               &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>,
               v32);
        winrt::check_hresult(&v30, v6, &v38);
        *(_QWORD *)v28 = *(_QWORD *)v32;
      }
      else
      {
        *(_QWORD *)v28 = 0LL;
      }
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        (__int64 **)v28,
        &v31);
      *(_QWORD *)v32 = 0LL;
      if ( winrt::Windows::Foundation::operator==(&v31, v32) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC00,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x8000FFFFLL,
          v28[0]);
      v7 = a3->Data4[0];
      v8 = a3->Data4[1];
      v9 = a3->Data4[2];
      v10 = a3->Data4[3];
      v11 = a3->Data4[4];
      v12 = a3->Data4[5];
      v13 = a3->Data4[6];
      v14 = a3->Data4[7];
      v38 = *(const wchar_t **)&a3->Data1;
      LOBYTE(v39) = v7;
      BYTE1(v39) = v8;
      BYTE2(v39) = v9;
      BYTE3(v39) = v10;
      BYTE4(v39) = v11;
      BYTE5(v39) = v12;
      BYTE6(v39) = v13;
      BYTE7(v39) = v14;
      v15 = (const char *)(unsigned int)*winrt::Windows::Foundation::IUnknown::as(
                                           &v31,
                                           &v30,
                                           (__int64)&v38,
                                           (__int64)a4);
      if ( (int)v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC01,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          v15,
          v28[0]);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v31);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v28);
    if ( v29 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v29);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC06,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v26);
  }
  return result;
}
