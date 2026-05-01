/*
 * XREFs of winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync$_ResumeCoro$1 @ 0x18032CB20
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync$_InitCoro$2 @ 0x18032CA80 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--C.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get_strong@?$implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@winrt@@QEAA?AU?$com_ptr@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801F5C9C (-get_strong@-$implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802291B8 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foun.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180331904 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180331904.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180336108 (-GamingAppAumid@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA-.c)
 *     ?HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NAEBUhstring@7@@Z @ 0x180336464 (-HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Inte.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=3
void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync__ResumeCoro_1(
        __int64 a1)
{
  volatile signed __int32 **v2; // rsi
  void *v3; // r8
  const struct winrt::impl::slim_source_location *v4; // rax
  bool HasGamingAppCapability; // al
  _BYTE pExceptionObject[72]; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v7; // [rsp+90h] [rbp+18h]

  v7 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_17;
    case 2:
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
        || (unsigned int)IsGamingFullScreenExperienceSupported() )
      {
        winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::get_strong(
          *(_QWORD *)(a1 + 113),
          (_QWORD *)(a1 + 16));
        v2 = (volatile signed __int32 **)(a1 + 24);
        winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration::GamingAppAumid(a1 + 24);
        if ( *(_QWORD *)(a1 + 24) && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) )
        {
          *(_BYTE *)(a1 + 32) = 0;
          if ( *(_DWORD *)(a1 - 16) == 2 )
          {
            v4 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 80);
            winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v4);
            throw (winrt::hresult_canceled *)pExceptionObject;
          }
          *v7 = 4;
          `winrt::resume_background'::`2'::awaitable::await_suspend(4LL, (void (*)(void *, void *))a1, v3);
          return;
        }
        HasGamingAppCapability = 0;
LABEL_14:
        *(_BYTE *)(a1 - 8) = HasGamingAppCapability;
        winrt::handle_type<winrt::impl::hstring_traits>::close(v2);
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      }
      else
      {
        *(_BYTE *)(a1 - 8) = 0;
      }
      *(_QWORD *)(a1 + 72) = a1 - 112;
      *v7 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend() )
      {
LABEL_17:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>((__int64 *)(a1 - 112));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0xF0);
      }
      return;
    case 4:
      v2 = (volatile signed __int32 **)(a1 + 24);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 24);
      HasGamingAppCapability = winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::HasGamingAppCapability((const struct winrt::hstring *)(a1 + 40));
      goto LABEL_14;
    case 5:
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 24));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_17;
    default:
      __debugbreak();
      return;
  }
}
