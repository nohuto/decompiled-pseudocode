/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14024A64C
 * Callers:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x140059438 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEA.c)
 *     NtDuplicateCompositionInputSink @ 0x1402481B0 (NtDuplicateCompositionInputSink.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1400BF840 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredMsgKM(const char *a1)
{
  __int64 v1; // [rsp+20h] [rbp-18h]
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  LODWORD(v1) = -1;
  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 0, 0LL, -1, v1, a1);
}
