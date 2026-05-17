/*
 * XREFs of CastGuardTelemetryInitOnce @ 0x18015CE60
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 CastGuardTelemetryInitOnce()
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C5A38);
  result = 1LL;
  CastGuardProvidersRegistered = 1;
  return result;
}
