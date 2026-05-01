/*
 * XREFs of _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator() @ 0x180265950
 * Callers:
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_::operator() @ 0x180265AFC (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::final_suspend_awaiter::await_suspend @ 0x1800E6828 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1800E6828.c)
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type::_promise_type @ 0x1800E6858 (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@experimental@std@@@Z @ 0x1803260CC (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@_ea_1803260CC.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x180330970 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247___ResumeCoro_1::operator()(__int64 a1)
{
  _WORD *v2; // r14
  const struct winrt::impl::slim_source_location *v3; // rax
  __int64 v4; // r15
  _BYTE pExceptionObject[40]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v6; // [rsp+50h] [rbp-38h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_8;
    case 2:
      *(_QWORD *)(a1 + 96) = a1 - 112;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = 10000000LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_DWORD *)(a1 + 48) = 0;
      if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
      {
        v3 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(
                                                                 a1 + 72,
                                                                 &_ImageBase);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v3);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      v6 = *(_QWORD *)(a1 + 32);
      if ( v6 <= 0 )
        goto LABEL_7;
      *v2 = 4;
      winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type>(
        a1 + 16,
        a1);
      return;
    case 4:
LABEL_7:
      winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 16));
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 16));
      *(_QWORD *)(a1 + 56) = 0LL;
      v4 = *(_QWORD *)(a1 + 96);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v4 + 104), (__int64 *)(a1 + 56));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
      *(_QWORD *)(a1 + 64) = v4;
      *v2 = 0;
      if ( !winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::final_suspend_awaiter::await_suspend((__int64 *)(a1 + 64)) )
        goto LABEL_8;
      return;
    case 5:
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 16));
LABEL_8:
      std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type::_promise_type(a1 - 112);
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0xF0);
      break;
    default:
      __debugbreak();
      break;
  }
}
