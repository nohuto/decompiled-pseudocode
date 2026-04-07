/*
 * XREFs of ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18009E530
 * Callers:
 *     ?FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800BC0D0 (-FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18009EA64 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::TraceLoggingProvider::OnErrorReported(
        wil::TraceLoggingProvider *this,
        char a2,
        const struct wil::FailureInfo *a3)
{
  if ( !a2 && (*((_BYTE *)a3 + 4) & 2) == 0 )
  {
    if ( *((_DWORD *)this + 5) == 1 )
    {
      wil::TraceLoggingProvider::ReportTelemetryFailure(this, a3);
    }
    else if ( *((_DWORD *)this + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure(this, a3);
    }
  }
}
