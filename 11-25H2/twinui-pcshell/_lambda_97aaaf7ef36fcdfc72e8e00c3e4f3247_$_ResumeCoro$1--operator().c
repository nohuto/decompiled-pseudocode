/*
 * XREFs of _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator() @ 0x18026D840
 * Callers:
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_InitCoro$2::operator() @ 0x18026D728 (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_InitCoro$2--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::final_suspend_awaiter::await_suspend @ 0x1800AAC18 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1800AAC18.c)
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type::_promise_type @ 0x1801ED46C (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@@experimental@std@@@Z @ 0x180337F70 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV-.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x1803386D0 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x18033A418 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247___ResumeCoro_1::operator()(__int64 a1)
{
  _WORD *v2; // r14
  const struct winrt::impl::slim_source_location *v3; // rax
  _BYTE pExceptionObject[40]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v5; // [rsp+50h] [rbp-38h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_8;
    case 2:
      *(_QWORD *)(a1 + 96) = a1 - 112;
      *(_QWORD *)(a1 + 112) = a1 - 112;
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
      v5 = *(_QWORD *)(a1 + 32);
      if ( v5 <= 0 )
        goto LABEL_7;
      *v2 = 4;
      winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type>(
        a1 + 16,
        a1);
      return;
    case 4:
LABEL_7:
      winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 16));
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 16));
      *(_QWORD *)(a1 + 56) = 0LL;
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(
        (__int64 *)(*(_QWORD *)(a1 + 96) + 104LL),
        (__int64 *)(a1 + 56));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(a1 + 112);
      *v2 = 0;
      if ( !winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::final_suspend_awaiter::await_suspend((_QWORD *)(a1 + 64)) )
        goto LABEL_8;
      return;
    case 5:
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 16));
LABEL_8:
      std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type::_promise_type((__int64 *)(a1 - 112));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x100);
      break;
    default:
      __debugbreak();
      break;
  }
}
