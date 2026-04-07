/*
 * XREFs of ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180090C40
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_1_@?1??Instance@WindowFrameLoggingTelemetry@@KAPEAV3@XZ@SA@XZ @ 0x1800BB790 (-_lambda_invoker_cdecl_@_lambda_1_@-1--Instance@WindowFrameLoggingTelemetry@@KAPEAV3@XZ@SA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CA@XZ @ 0x1800E5D60 (-_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180090A0C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

wil::TraceLoggingProvider *__fastcall wil::TraceLoggingProvider::`vector deleting destructor'(
        wil::TraceLoggingProvider *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  wil::TraceLoggingProvider::~TraceLoggingProvider(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
