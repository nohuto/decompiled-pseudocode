/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x140784478
 * Callers:
 *     HalpMiscInitSystem @ 0x140BF13F0 (HalpMiscInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E024C8, 0LL, 0LL);
  return 0LL;
}
