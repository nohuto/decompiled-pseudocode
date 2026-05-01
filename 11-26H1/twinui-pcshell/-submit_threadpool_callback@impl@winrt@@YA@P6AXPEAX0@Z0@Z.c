/*
 * XREFs of ?submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z @ 0x1801E6D5C
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802344F0 (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     ?resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802AF694 (-resume_apartment_on_threadpool@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-.c)
 * Callees:
 *     TrySubmitThreadpoolCallback_0 @ 0x1802D41C9 (TrySubmitThreadpoolCallback_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802D9744 (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 */

BOOL __fastcall winrt::impl::submit_threadpool_callback(winrt::impl *this, void (*a2)(void *, void *), void *a3)
{
  BOOL result; // eax
  __int64 v4; // rdx
  winrt *v5; // rax
  const struct winrt::impl::slim_source_location *v6; // rdx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  result = TrySubmitThreadpoolCallback_0((PTP_SIMPLE_CALLBACK)this, a2, 0LL);
  if ( !result )
  {
    v5 = (winrt *)winrt::impl::slim_source_location::current(v7, v4);
    winrt::throw_last_error(v5, v6);
  }
  return result;
}
