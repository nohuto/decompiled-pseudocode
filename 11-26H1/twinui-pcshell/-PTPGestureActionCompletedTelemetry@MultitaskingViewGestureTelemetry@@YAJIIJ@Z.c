/*
 * XREFs of ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z @ 0x1804AA1A8
 * Callers:
 *     _lambda_5f246d3d225ef97a552fc7098e7c8139_::operator() @ 0x18049A2EC (_lambda_5f246d3d225ef97a552fc7098e7c8139_--operator().c)
 * Callees:
 *     ?GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z @ 0x1801DB3F0 (-GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18029583C (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029587C (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 */

__int64 __fastcall MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
        MultitaskingViewGestureTelemetry *this,
        int a2,
        unsigned int a3)
{
  int v5; // esi
  __int64 v6; // rcx
  MultitaskingViewTelemetry *v7; // rcx

  v5 = (int)this;
  if ( MultitaskingViewTelemetry::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<MultitaskingViewTelemetry>::get(
      v6,
      (void (__cdecl *)())_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
    MultitaskingViewTelemetry::GestureActionResult_(v7, v5, a2, (a3 & 0x80000000) == 0);
  }
  return a3;
}
