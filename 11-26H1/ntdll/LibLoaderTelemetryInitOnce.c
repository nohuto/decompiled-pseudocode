/*
 * XREFs of LibLoaderTelemetryInitOnce @ 0x18015DC10
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016E69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall LibLoaderTelemetryInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C4958);
  return 1LL;
}
