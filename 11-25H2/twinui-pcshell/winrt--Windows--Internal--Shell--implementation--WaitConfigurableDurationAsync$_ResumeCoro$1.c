/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x180283480
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_InitCoro$2 @ 0x180283350 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_InitCoro$2.c)
 * Callees:
 *     ??$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z @ 0x180193B10 (--$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180223568 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@@experimental@std@@@Z @ 0x180337F70 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV-.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x1803386D0 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x18033A418 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay@@@details@wil@@QEAA_NXZ @ 0x1805B73FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay@@@detail.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805B7600 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1805B7600.c)
 *     wcscmp_0 @ 0x1806A4AF4 (wcscmp_0.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync__ResumeCoro_1(
        __int64 a1)
{
  const WCHAR *v2; // r15
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  const struct winrt::impl::slim_source_location *v6; // rax
  _BYTE pExceptionObject[40]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v8; // [rsp+70h] [rbp-48h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_18;
    case 2:
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay>::GetImpl'::`2'::impl) )
      {
        v2 = *(const WCHAR **)(a1 + 161);
        if ( v2 && !wcscmp_0(*(const wchar_t **)(a1 + 161), L"PrelaunchDelay") )
        {
          *(_QWORD *)(a1 + 16) = 0LL;
          *(_DWORD *)(a1 + 24) = 8;
          if ( RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                 v2,
                 0x48u,
                 0LL,
                 (PVOID)(a1 + 16),
                 (LPDWORD)(a1 + 24)) )
          {
            goto LABEL_12;
          }
          v3 = *(_QWORD *)(a1 + 16);
        }
        else
        {
          *(_DWORD *)(a1 + 28) = 0;
          *(_DWORD *)(a1 + 32) = 4;
          if ( RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                 v2,
                 0x18u,
                 0LL,
                 (PVOID)(a1 + 28),
                 (LPDWORD)(a1 + 32)) )
          {
            goto LABEL_12;
          }
          v3 = *(unsigned int *)(a1 + 28);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 40) = 4;
        if ( RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
               *(LPCWSTR *)(a1 + 161),
               0x18u,
               0LL,
               (PVOID)(a1 + 36),
               (LPDWORD)(a1 + 40)) )
        {
          goto LABEL_12;
        }
        v3 = *(unsigned int *)(a1 + 36);
      }
      *(_QWORD *)(a1 + 169) = v3;
LABEL_12:
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 169);
      DashboardManagerTelemetry::WebExperienceDelayStarted<unsigned short const * &,__int64>(
        (const WCHAR **)(a1 + 161),
        (int *)(a1 + 48));
      *(_QWORD *)(a1 + 112) = a1 - 112;
      v5 = 10000LL * *(_QWORD *)(a1 + 169);
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 72) = v5;
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_DWORD *)(a1 + 88) = 0;
      if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
      {
        v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 128, v4);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v6);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      v8 = *(_QWORD *)(a1 + 72);
      if ( v8 <= 0 )
      {
LABEL_17:
        winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 56));
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 56));
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(a1 + 112);
        *(_WORD *)(a1 + 8) = 0;
        if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend() )
        {
LABEL_18:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x130);
        }
      }
      else
      {
        *(_WORD *)(a1 + 8) = 4;
        winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type>(
          a1 + 56,
          a1);
      }
      return;
    case 4:
      goto LABEL_17;
    case 5:
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 56));
      goto LABEL_18;
    default:
      __debugbreak();
      return;
  }
}
