/*
 * XREFs of ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1803218F0
 * Callers:
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320B80 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     ?ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAXPEBDPEAD@Z @ 0x180321294 (-ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAXPEBDPEAD@Z.c)
 *     ?get@?$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAAPEAVFullScreenPositionerLogging@@P6AXXZ@Z @ 0x180321A5C (-get@-$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAAPEAVFullScreenPositionerLoggi.c)
 */

void FullScreenPositionerLogging::TraceLoggingInfo(char *a1, ...)
{
  wil::TraceLoggingProvider *v1; // rax
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<FullScreenPositionerLogging>::get(
                                      a1,
                                      _lambda_868f7fa048835520b2023eeceda2fa98_::_lambda_invoker_cdecl_);
  wil::TraceLoggingProvider::ReportTraceLoggingMessage(v1, a1, va);
}
