/*
 * XREFs of NtDuplicateCompositionInputSink @ 0x1402481B0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14024A64C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall NtDuplicateCompositionInputSink(__int64 a1, __int64 a2)
{
  MicrosoftTelemetryAssertTriggeredMsgKM("API is being deprecated. Caller should switch to DuplicateHandle", a2);
  return 3221225659LL;
}
