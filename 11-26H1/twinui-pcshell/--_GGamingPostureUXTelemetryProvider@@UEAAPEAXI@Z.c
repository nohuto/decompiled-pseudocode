/*
 * XREFs of ??_GGamingPostureUXTelemetryProvider@@UEAAPEAXI@Z @ 0x1803229C0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_576b8a055e1eddaf8c0f48bcebe2427e_@@CA@XZ @ 0x18068B2C0 (-_lambda_invoker_cdecl_@_lambda_576b8a055e1eddaf8c0f48bcebe2427e_@@CA@XZ.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180211708 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

GamingPostureUXTelemetryProvider *__fastcall GamingPostureUXTelemetryProvider::`scalar deleting destructor'(
        GamingPostureUXTelemetryProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
