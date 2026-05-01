/*
 * XREFs of ?fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x1803319D0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_cc4fe2aa99c177bf5bc948fdc2bace84_@@CA@PEAX@Z @ 0x1803251D0 (-_lambda_invoker_cdecl_@_lambda_cc4fe2aa99c177bf5bc948fdc2bace84_@@CA@PEAX@Z.c)
 *     ?create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x180330D20 (-create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     WINRT_IMPL_SetThreadpoolTimer @ 0x1802CA3F7 (WINRT_IMPL_SetThreadpoolTimer.c)
 *     WINRT_IMPL_SetThreadpoolTimerEx @ 0x1802D41E1 (WINRT_IMPL_SetThreadpoolTimerEx.c)
 */

void __fastcall winrt::impl::timespan_awaiter::fire_immediately(winrt::impl::timespan_awaiter *this)
{
  struct _TP_TIMER *v2; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( WINRT_IMPL_SetThreadpoolTimerEx(*((PTP_TIMER *)this + 1), 0LL, 0, 0) )
  {
    v2 = (struct _TP_TIMER *)*((_QWORD *)this + 1);
    pftDueTime = 0LL;
    WINRT_IMPL_SetThreadpoolTimer(v2, &pftDueTime, 0, 0);
  }
}
