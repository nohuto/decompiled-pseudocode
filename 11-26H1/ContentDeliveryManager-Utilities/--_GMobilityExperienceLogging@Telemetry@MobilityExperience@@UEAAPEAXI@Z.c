/*
 * XREFs of ??_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z @ 0x18002C920
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_@@CA@XZ @ 0x180023560 (-_lambda_invoker_cdecl_@_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_41dc59efcb7f6863bfbeda390f55e438_@@CA@XZ @ 0x180040ED0 (-_lambda_invoker_cdecl_@_lambda_41dc59efcb7f6863bfbeda390f55e438_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_f445b1b04a1e911cb28a3e84927aae7d_@@CA@XZ @ 0x180040F60 (-_lambda_invoker_cdecl_@_lambda_f445b1b04a1e911cb28a3e84927aae7d_@@CA@XZ.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18002A3E8 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

MobilityExperience::Telemetry::MobilityExperienceLogging *__fastcall MobilityExperience::Telemetry::MobilityExperienceLogging::`scalar deleting destructor'(
        MobilityExperience::Telemetry::MobilityExperienceLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
