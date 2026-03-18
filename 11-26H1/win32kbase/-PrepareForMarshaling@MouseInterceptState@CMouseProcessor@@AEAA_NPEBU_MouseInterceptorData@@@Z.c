/*
 * XREFs of ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x140224680
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140223DC8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     CreateKernelEvent @ 0x14016CAE0 (CreateKernelEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::PrepareForMarshaling(
        CMouseProcessor::MouseInterceptState *this,
        const struct _MouseInterceptorData *a2)
{
  char v4; // di
  struct _KEVENT *KernelEvent; // rax
  _OWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 6) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8651);
  if ( *((_DWORD *)this + 7) != (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8654);
  memset(v7, 0, 20);
  v4 = 1;
  *((_OWORD *)this + 5) = v7[0];
  *((_DWORD *)this + 24) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  if ( !*((_QWORD *)this + 13) )
  {
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    *((_QWORD *)this + 13) = KernelEvent;
    if ( !KernelEvent )
      return 0;
  }
  *((_OWORD *)this + 2) = *(_OWORD *)a2;
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 2);
  return v4;
}
