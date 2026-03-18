/*
 * XREFs of SetKeyboardInputRoutingPolicy @ 0x140216BA0
 * Callers:
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1400BD170 (NtMITSetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     IsInputProcessingActivated @ 0x140067500 (IsInputProcessingActivated.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x140106DC8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetKeyboardInputRoutingPolicy(__int64 a1, __int64 a2)
{
  __int32 v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 KeyboardProcessor; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = a1;
  if ( !IsInputThread(a1, a2) || !IsInputProcessingActivated(v4, v3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2167);
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v6, v5);
  if ( !IsInputThread(v9, v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 501);
  _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 16), v2);
  return 0LL;
}
