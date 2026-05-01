/*
 * XREFs of ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180643930
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007A6A8 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18008FE80 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027F280 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBUIAsyncAction@Foundation@Windows@1@I@Z @ 0x180317900 (--$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBUIAsyncActio.c)
 *     ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x18034BD60 (-IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ.c)
 *     ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x18034BF10 (-IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180358A84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ?IsPhysicalDeviceAccessed@CloudPCHelpers@@YA_NXZ @ 0x180641120 (-IsPhysicalDeviceAccessed@CloudPCHelpers@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180641EEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@w.c)
 *     ?Current@WindowsTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x18065EA98 (-Current@WindowsTracker@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 *     ?Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x180660530 (-Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        struct IServiceProvider *a2)
{
  CloudPCHelpers *v3; // rcx
  CloudPCHelpers *v4; // rcx
  unsigned int v5; // eax
  __int64 *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  _BYTE v17[8]; // [rsp+20h] [rbp-20h] BYREF
  int v18; // [rsp+28h] [rbp-18h] BYREF
  __int128 v19; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int v21; // [rsp+50h] [rbp+10h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp+20h] BYREF
  char v23; // [rsp+68h] [rbp+28h] BYREF

  if ( CloudPCHelpers::IsBootToCloudModeRegistryCheck(this, (__int64)a2) )
  {
    if ( CloudPCHelpers::IsPhysicalDeviceAccessPolicyEnabled(v3) )
    {
      if ( CloudPCHelpers::IsPhysicalDeviceAccessed(v4) )
      {
        v5 = RegDeleteKeyExW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
               0,
               0);
        if ( v5 )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            159LL,
            (__int64)"onecoreuap\\internal\\shell\\inc\\private\\CloudPCCommon.h",
            (const char *)v5);
      }
    }
  }
  if ( *((_QWORD *)this + 14) )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (void (__fastcall ****)(_QWORD, __int64))this + 14,
      0LL);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl)
    && *((_QWORD *)this + 18) )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (void (__fastcall ****)(_QWORD, __int64))this + 18,
      0LL);
  }
  v6 = (__int64 *)winrt::Windows::Internal::Shell::WindowsTracker::Current(&v23);
  v22 = 0LL;
  v7 = *v6;
  v18 = 0;
  v19 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *)))(*(_QWORD *)v7 + 56LL))(
         v7,
         &v22);
  winrt::check_hresult(&v21, v8, (__int64)&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
  v9 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(&v22);
  if ( !v9 )
    v9 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncAction>((__int64 *)&v22);
  winrt::impl::check_status_canceled((winrt::impl *)v9, v10);
  winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)&v22);
  v11 = *((_QWORD *)this + 13);
  v12 = v11 + 24;
  if ( !v11 )
    v12 = 40LL;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12);
  v13 = v11 + 8;
  if ( !v11 )
    v13 = 24LL;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 8LL))(*(_QWORD *)v13);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::GetImpl'::`2'::impl,
    1u,
    v14);
  v15 = *(_QWORD *)winrt::Windows::Internal::Shell::ProcessTracker::Current(v17);
  v18 = 0;
  v19 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
  winrt::check_hresult(&v21, v16, (__int64)&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
}
