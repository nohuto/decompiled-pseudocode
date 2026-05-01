/*
 * XREFs of ??R_lambda_dde458f71422ec207fa0d1766485f8dd_@@QEBA@AEBUIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@Z @ 0x1802B7664
 * Callers:
 *     ??$call@AEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@Z @ 0x180586550 (--$call@AEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 * Callees:
 *     ?LaunchForResultsAsync@?$consume_Windows_Internal_GamingOverlay_IGameBarProtocolForResultsLauncher@UIGameBarProtocolForResultsLauncher@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBU?$map@Uhstring@winrt@@U12@@53@@Z @ 0x180208BAC (-LaunchForResultsAsync@-$consume_Windows_Internal_GamingOverlay_IGameBarProtocolForResultsLaunch.c)
 */

_QWORD *__fastcall _lambda_dde458f71422ec207fa0d1766485f8dd_::operator()(_QWORD **a1, _QWORD *a2, __int64 **a3)
{
  winrt::impl::consume_Windows_Internal_GamingOverlay_IGameBarProtocolForResultsLauncher<winrt::Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher>::LaunchForResultsAsync(
    a3,
    a2,
    *a1,
    a1[1]);
  return a2;
}
