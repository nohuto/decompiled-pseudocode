/*
 * XREFs of ?Provider@RawInputProvidersContinuousTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D7404
 * Callers:
 *     ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x1800D5D2C (-HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInput.c)
 *     ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x1800D617C (-InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z.c)
 *     ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x1800D61E8 (-InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z.c)
 *     ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x1800D6408 (-InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800472DC (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

const struct _tlgProvider_t *__fastcall RawInputProvidersContinuousTracing::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
                                          a1,
                                          (void (__cdecl *)())_lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_)[1];
}
