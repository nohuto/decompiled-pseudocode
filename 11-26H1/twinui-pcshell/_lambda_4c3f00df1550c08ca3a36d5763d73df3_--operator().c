/*
 * XREFs of _lambda_4c3f00df1550c08ca3a36d5763d73df3_::operator() @ 0x1802B2908
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Microsoft::UI::Xaml::ResourceManagerRequestedEventArgs___lambda_4c3f00df1550c08ca3a36d5763d73df3___::Invoke @ 0x180453110 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--.c)
 * Callees:
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180025A54 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ?Content@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUUIElement@Xaml@UI@Windows@3@@Z @ 0x180025CAC (-Content@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Ho.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$as@UIResourceManager@Resources@ApplicationModel@Windows@Microsoft@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIResourceManager@Resources@ApplicationModel@Windows@Microsoft@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1802B29DC (--$as@UIResourceManager@Resources@ApplicationModel@Windows@Microsoft@winrt@@Utype@-$abi@UIUnknow.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$call@P6A?AUIInspectable@Foundation@Windows@winrt@@AEBUISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@34@@Z@?$factory_cache_entry@USystemResourceManager@Internal@Core@Resources@ApplicationModel@Windows@winrt@@UISystemResourceManagerStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUIInspectable@Foundation@Windows@2@AEBUISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@52@@Z@Z @ 0x18045216C (--$call@P6A-AUIInspectable@Foundation@Windows@winrt@@AEBUISystemResourceManagerStatics@Internal@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_4c3f00df1550c08ca3a36d5763d73df3_::operator()(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v5; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h] BYREF

  v5 = &qword_1808DCAD8;
  _InterlockedIncrement64(&qword_1808DCAD8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::Internal::SystemResourceManager,winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics> )
  {
    winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::Internal::SystemResourceManager,winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>,
      &v6);
    _InterlockedDecrement64(&qword_1808DCAD8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DCAD8);
    v5 = (__int64 *)_lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Resources::Core::Internal::SystemResourceManager,winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::call<winrt::Windows::Foundation::IInspectable (*)(winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics const &)>(
      a1,
      &v6,
      &v5);
  }
  winrt::impl::as<winrt::Microsoft::Windows::ApplicationModel::Resources::IResourceManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v5,
    v6);
  result = winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::Content(
             a3,
             (__int64 *)&v5);
  if ( v5 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v5);
  if ( v6 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  return result;
}
