/*
 * XREFs of ?FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800BB860
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x1800BB8D8 (-get@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemet.c)
 */

void __fastcall WindowFrameLoggingTelemetry::FallbackTelemetryCallback(char a1, const struct wil::FailureInfo *a2)
{
  wil::TraceLoggingProvider *v4; // rax

  v4 = (wil::TraceLoggingProvider *)wil::details::static_lazy<WindowFrameLoggingTelemetry>::get();
  wil::TraceLoggingProvider::OnErrorReported(v4, a1, a2);
}
