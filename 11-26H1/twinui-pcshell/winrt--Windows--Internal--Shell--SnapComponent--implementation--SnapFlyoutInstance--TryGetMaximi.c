/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1 @ 0x1805C2540
 * Callers:
 *     ?TryGetMaximizeButtonRectFromTitleBarInfoAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AU?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@67@PEAUHWND__@@@Z @ 0x1805C27A4 (-TryGetMaximizeButtonRectFromTitleBarInfoAsync@SnapFlyoutInstance@implementation@SnapComponent@S.c)
 * Callees:
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z @ 0x1802A87A0 (-IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z @ 0x1802A87E0 (-get@-$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180328F74 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1803309B4 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1803309B4.c)
 *     ?TryGetMaximizeButtonRectFromAppWindow@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z @ 0x1805AD5CC (-TryGetMaximizeButtonRectFromAppWindow@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z.c)
 *     ?SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect_@SnapFlyoutTelemetry@@QEBAXAEBURect@Foundation@Windows@winrt@@@Z @ 0x1805C24C0 (-SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect_@SnapFlyoutTelemetry@@QEBAXAEBURect@Founda.c)
 */

// Hidden C++ exception states: #try_helpers=2
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync__ResumeCoro_1(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  _WORD *v4; // rsi
  const struct winrt::impl::slim_source_location *v5; // rax
  int *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm9_4
  __int64 v13; // rcx
  SnapFlyoutTelemetry *v14; // rcx
  _BYTE pExceptionObject[24]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v16; // [rsp+58h] [rbp-80h]
  int v17; // [rsp+78h] [rbp-60h]
  int v18; // [rsp+7Ch] [rbp-5Ch]
  int v19; // [rsp+80h] [rbp-58h]
  int v20; // [rsp+84h] [rbp-54h]

  v4 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
    case 5:
      goto LABEL_11;
    case 2:
      if ( *(_DWORD *)(a1 - 32) == 2 )
      {
        v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 88);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v5);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *v4 = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(a1, (void (*)(void *, void *))a1, a3);
      break;
    case 4:
      v6 = (int *)(a1 + 16);
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 20) = 0LL;
      *(_DWORD *)(a1 + 28) = 0;
      if ( SnapLayoutHelpers::TryGetMaximizeButtonRectFromAppWindow(
             *(HWND *)(a1 + 120),
             (struct tagRECT *)(a1 + 16),
             (struct Geometry::CRect *)a3) )
      {
        v20 = *(_DWORD *)(a1 + 28);
        v9 = (float)(v20 - *(_DWORD *)(a1 + 20));
        v19 = *(_DWORD *)(a1 + 24);
        v10 = (float)(v19 - *v6);
        v18 = *(_DWORD *)(a1 + 20);
        v11 = (float)v18;
        v17 = *v6;
        v12 = (float)v17;
        *(float *)(a1 + 32) = (float)v17;
        *(float *)(a1 + 36) = v11;
        *(float *)(a1 + 40) = v10;
        *(float *)(a1 + 44) = v9;
        if ( SnapFlyoutTelemetry::IsEnabled(v8) )
        {
          wil::details::static_lazy<SnapFlyoutTelemetry>::get(
            v13,
            (void (__cdecl *)())_lambda_9927b359eceb7275e94a8a7346ff996f_::_lambda_invoker_cdecl_);
          SnapFlyoutTelemetry::SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect_(
            v14,
            (const struct winrt::Windows::Foundation::Rect *)(a1 + 32));
        }
        *(float *)(a1 - 24) = v12;
        *(float *)(a1 - 20) = v11;
        *(float *)(a1 - 16) = v10;
        *(float *)(a1 - 12) = v9;
      }
      else
      {
        *(_OWORD *)(a1 + 48) = 0LL;
        v16 = 0LL;
        *(_OWORD *)(a1 - 24) = 0LL;
      }
      *(_QWORD *)(a1 + 80) = a1 - 128;
      *v4 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 80),
              v7) )
      {
LABEL_11:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 128));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 128), (const struct std::nothrow_t *)0x100);
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
