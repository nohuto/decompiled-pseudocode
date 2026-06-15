/*
 * XREFs of ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180039070
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180039B04 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::TraceLoggingProvider::OnErrorReported(
        wil::TraceLoggingProvider *this,
        char a2,
        const struct wil::FailureInfo *a3,
        int a4)
{
  if ( !a2 && (*((_BYTE *)a3 + 4) & 2) == 0 )
  {
    if ( *((_DWORD *)this + 5) == 1 )
    {
      wil::TraceLoggingProvider::ReportTelemetryFailure(this, a3, (__int64)a3, a4);
    }
    else if ( *((_DWORD *)this + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure(this, a3);
    }
  }
}
