/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x18059D0C0
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_InitCoro$2 @ 0x18059CF60 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--CalculateFly.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E4648 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1801E4648.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802291B8 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foun.c)
 *     ?TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z @ 0x180234138 (-TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z.c)
 *     ?ActualHeight@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180274000 (-ActualHeight@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@win.c)
 *     ?ActualWidth@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180274050 (-ActualWidth@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winr.c)
 *     ?IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z @ 0x1802B20A0 (-IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z @ 0x1802B20E0 (-get@-$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032BAD8 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@@experimental@std@@@Z @ 0x18059C55C (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@URect@Foundation@Windows@wi.c)
 *     ?GetFlyoutVerticalOffsetFromSystemMetrics@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CAHI@Z @ 0x18059D870 (-GetFlyoutVerticalOffsetFromSystemMetrics@SnapFlyoutInstance@implementation@SnapComponent@Shell@.c)
 *     ?SnapFlyoutInstance_CalculateFlyoutBounds_@SnapFlyoutTelemetry@@QEBAXAEAURect@Foundation@Windows@winrt@@W4FlyoutBoundsSource@SnapComponentTelemetry@@@Z @ 0x18059E114 (-SnapFlyoutInstance_CalculateFlyoutBounds_@SnapFlyoutTelemetry@@QEBAXAEAURect@Foundation@Windows.c)
 *     ?TryGetMaximizeButtonRectFromTitleBarInfoAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AU?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@67@PEAUHWND__@@@Z @ 0x18059E544 (-TryGetMaximizeButtonRectFromTitleBarInfoAsync@SnapFlyoutInstance@implementation@SnapComponent@S.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18059E634 (-await_resume@-$await_adapter@U-$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Win.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r15
  unsigned int v3; // esi
  int *v4; // r14
  float v5; // xmm7_4
  double v6; // xmm0_8
  float v7; // xmm6_4
  float v8; // xmm7_4
  unsigned int *v9; // r14
  struct Geometry::CRect *v10; // r8
  __int64 v11; // rcx
  float v12; // xmm2_4
  int v13; // eax
  __int64 MaximizeButtonRectFromTitleBarInfoAsync; // rax
  const struct winrt::impl::slim_source_location *v15; // rax
  float v16; // xmm1_4
  int FlyoutVerticalOffsetFromSystemMetrics; // eax
  float v18; // xmm0_4
  float *v19; // rax
  float v20; // xmm2_4
  float v21; // xmm1_4
  float *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rcx
  _BYTE pExceptionObject[24]; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v26; // [rsp+78h] [rbp-70h]
  int v27; // [rsp+7Ch] [rbp-6Ch]
  int v28; // [rsp+80h] [rbp-68h]
  int v29; // [rsp+84h] [rbp-64h]
  int v30; // [rsp+8Ch] [rbp-5Ch]
  int v31; // [rsp+90h] [rbp-58h]

  v2 = (_WORD *)(a1 + 8);
  v3 = 1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_34;
    case 2:
      v4 = (int *)(a1 + 12);
      *(_DWORD *)(a1 + 12) = 0;
      GetDpiForMonitor(*(_QWORD *)(a1 + 161), 0LL, a1 + 12, a1 + 12);
      v5 = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualHeight(*(__int64 **)(a1 + 169));
      v6 = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualWidth(*(__int64 **)(a1 + 169));
      *(_OWORD *)(a1 + 16) = 0LL;
      *(float *)&v6 = v6;
      v7 = (float)MulDiv((int)*(float *)&v6, *v4, 96);
      *(float *)(a1 + 24) = v7;
      v8 = (float)MulDiv((int)v5, *v4, 96);
      *(float *)(a1 + 28) = v8;
      v9 = (unsigned int *)(a1 + 32);
      *(_DWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 36) = 0LL;
      *(_DWORD *)(a1 + 44) = 0;
      if ( SnapLayoutHelpers::TryGetMaximizeButtonRectFromDwm(*(HWND *)(a1 + 177), (struct tagRECT *)(a1 + 32), v10) )
      {
        v28 = *(_DWORD *)(a1 + 40);
        v26 = *v9;
        v11 = v26;
        v26 = *v9;
        *(float *)(a1 + 16) = (float)(int)(v26 + (v28 - (int)v11) / 2) - (float)(v7 * 0.5);
        v29 = *(_DWORD *)(a1 + 44);
        v12 = (float)v29;
        if ( (float)(v8 + (float)v29) >= (float)(*(float *)(*(_QWORD *)(a1 + 193) + 12LL)
                                               + *(float *)(*(_QWORD *)(a1 + 193) + 4LL)) )
        {
          v27 = *(_DWORD *)(a1 + 36);
          v12 = (float)v27 - v8;
        }
        *(float *)(a1 + 20) = v12;
      }
      else
      {
        *(_QWORD *)(a1 + 48) = 0LL;
        GetPhysicalCursorPos((LPPOINT)(a1 + 48));
        *(_OWORD *)(a1 + 56) = 0LL;
        if ( DwmGetWindowAttribute(*(HWND *)(a1 + 177), 9u, (PVOID)(a1 + 56), 0x10u) < 0 )
          GetWindowRect(*(HWND *)(a1 + 177), (LPRECT)(a1 + 56));
        if ( *(_BYTE *)(a1 + 185) )
        {
          v13 = *(_DWORD *)(a1 + 48);
          v7 = v7 * 0.5;
        }
        else
        {
          v13 = *(_DWORD *)(a1 + 64);
          v31 = v13;
        }
        *(float *)(a1 + 16) = (float)v13 - v7;
        if ( !*(_BYTE *)(a1 + 185) )
          goto LABEL_21;
        MaximizeButtonRectFromTitleBarInfoAsync = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync(
                                                    a1 + 72,
                                                    *(_QWORD *)(a1 + 177));
        if ( *(_DWORD *)(a1 - 32) == 2 )
        {
          v15 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 136);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v15);
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
          v16 = *(float *)(a1 + 124) + *(float *)(a1 + 116);
        }
        else
        {
LABEL_21:
          FlyoutVerticalOffsetFromSystemMetrics = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::GetFlyoutVerticalOffsetFromSystemMetrics(*(_DWORD *)(a1 + 12));
          v11 = *(unsigned int *)(a1 + 60);
          v30 = v11;
          v3 = 3;
          v16 = (float)(v11 + FlyoutVerticalOffsetFromSystemMetrics);
        }
        *(float *)(a1 + 20) = v16;
        if ( (float)(*(float *)(a1 + 20) + *(float *)(a1 + 28)) < (float)(*(float *)(*(_QWORD *)(a1 + 193) + 12LL)
                                                                        + *(float *)(*(_QWORD *)(a1 + 193) + 4LL)) )
        {
          if ( !*(_BYTE *)(a1 + 185) )
            goto LABEL_27;
          v18 = fmaxf((float)(*(_DWORD *)(a1 + 52) + 1), *(float *)(a1 + 20));
        }
        else
        {
          v30 = *(_DWORD *)(a1 + 60);
          v18 = (float)v30 - *(float *)(a1 + 28);
        }
        *(float *)(a1 + 20) = v18;
      }
LABEL_27:
      v19 = *(float **)(a1 + 193);
      v20 = *v19;
      v21 = (float)((float)(*v19 + v19[2]) - *(float *)(a1 + 24)) - 1.0;
      v22 = (float *)(a1 + 16);
      if ( *v19 <= *(float *)(a1 + 16) )
        v20 = *v22;
      if ( v20 <= v21 )
        v21 = v20;
      *v22 = v21;
      if ( SnapFlyoutTelemetry::IsEnabled(v11) )
      {
        wil::details::static_lazy<SnapFlyoutTelemetry>::get(
          v23,
          (void (__cdecl *)())_lambda_9927b359eceb7275e94a8a7346ff996f_::_lambda_invoker_cdecl_);
        SnapFlyoutTelemetry::SnapFlyoutInstance_CalculateFlyoutBounds_(v24, a1 + 16, v3);
      }
      *(_OWORD *)(a1 - 24) = *(_OWORD *)v22;
      *(_QWORD *)(a1 + 128) = a1 - 128;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HMONITOR__ *,winrt::Windows::UI::Xaml::FrameworkElement const &,HWND__ *,bool,winrt::Windows::Foundation::Rect const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>::final_suspend_awaiter::await_suspend((__int64 *)(a1 + 128)) )
      {
LABEL_34:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>((__int64 *)(a1 - 128));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 128), (const struct std::nothrow_t *)0x150);
      }
      return;
    case 4:
      v3 = 4;
      goto LABEL_18;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 80));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
      goto LABEL_34;
    default:
      __debugbreak();
      return;
  }
}
