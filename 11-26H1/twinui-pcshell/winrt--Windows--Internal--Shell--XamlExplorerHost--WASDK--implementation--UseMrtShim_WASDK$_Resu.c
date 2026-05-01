/*
 * XREFs of winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x180243100
 * Callers:
 *     ?UseMrtShim_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@67@XZ @ 0x180243354 (-UseMrtShim_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA-AUIAsyn.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x1800A1BC4 (-WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1800E5C08 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801F2828 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncActi.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x180281120 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     ?WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x1802B77C4 (-WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?Current@Application@Xaml@UI@Microsoft@winrt@@SA@XZ @ 0x180452CE8 (-Current@Application@Xaml@UI@Microsoft@winrt@@SA@XZ.c)
 *     ?ResourceManagerRequested@?$consume_Microsoft_UI_Xaml_IApplication2@UApplication@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UResourceManagerRequestedEventArgs@Xaml@UI@Microsoft@4@@Foundation@Windows@3@@Z @ 0x180453518 (-ResourceManagerRequested@-$consume_Microsoft_UI_Xaml_IApplication2@UApplication@Xaml@UI@Microso.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK__ResumeCoro_1(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  _WORD *v4; // rsi
  const struct winrt::impl::slim_source_location *v5; // rax
  int *v6; // r14
  HRESULT ApartmentType; // eax
  WinUICohabitationFunctions *v8; // rax
  __int64 v9; // r12
  _DWORD *v10; // rax
  HMODULE *v11; // rax
  int v12; // [rsp+20h] [rbp-88h]
  _BYTE pExceptionObject[24]; // [rsp+40h] [rbp-68h] BYREF
  int v14; // [rsp+58h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = (_WORD *)(a1 + 8);
  HIWORD(v12) = *(_WORD *)(a1 + 8);
  switch ( HIWORD(v12) )
  {
    case 0xFFFF:
    case 1:
    case 3:
    case 5:
      goto LABEL_12;
    case 2:
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(
                                                                 a1 + 56,
                                                                 &_ImageBase);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v5);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *v4 = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(a1, (void (*)(void *, void *))a1, a3);
      break;
    case 4:
      v6 = (int *)(a1 + 12);
      *(_DWORD *)(a1 + 12) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      ApartmentType = CoGetApartmentType((APTTYPE *)(a1 + 12), (APTTYPEQUALIFIER *)(a1 + 16));
      if ( ApartmentType < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x55,
          (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlApplication_WASDK.cpp",
          (const char *)(unsigned int)ApartmentType,
          v12);
      v14 = *v6;
      if ( v14 != 1 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x56,
          (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlApplication_WASDK.cpp",
          (const char *)0x800401F0LL,
          v12);
      v8 = WinUICohabitationFunctions::Instance();
      WinUICohabitationFunctions::WinAppSDKCohabitation_RegisterWASDKThreadWrapper(v8);
      *(_BYTE *)(a1 + 21) = 1;
      v9 = winrt::Microsoft::UI::Xaml::Application::Current();
      v10 = operator new(0x10uLL);
      v10[2] = 1;
      _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
      *(_QWORD *)v10 = off_180743E18;
      *(_QWORD *)(a1 + 32) = v10;
      winrt::impl::consume_Microsoft_UI_Xaml_IApplication2<winrt::Microsoft::UI::Xaml::Application>::ResourceManagerRequested(
        v9,
        a1 + 40,
        a1 + 32);
      if ( *(_QWORD *)(a1 + 32) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 32));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      v11 = (HMODULE *)WinUICohabitationFunctions::Instance();
      WinUICohabitationFunctions::WinAppSDKCohabitation_UnregisterWASDKThreadWrapper(v11);
      *(_QWORD *)(a1 + 48) = a1 - 112;
      *v4 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend((__int64 *)(a1 + 48)) )
      {
LABEL_12:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0xD0);
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
