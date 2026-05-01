/*
 * XREFs of ??R_lambda_0f5d06b182220372552e751da5d9ab64_@@QEBA@AEBUIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@Z @ 0x1802C9E78
 * Callers:
 *     ??$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@?$factory_cache_entry@UActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIActiveTabChangedEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@Z @ 0x18055871C (--$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@-$factory_cache_entry@UActiveTabChangedE.c)
 * Callees:
 *     ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory@UIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@0@Z @ 0x18026CCE0 (-CreateInstance@-$consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory@UIActiveTa.c)
 */

_QWORD *__fastcall _lambda_0f5d06b182220372552e751da5d9ab64_::operator()(__int128 **a1, _QWORD *a2, __int64 **a3)
{
  winrt::impl::consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>::CreateInstance(
    a3,
    a2,
    *a1,
    a1[1]);
  return a2;
}
