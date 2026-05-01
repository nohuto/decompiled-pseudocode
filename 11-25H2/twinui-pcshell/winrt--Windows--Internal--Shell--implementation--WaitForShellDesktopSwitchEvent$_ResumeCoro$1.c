/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1 @ 0x1805B64D0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_InitCoro$2 @ 0x1805B63B4 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_InitCoro$2.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A51D4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18018DCAC (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncActi.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180223568 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x1803296AC (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180331794 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803318B8 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // rsi
  HANDLE v3; // rax
  void *v4; // rdx
  const struct winrt::impl::slim_source_location *v5; // rax
  void *v6; // rdx
  _BYTE pExceptionObject[64]; // [rsp+28h] [rbp-40h] BYREF

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_10;
    case 2:
      v3 = OpenEventW(0x100000u, 0, L"ShellDesktopSwitchEvent");
      *(_QWORD *)(a1 + 16) = v3;
      if ( !v3 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 40) = 3000000000LL;
      *(_QWORD *)(a1 + 48) = v3;
      *(_DWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_DWORD *)(a1 + 72) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 88);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v5);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)(a1 + 24)) )
      {
LABEL_8:
        winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 24));
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 24));
LABEL_9:
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          (wil::details **)(a1 + 16),
          v4);
        *(_QWORD *)(a1 + 80) = a1 - 112;
        *v2 = 0;
        if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend((__int64 *)(a1 + 80)) )
        {
LABEL_10:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0xF0);
        }
      }
      else
      {
        *v2 = 4;
        winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>(
          (__int64 *)(a1 + 24),
          a1);
      }
      return;
    case 4:
      goto LABEL_8;
    case 5:
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 24));
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        (wil::details **)(a1 + 16),
        v6);
      goto LABEL_10;
    default:
      __debugbreak();
      return;
  }
}
