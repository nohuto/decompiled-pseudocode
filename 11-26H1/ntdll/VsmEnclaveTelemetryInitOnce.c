/*
 * XREFs of VsmEnclaveTelemetryInitOnce @ 0x18015DDD0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 VsmEnclaveTelemetryInitOnce()
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C59C8);
  result = 1LL;
  VSMEnclaveProvidersRegistered = 1;
  return result;
}
