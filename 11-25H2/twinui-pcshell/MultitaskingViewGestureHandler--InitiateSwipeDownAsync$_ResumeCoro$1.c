/*
 * XREFs of MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_ResumeCoro$1 @ 0x18048B3C0
 * Callers:
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_InitCoro$2 @ 0x18048B354 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180071D90 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032BAD8 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180331830 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@experimental@std@@@Z @ 0x180488614 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindo.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180489CB0 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?TryStartAnimationAsync@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUCompositor@Composition@UI@Windows@3@@Z @ 0x18048CD3C (-TryStartAnimationAsync@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestur.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x180497498 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall MultitaskingViewGestureHandler::InitiateSwipeDownAsync__ResumeCoro_1(char *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, void *, char *); // rbx
  int v5; // eax
  __int64 v6; // rax
  __int64 started; // rax
  char v8; // di
  __int64 v9; // rax
  __int64 *v10; // r13
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rdi
  __int64 *v18; // [rsp+40h] [rbp-88h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_21;
      case 2:
        v2 = a1 + 16;
        *((_QWORD *)a1 + 2) = 0LL;
        CoCreateInstance(
          &CLSID_SwitchThumbnailDeviceManager,
          0LL,
          1u,
          &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
          (LPVOID *)a1 + 2);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 184LL))(*v2, 2LL);
        *((_QWORD *)a1 + 3) = 0LL;
        v3 = (*(__int64 (**)(void))(*(_QWORD *)*v2 + 96LL))();
        v4 = (__int64 (__fastcall ***)(_QWORD, void *, char *))v3;
        if ( v3 )
        {
          *((_QWORD *)a1 + 3) = v3;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
          *((_QWORD *)a1 + 19) = 0LL;
          *((_DWORD *)a1 + 40) = 0;
          *((_QWORD *)a1 + 21) = 0LL;
          *((_QWORD *)a1 + 22) = 0LL;
          v5 = (**v4)(v4, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositor>, a1 + 152);
          winrt::check_hresult((int *)a1 + 46, v5, (__int64)(a1 + 160));
          v6 = *((_QWORD *)a1 + 19);
        }
        else
        {
          v6 = 0LL;
        }
        *((_QWORD *)a1 + 4) = v6;
        started = winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::TryStartAnimationAsync(
                    a1 + 217,
                    a1 + 40,
                    a1 + 32);
        *((_QWORD *)a1 + 6) = 0LL;
        *((_QWORD *)a1 + 7) = started;
        *((_QWORD *)a1 + 8) = 0LL;
        a1[72] = 1;
        *((_WORD *)a1 + 4) = 4;
        if ( winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CAppThumbnailWindow *,winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs const &,enum MultitaskingViewGestureHandlerHelpers::GestureDirection>::promise_type>(
               (__int64)(a1 + 48),
               (__int64)a1) )
        {
          return;
        }
        goto LABEL_11;
      case 4:
LABEL_11:
        v8 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume((__int64)(a1 + 48));
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 6);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
        if ( v8 )
        {
          v9 = *(_QWORD *)(a1 + 209);
          v10 = *(__int64 **)(v9 + 96);
          v11 = *(__int64 **)(v9 + 104);
          v18 = v11;
          while ( v10 != v11 )
          {
            v12 = *v10;
            *((_QWORD *)a1 + 24) = 0LL;
            if ( winrt::Windows::Foundation::operator!=(
                   (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(v12 + 408),
                   (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 24) )
            {
              v13 = *v10;
              v14 = *(_QWORD *)(a1 + 209);
              *((_QWORD *)a1 + 10) = off_18071D320;
              *((_QWORD *)a1 + 11) = v14;
              *((_QWORD *)a1 + 17) = a1 + 80;
              std::function<void (bool)>::operator=(v13 + 192, (__int64)(a1 + 80));
              std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
                (__int64)(a1 + 80),
                v15);
              *(_BYTE *)(v14 + 248) = 1;
              v16 = *v10;
              v17 = *(_QWORD *)(a1 + 225);
              *((_QWORD *)a1 + 18) = *(_QWORD *)(a1 + 217);
              Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)a1 + 18);
              CAppThumbnailWindow::StartMinimizeGestureOperation(v16, a1 + 144, v17, v14 + 256);
            }
            v10 += 2;
            v11 = v18;
          }
        }
        else
        {
          MultitaskingViewGestureHandler::AnimationComplete(*(_QWORD *)(a1 + 209), 1);
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
        goto LABEL_20;
      case 5:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 6);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
LABEL_20:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 2);
LABEL_21:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 217));
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0xF0);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
