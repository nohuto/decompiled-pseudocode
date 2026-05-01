/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x1805C1290
 * Callers:
 *     ?CalculateFlyoutBoundsAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AU?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@PEAUHWND__@@_NAEBURect@967@@Z @ 0x1805C17E4 (-CalculateFlyoutBoundsAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801F68BC (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1801F68BC.c)
 *     ?TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z @ 0x180225B6C (-TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z.c)
 *     ?ActualHeight@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18026BF58 (-ActualHeight@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@win.c)
 *     ?ActualWidth@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18026BFAC (-ActualWidth@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winr.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180288A6C (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ?IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z @ 0x1802A87A0 (-IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z @ 0x1802A87E0 (-get@-$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@@experimental@std@@@Z @ 0x1805C0794 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@URect@Foundation@Windows@wi.c)
 *     ?GetFlyoutVerticalOffsetFromSystemMetrics@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CAHI@Z @ 0x1805C1AEC (-GetFlyoutVerticalOffsetFromSystemMetrics@SnapFlyoutInstance@implementation@SnapComponent@Shell@.c)
 *     ?SnapFlyoutInstance_CalculateFlyoutBounds_@SnapFlyoutTelemetry@@QEBAXAEAURect@Foundation@Windows@winrt@@W4FlyoutBoundsSource@SnapComponentTelemetry@@@Z @ 0x1805C2428 (-SnapFlyoutInstance_CalculateFlyoutBounds_@SnapFlyoutTelemetry@@QEBAXAEAURect@Foundation@Windows.c)
 *     ?TryGetMaximizeButtonRectFromTitleBarInfoAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AU?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@67@PEAUHWND__@@@Z @ 0x1805C27A4 (-TryGetMaximizeButtonRectFromTitleBarInfoAsync@SnapFlyoutInstance@implementation@SnapComponent@S.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805C291C (-await_resume@-$await_adapter@U-$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Win.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r15
  unsigned int v3; // esi
  int *v4; // r14
  double v5; // xmm7_8
  double v6; // xmm0_8
  float v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  _DWORD *v10; // r14
  struct Geometry::CRect *v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  float v14; // xmm2_4
  int v15; // eax
  __int64 MaximizeButtonRectFromTitleBarInfoAsync; // rax
  const struct winrt::impl::slim_source_location *v17; // rax
  float v18; // xmm1_4
  float v19; // xmm1_4
  float *v20; // rax
  float v21; // xmm1_4
  float *v22; // r14
  float v23; // xmm3_4
  float v24; // xmm0_4
  __int64 v25; // rcx
  __int64 v26; // rcx
  _BYTE pExceptionObject[24]; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+80h] [rbp-88h]
  int v29; // [rsp+84h] [rbp-84h]
  int v30; // [rsp+88h] [rbp-80h]
  int v31; // [rsp+8Ch] [rbp-7Ch]
  int v32; // [rsp+94h] [rbp-74h]
  int v33; // [rsp+98h] [rbp-70h]

  v2 = (_WORD *)(a1 + 8);
  v3 = 1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_38;
    case 2:
      v4 = (int *)(a1 + 12);
      *(_DWORD *)(a1 + 12) = 0;
      GetDpiForMonitor(*(_QWORD *)(a1 + 184), 0LL, a1 + 12, a1 + 12);
      v5 = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualHeight(*(__int64 **)(a1 + 192));
      v6 = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualWidth(*(__int64 **)(a1 + 192));
      *(_OWORD *)(a1 + 16) = 0LL;
      v7 = v6;
      v8 = (float)MulDiv((int)v7, *v4, 96);
      *(float *)(a1 + 24) = v8;
      *(float *)&v6 = v5;
      v9 = (float)MulDiv((int)*(float *)&v6, *v4, 96);
      *(float *)(a1 + 28) = v9;
      v10 = (_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 36) = 0LL;
      *(_DWORD *)(a1 + 44) = 0;
      if ( SnapLayoutHelpers::TryGetMaximizeButtonRectFromDwm(*(HWND *)(a1 + 200), (struct tagRECT *)(a1 + 32), v11) )
      {
        v30 = *(_DWORD *)(a1 + 40);
        v12 = v30 - *v10;
        v13 = (unsigned int)*v10;
        v28 = v13;
        *(float *)(a1 + 16) = (float)(v13 + v12 / 2) - (float)(v8 * 0.5);
        v31 = *(_DWORD *)(a1 + 44);
        v14 = (float)v31;
        if ( (float)((float)v31 + v9) >= (float)(*(float *)(*(_QWORD *)(a1 + 216) + 12LL)
                                               + *(float *)(*(_QWORD *)(a1 + 216) + 4LL)) )
        {
          v29 = *(_DWORD *)(a1 + 36);
          v14 = (float)v29 - v9;
        }
        *(float *)(a1 + 20) = v14;
      }
      else
      {
        *(_QWORD *)(a1 + 48) = 0LL;
        GetPhysicalCursorPos((LPPOINT)(a1 + 48));
        *(_OWORD *)(a1 + 56) = 0LL;
        if ( DwmGetWindowAttribute(*(HWND *)(a1 + 200), 9u, (PVOID)(a1 + 56), 0x10u) < 0 )
          GetWindowRect(*(HWND *)(a1 + 200), (LPRECT)(a1 + 56));
        if ( *(_BYTE *)(a1 + 208) )
        {
          v15 = *(_DWORD *)(a1 + 48);
          v8 = v8 * 0.5;
        }
        else
        {
          v15 = *(_DWORD *)(a1 + 64);
          v33 = v15;
        }
        *(float *)(a1 + 16) = (float)v15 - v8;
        if ( !*(_BYTE *)(a1 + 208) )
          goto LABEL_21;
        MaximizeButtonRectFromTitleBarInfoAsync = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync(
                                                    a1 + 72,
                                                    *(_QWORD *)(a1 + 200));
        if ( *(_DWORD *)(a1 - 32) == 2 )
        {
          v17 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 144);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v17);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 88) = MaximizeButtonRectFromTitleBarInfoAsync;
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_BYTE *)(a1 + 104) = 1;
        v3 = 4;
        *v2 = 4;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HMONITOR__ *,winrt::Windows::UI::Xaml::FrameworkElement const &,HWND__ *,bool,winrt::Windows::Foundation::Rect const &>::promise_type>(
                                (__int64 *)(a1 + 80),
                                a1) )
          return;
LABEL_18:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,1>::await_resume(
          a1 + 80,
          a1 + 112);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 80));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
        if ( *(float *)(a1 + 124) > 0.0 && *(float *)(a1 + 120) > 0.0 )
        {
          v18 = *(float *)(a1 + 124) + *(float *)(a1 + 116);
        }
        else
        {
LABEL_21:
          v3 = 3;
          v13 = (unsigned int)winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::GetFlyoutVerticalOffsetFromSystemMetrics(*(_DWORD *)(a1 + 12))
              + *(_DWORD *)(a1 + 60);
          v18 = (float)(int)v13;
        }
        *(float *)(a1 + 20) = v18;
        if ( (float)(*(float *)(a1 + 20) + *(float *)(a1 + 28)) < (float)(*(float *)(*(_QWORD *)(a1 + 216) + 12LL)
                                                                        + *(float *)(*(_QWORD *)(a1 + 216) + 4LL)) )
        {
          if ( *(_BYTE *)(a1 + 208) )
          {
            v19 = (float)(*(_DWORD *)(a1 + 52) + 1);
            if ( v19 <= *(float *)(a1 + 20) )
              v19 = *(float *)(a1 + 20);
            *(float *)(a1 + 20) = v19;
          }
        }
        else
        {
          v32 = *(_DWORD *)(a1 + 60);
          *(float *)(a1 + 20) = (float)v32 - *(float *)(a1 + 28);
        }
      }
      v20 = *(float **)(a1 + 216);
      v21 = (float)((float)(*v20 + v20[2]) - *(float *)(a1 + 24)) - 1.0;
      v22 = (float *)(a1 + 16);
      v23 = *(float *)(a1 + 16);
      if ( *v20 <= v23 )
        v24 = *v22;
      else
        v24 = *v20;
      if ( *v20 <= v23 )
        v20 = (float *)(a1 + 16);
      if ( v24 <= v21 )
        v21 = *v20;
      *v22 = v21;
      if ( SnapFlyoutTelemetry::IsEnabled(v13) )
      {
        wil::details::static_lazy<SnapFlyoutTelemetry>::get(
          v25,
          (void (__cdecl *)())_lambda_9927b359eceb7275e94a8a7346ff996f_::_lambda_invoker_cdecl_);
        SnapFlyoutTelemetry::SnapFlyoutInstance_CalculateFlyoutBounds_(v26, a1 + 16, v3);
      }
      *(_OWORD *)(a1 - 24) = *(_OWORD *)v22;
      *(_QWORD *)(a1 + 136) = a1 - 128;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HMONITOR__ *,winrt::Windows::UI::Xaml::FrameworkElement const &,HWND__ *,bool,winrt::Windows::Foundation::Rect const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>::final_suspend_awaiter::await_suspend((__int64 *)(a1 + 136)) )
      {
LABEL_38:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 128));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 128), (const struct std::nothrow_t *)0x160);
      }
      return;
    case 4:
      v3 = 4;
      goto LABEL_18;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 80));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
      goto LABEL_38;
    default:
      __debugbreak();
      return;
  }
}
