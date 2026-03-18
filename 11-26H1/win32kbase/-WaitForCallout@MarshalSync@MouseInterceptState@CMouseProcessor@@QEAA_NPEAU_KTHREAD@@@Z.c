/*
 * XREFs of ?WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z @ 0x140224D50
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140223DC8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::MarshalSync::WaitForCallout(
        CMouseProcessor::MouseInterceptState::MarshalSync *this,
        struct _KTHREAD *a2)
{
  void *v4; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( !*(_QWORD *)this )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8697);
  v4 = *(void **)this;
  Object[0] = a2;
  Object[1] = v4;
  return KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL) >= 1;
}
