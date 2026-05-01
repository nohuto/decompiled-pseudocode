/*
 * XREFs of _lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator() @ 0x1800E3494
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x180266CF0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     wil::details::lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___::_lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___ @ 0x1802A2B3C (wil--details--lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___--_lambda_call__lambda_bb8c.c)
 * Callees:
 *     ??$WindowTabHostThumbnailRequested@AEBIAEBI_J@WindowTabHostTelemetry@@SAXAEBI0$$QEA_J@Z @ 0x1800E34F0 (--$WindowTabHostThumbnailRequested@AEBIAEBI_J@WindowTabHostTelemetry@@SAXAEBI0$$QEA_J@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800E363C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

__int64 __fastcall lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  std::chrono::steady_clock::now(&v3);
  v3 = (v3 - *(_QWORD *)(a1 + 8)) / 1000000;
  return WindowTabHostTelemetry::WindowTabHostThumbnailRequested<unsigned int const &,unsigned int const &,__int64>(
           a1,
           a1 + 4,
           &v3);
}
