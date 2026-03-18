/*
 * XREFs of ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1400EBC84
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021F874 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1402211A4 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1402212F8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     ApiSetEdtionGetInputDesktopId @ 0x140225D84 (ApiSetEdtionGetInputDesktopId.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(
        CMouseProcessor::MouseInterceptState *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 8) )
    return *((_QWORD *)this + 2) == ApiSetEdtionGetInputDesktopId();
  return v1;
}
