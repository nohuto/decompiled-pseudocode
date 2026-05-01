/*
 * XREFs of ?fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x1803324F4
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_535fe0d4889b9fd58d63caa6da13cd83_@@CA@PEAX@Z @ 0x180328710 (-_lambda_invoker_cdecl_@_lambda_535fe0d4889b9fd58d63caa6da13cd83_@@CA@PEAX@Z.c)
 *     ?create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180331D60 (-create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     WINRT_IMPL_GetCurrentProcess @ 0x1802D354C (WINRT_IMPL_GetCurrentProcess.c)
 *     SetThreadpoolWait_0 @ 0x1802D36F3 (SetThreadpoolWait_0.c)
 *     WINRT_IMPL_SetThreadpoolWaitEx @ 0x1802DBAD5 (WINRT_IMPL_SetThreadpoolWaitEx.c)
 */

void __fastcall winrt::impl::signal_awaiter::fire_immediately(PTP_WAIT *this)
{
  HANDLE CurrentProcess; // rax
  struct _FILETIME pftTimeout; // [rsp+30h] [rbp+8h] BYREF

  if ( WINRT_IMPL_SetThreadpoolWaitEx(this[1], 0LL, 0LL, 0LL) )
  {
    pftTimeout = 0LL;
    CurrentProcess = WINRT_IMPL_GetCurrentProcess();
    SetThreadpoolWait_0(this[1], CurrentProcess, &pftTimeout);
  }
}
