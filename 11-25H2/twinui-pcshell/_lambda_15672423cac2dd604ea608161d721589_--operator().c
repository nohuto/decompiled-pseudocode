/*
 * XREFs of _lambda_15672423cac2dd604ea608161d721589_::operator() @ 0x18044637C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Microsoft::UI::Xaml::ResourceManagerRequestedEventArgs___lambda_15672423cac2dd604ea608161d721589___::Invoke @ 0x180446A90 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$as@UIResourceManager@Resources@ApplicationModel@Windows@Microsoft@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIResourceManager@Resources@ApplicationModel@Windows@Microsoft@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1802CBD7C (--$as@UIResourceManager@Resources@ApplicationModel@Windows@Microsoft@winrt@@Utype@-$abi@UIUnknow.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$call@P6A?AUIInspectable@Foundation@Windows@winrt@@AEBUISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@34@@Z@?$factory_cache_entry@USystemResourceManager@Internal@Core@Resources@ApplicationModel@Windows@winrt@@UISystemResourceManagerStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUIInspectable@Foundation@Windows@2@AEBUISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@52@@Z@Z @ 0x180445A50 (--$call@P6A-AUIInspectable@Foundation@Windows@winrt@@AEBUISystemResourceManagerStatics@Internal@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_15672423cac2dd604ea608161d721589_::operator()(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *(__fastcall *v7)(const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+28h] [rbp-48h] BYREF
  int v9; // [rsp+3Ch] [rbp-34h] BYREF
  int v10; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall ***v12)(_QWORD, void *, _QWORD **); // [rsp+58h] [rbp-18h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, void *, _QWORD **); // [rsp+60h] [rbp-10h] BYREF

  v8[1] = &qword_18089C418;
  _InterlockedIncrement64(&qword_18089C418);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::Internal::SystemResourceManager,winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics> )
  {
    v12 = 0LL;
    v10 = 0;
    v11 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, _QWORD **)))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::Internal::SystemResourceManager,winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>
                                                                                                  + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::Internal::SystemResourceManager,winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>,
           &v12);
    winrt::check_hresult((int *)&v7, v4, (__int64)&v10);
    v13 = v12;
    _InterlockedDecrement64(&qword_18089C418);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089C418);
    v7 = _lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Resources::Core::Internal::SystemResourceManager,winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::call<winrt::Windows::Foundation::IInspectable (*)(winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics const &)>(
      0LL,
      (__int64)&v13,
      (void (__fastcall **)(__int64, __int64 *))&v7);
  }
  winrt::impl::as<winrt::Microsoft::Windows::ApplicationModel::Resources::IResourceManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    v8,
    v13);
  v5 = *a3;
  v10 = 0;
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, v8[0]);
  winrt::check_hresult(&v9, v6, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v8);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
}
