/*
 * XREFs of ?create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180330DCC
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x180326020 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180465FC0 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1805F1ED4 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperationWithProgress@UMeetAndChatIns.c)
 * Callees:
 *     SetThreadpoolWait_0 @ 0x1802CA613 (SetThreadpoolWait_0.c)
 *     WINRT_IMPL_CreateThreadpoolWait @ 0x1802CA61F (WINRT_IMPL_CreateThreadpoolWait.c)
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802D9744 (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 *     ?close@?$handle_type@Uwait_traits@signal_awaiter@impl@winrt@@@winrt@@QEAAXXZ @ 0x180330CA8 (-close@-$handle_type@Uwait_traits@signal_awaiter@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180331984 (-fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::impl::signal_awaiter::create_threadpool_wait(winrt::impl::signal_awaiter *this)
{
  struct _TP_WAIT **v2; // rsi
  const struct winrt::impl::slim_source_location *v3; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rdi
  void *v5; // rdx
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v2 = (struct _TP_WAIT **)((char *)this + 8);
  v7 = 0LL;
  ThreadpoolWait = WINRT_IMPL_CreateThreadpoolWait((PTP_WAIT_CALLBACK)winrt::impl::signal_awaiter::callback, this, 0LL);
  if ( !ThreadpoolWait )
    winrt::throw_last_error((winrt *)&v6, v3);
  winrt::handle_type<winrt::impl::signal_awaiter::wait_traits>::close(v2);
  winrt::handle_type<winrt::impl::signal_awaiter::wait_traits>::close(v2);
  *v2 = ThreadpoolWait;
  v5 = (void *)*((_QWORD *)this + 3);
  v8 = -*((_QWORD *)this + 2);
  SetThreadpoolWait_0(ThreadpoolWait, v5, (PFILETIME)((unsigned __int64)&v8 & -(__int64)(v8 != 0)));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 12, 1, 0) )
    winrt::impl::signal_awaiter::fire_immediately(this);
}
