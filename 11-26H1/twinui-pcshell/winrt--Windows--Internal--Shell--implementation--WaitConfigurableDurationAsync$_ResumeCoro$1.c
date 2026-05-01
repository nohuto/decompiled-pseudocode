/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x18027A580
 * Callers:
 *     ?WaitConfigurableDurationAsync@implementation@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@45@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x18027A878 (-WaitConfigurableDurationAsync@implementation@Shell@Internal@Windows@winrt@@YA-AUIAsyncAction@Fo.c)
 * Callees:
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1800E5C08 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ??$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z @ 0x18018C8D8 (--$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     wcscmp_0 @ 0x1802D373C (wcscmp_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@experimental@std@@@Z @ 0x1803260CC (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@_ea_1803260CC.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x180330970 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay@@@details@wil@@QEAA_NXZ @ 0x1805DAD84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay@@@detail.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805DAF50 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1805DAF50.c)
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
      goto LABEL_19;
    case 2:
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay>::GetImpl'::`2'::impl) )
      {
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 40) = 4;
        if ( RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
               *(LPCWSTR *)(a1 + 152),
               0x18u,
               0LL,
               (PVOID)(a1 + 36),
               (LPDWORD)(a1 + 40)) )
        {
          goto LABEL_13;
        }
        v3 = *(unsigned int *)(a1 + 36);
        goto LABEL_12;
      }
      v2 = *(const WCHAR **)(a1 + 152);
      if ( !v2 || wcscmp_0(*(const wchar_t **)(a1 + 152), L"PrelaunchDelay") )
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
          goto LABEL_13;
        }
        v3 = *(unsigned int *)(a1 + 28);
LABEL_12:
        *(_QWORD *)(a1 + 160) = v3;
        goto LABEL_13;
      }
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_DWORD *)(a1 + 24) = 8;
      if ( !RegGetValueW(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
              v2,
              0x48u,
              0LL,
              (PVOID)(a1 + 16),
              (LPDWORD)(a1 + 24)) )
        *(_QWORD *)(a1 + 160) = *(_QWORD *)(a1 + 16);
LABEL_13:
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 160);
      DashboardManagerTelemetry::WebExperienceDelayStarted<unsigned short const * &,__int64>(
        (const WCHAR **)(a1 + 152),
        (int *)(a1 + 48));
      *(_QWORD *)(a1 + 128) = a1 - 112;
      v5 = 10000LL * *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 72) = v5;
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_DWORD *)(a1 + 88) = 0;
      if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
      {
        v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 104, v4);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v6);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      v8 = *(_QWORD *)(a1 + 72);
      if ( v8 <= 0 )
      {
LABEL_18:
        winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 56));
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 56));
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(a1 + 128);
        *(_WORD *)(a1 + 8) = 0;
        if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend() )
        {
LABEL_19:
          *(_QWORD *)(a1 + 128) = a1 - 112;
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x120);
        }
      }
      else
      {
        *(_WORD *)(a1 + 8) = 4;
        winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type>(
          a1 + 56,
          a1);
      }
      return;
    case 4:
      goto LABEL_18;
    case 5:
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 56));
      goto LABEL_19;
    default:
      __debugbreak();
      return;
  }
}
