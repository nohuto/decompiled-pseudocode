/*
 * XREFs of SetKeyboardInputRoutingPolicy @ 0x14013E69C
 * Callers:
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x14013DF50 (NtMITSetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     IsInputProcessingActivated @ 0x1400D10D0 (IsInputProcessingActivated.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x14013E9E8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetKeyboardInputRoutingPolicy(int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 KeyboardProcessor; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  if ( !IsInputThread(a1, a2, a3) || !IsInputProcessingActivated(v5, v4, v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2164LL);
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  if ( !IsInputThread(v9, v8, v10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 485LL);
  _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 16), a1);
  return 0LL;
}
