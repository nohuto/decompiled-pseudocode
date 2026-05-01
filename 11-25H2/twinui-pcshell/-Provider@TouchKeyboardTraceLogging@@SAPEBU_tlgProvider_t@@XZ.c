/*
 * XREFs of ?Provider@TouchKeyboardTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1804751C0
 * Callers:
 *     ?HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG00AEAURect@Foundation@Windows@@10U_GUID@@_N33333333300000000333H3@Z @ 0x180474A00 (-HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG00AEAURect@Foundation@Windows@@10U_GUID@@_N.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@P6AXXZ@Z @ 0x1804761C0 (-get@-$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@.c)
 */

const struct _tlgProvider_t *__fastcall TouchKeyboardTraceLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<TouchKeyboardTraceLogging>::get(
                                             a1,
                                             _lambda_1ac898bd3d40bc28a50fe4f0aa1b56f0_::_lambda_invoker_cdecl_)
                                         + 8);
}
