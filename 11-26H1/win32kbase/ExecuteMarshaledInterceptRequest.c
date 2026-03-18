/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x14021B470
 * Callers:
 *     HandleMITWakeSignal @ 0x14012BBF8 (HandleMITWakeSignal.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x140223C58 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall ExecuteMarshaledInterceptRequest(int a1, int a2, int a3)
{
  __int64 MouseProcessor; // rbx

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3);
  if ( MouseProcessor )
  {
    if ( *(_DWORD *)(MouseProcessor + 32) == (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1990);
    CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor::MouseInterceptState *)(MouseProcessor + 3912));
  }
}
