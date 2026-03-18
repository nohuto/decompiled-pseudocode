/*
 * XREFs of ?NotifyFailure@TraceLoggingProvider@wil@@EEAA_NAEBUFailureInfo@2@@Z @ 0x180223840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::TraceLoggingProvider::NotifyFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // eax

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = *((_DWORD *)a2 + 4);
  if ( v2 != `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen )
    (*(void (__fastcall **)(wil::TraceLoggingProvider *, _QWORD, const struct wil::FailureInfo *))(*(_QWORD *)this + 16LL))(
      this,
      0LL,
      a2);
  return 1;
}
