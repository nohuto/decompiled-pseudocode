/*
 * XREFs of ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180274D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?DashboardActivatorActivatingDashboard@DashboardManagerTelemetry@@SAXXZ @ 0x180193B9C (-DashboardActivatorActivatingDashboard@DashboardManagerTelemetry@@SAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0AEBW4AppExtensionOptions@2345@@Z @ 0x1801FEE28 (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@par.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x1802294C0 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805AE3A0 (_anonymous_namespace_--GetDashboardExtensionName.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805B709C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardActivator::CreateInstance(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v6; // eax
  unsigned __int8 v7; // r8
  unsigned __int16 Data3; // dx
  unsigned __int16 Data2; // cx
  const char *v10; // r9
  unsigned int v11; // eax
  unsigned __int8 v12; // r8
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // cx
  const char *v15; // r9
  const char *v16; // r9
  __int64 result; // rax
  int v18[2]; // [rsp+20h] [rbp-A8h] BYREF
  void (__fastcall ***v19)(_QWORD, __int64 *, __int64 *); // [rsp+28h] [rbp-A0h] BYREF
  int v20; // [rsp+30h] [rbp-98h] BYREF
  void (__fastcall ***v21)(_QWORD, __int64 *, __int64 *); // [rsp+38h] [rbp-90h] BYREF
  int v22[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23; // [rsp+48h] [rbp-80h]
  int v24; // [rsp+50h] [rbp-78h] BYREF
  __int128 v25; // [rsp+58h] [rbp-70h]
  _BYTE v26[32]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v27[4]; // [rsp+88h] [rbp-40h] BYREF
  const wchar_t *v28; // [rsp+A8h] [rbp-20h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  DashboardManagerTelemetry::DashboardActivatorActivatingDashboard();
  *a4 = 0LL;
  try
  {
    v18[0] = 16;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
    {
      *(_QWORD *)v22 = L"WindowsUdk.UI.Shell.Dashboard.DashboardExtension";
      v23 = 48LL;
      winrt::param::hstring::hstring((__int64)v26, (__int64 *)v22);
      v27[0] = *(_QWORD *)anonymous_namespace_::GetDashboardExtensionName((winrt::hstring *)&v28);
      winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
        (const struct winrt::param::hstring *)&v19,
        (const struct winrt::param::hstring *)v27,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v26,
        (__int64)v18);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v28);
      *(_QWORD *)v22 = 0LL;
      if ( winrt::Windows::Foundation::operator==(&v19, v22) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9A,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x80070490LL,
          v18[0]);
      if ( v19 )
      {
        *(_QWORD *)v22 = 0LL;
        v24 = 0;
        v25 = 0LL;
        v6 = ((__int64 (__fastcall *)(_QWORD, void *, int *))**v19)(
               v19,
               &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>,
               v22);
        winrt::check_hresult(&v20, v6, &v24);
        *(_QWORD *)v18 = *(_QWORD *)v22;
      }
      else
      {
        *(_QWORD *)v18 = 0LL;
      }
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        (__int64 **)v18,
        &v21);
      v28 = 0LL;
      if ( winrt::Windows::Foundation::operator==(&v21, &v28) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9D,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x8000FFFFLL,
          v18[0]);
      v7 = a3->Data4[0];
      Data3 = a3->Data3;
      Data2 = a3->Data2;
      LODWORD(v28) = a3->Data1;
      WORD2(v28) = Data2;
      HIWORD(v28) = Data3;
      LOBYTE(v29) = v7;
      *(_DWORD *)((char *)&v29 + 1) = *(_DWORD *)&a3->Data4[1];
      *(_WORD *)((char *)&v29 + 5) = *(_WORD *)&a3->Data4[5];
      HIBYTE(v29) = a3->Data4[7];
      v10 = (const char *)(unsigned int)*winrt::Windows::Foundation::IUnknown::as(
                                           &v21,
                                           &v20,
                                           (__int64)&v28,
                                           (__int64)a4);
      if ( (int)v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9E,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          v10,
          v18[0]);
    }
    else
    {
      v28 = L"WindowsUdk.UI.Shell.Dashboard.DashboardExtension";
      v29 = 48LL;
      winrt::param::hstring::hstring((__int64)v27, (__int64 *)&v28);
      winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"com.microsoft.windows.extension.dashboard");
      winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
        (const struct winrt::param::hstring *)&v19,
        (const struct winrt::param::hstring *)v26,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v27,
        (__int64)v18);
      v28 = 0LL;
      if ( winrt::Windows::Foundation::operator==(&v19, &v28) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBA7,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x80070490LL,
          v18[0]);
      if ( v19 )
      {
        *(_QWORD *)v22 = 0LL;
        v24 = 0;
        v25 = 0LL;
        v11 = ((__int64 (__fastcall *)(_QWORD, void *, int *))**v19)(
                v19,
                &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>,
                v22);
        winrt::check_hresult(&v20, v11, &v24);
        *(_QWORD *)v18 = *(_QWORD *)v22;
      }
      else
      {
        *(_QWORD *)v18 = 0LL;
      }
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        (__int64 **)v18,
        &v21);
      v28 = 0LL;
      if ( winrt::Windows::Foundation::operator==(&v21, &v28) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBAD,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x8000FFFFLL,
          v18[0]);
      v12 = a3->Data4[0];
      v13 = a3->Data3;
      v14 = a3->Data2;
      LODWORD(v28) = a3->Data1;
      WORD2(v28) = v14;
      HIWORD(v28) = v13;
      LOBYTE(v29) = v12;
      *(_DWORD *)((char *)&v29 + 1) = *(_DWORD *)&a3->Data4[1];
      *(_WORD *)((char *)&v29 + 5) = *(_WORD *)&a3->Data4[5];
      HIBYTE(v29) = a3->Data4[7];
      v15 = (const char *)(unsigned int)*winrt::Windows::Foundation::IUnknown::as(
                                           &v21,
                                           &v20,
                                           (__int64)&v28,
                                           (__int64)a4);
      if ( (int)v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBAE,
          (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          v15,
          v18[0]);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v18);
    if ( v19 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBB3,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v16);
  }
  return result;
}
