/*
 * XREFs of ??R_lambda_b19cf72fe9674443383aa89d5c22450b_@@QEBA@AEBUIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@Z @ 0x1801DE7F4
 * Callers:
 *     ??$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@Z @ 0x18032993C (--$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 *     ??$call@AEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@Z @ 0x180594648 (--$call@AEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@-$factory_cache_entry@USnapEventFactory@.c)
 * Callees:
 *     ?CreateTimer@?$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUTimerElapsedHandler@Threading@System@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801DEB4C (-CreateTimer@-$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics.c)
 */

__int64 __fastcall _lambda_b19cf72fe9674443383aa89d5c22450b_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_System_Threading_IThreadPoolTimerStatics<winrt::Windows::System::Threading::IThreadPoolTimerStatics>::CreateTimer(
    a3,
    a2,
    *a1,
    a1[1]);
  return a2;
}
