/*
 * XREFs of ?create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x180330D20
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@experimental@std@@@Z @ 0x1803260CC (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@_ea_1803260CC.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x18033EF14 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 * Callees:
 *     WINRT_IMPL_SetThreadpoolTimer @ 0x1802CA3F7 (WINRT_IMPL_SetThreadpoolTimer.c)
 *     CreateThreadpoolTimer_0 @ 0x1802CA40F (CreateThreadpoolTimer_0.c)
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802D9744 (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 *     ?close@?$handle_type@Utimer_traits@timespan_awaiter@impl@winrt@@@winrt@@QEAAXXZ @ 0x180330C7C (-close@-$handle_type@Utimer_traits@timespan_awaiter@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x1803319D0 (-fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::impl::timespan_awaiter::create_threadpool_timer(winrt::impl::timespan_awaiter *this)
{
  struct _TP_TIMER **v2; // rsi
  const struct winrt::impl::slim_source_location *v3; // rdx
  struct _TP_TIMER *ThreadpoolTimer_0; // rdi
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  struct _FILETIME pftDueTime; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0;
  v2 = (struct _TP_TIMER **)((char *)this + 8);
  v6 = 0LL;
  ThreadpoolTimer_0 = CreateThreadpoolTimer_0((PTP_TIMER_CALLBACK)winrt::impl::timespan_awaiter::callback, this, 0LL);
  if ( !ThreadpoolTimer_0 )
    winrt::throw_last_error((winrt *)&v5, v3);
  winrt::handle_type<winrt::impl::timespan_awaiter::timer_traits>::close(v2);
  winrt::handle_type<winrt::impl::timespan_awaiter::timer_traits>::close(v2);
  *v2 = ThreadpoolTimer_0;
  pftDueTime = (struct _FILETIME)-*((_QWORD *)this + 2);
  WINRT_IMPL_SetThreadpoolTimer(ThreadpoolTimer_0, &pftDueTime, 0, 0);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 8, 1, 0) )
    winrt::impl::timespan_awaiter::fire_immediately(this);
}
