/*
 * XREFs of LibLoaderTelemetryInitOnce @ 0x18015DD50
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 LibLoaderTelemetryInitOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C5958);
  return 1LL;
}
