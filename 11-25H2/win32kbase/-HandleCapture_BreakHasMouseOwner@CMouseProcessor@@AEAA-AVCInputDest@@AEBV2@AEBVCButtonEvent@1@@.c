/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1402209F8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x140039A7C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?Clear@LastWokenThread@@YAXXZ @ 0x14009AEF0 (-Clear@LastWokenThread@@YAXXZ.c)
 *     ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14009B120 (-Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E67D0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F46E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x140126154 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x14012A060 (-Clear@MouseOwner@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x140220800 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 */

CInputDest *__fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        CInputDest *a2,
        CInputDest *a3,
        __int64 a4)
{
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v9; // rdx
  __int64 PtiFromInputDest; // rax
  LastWokenThread *v11; // rcx
  __int64 v12; // r9
  HWND WindowHandle; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  bool v16; // zf

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3896), 1, 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4433);
  if ( *(_DWORD *)(a4 + 32) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4434);
  CInputDest::CInputDest(a2, (const struct CInputDest *)(a1 + 3776));
  CInputDest::GetThreadInfo((CInputDest *)(a1 + 3776));
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v9 )
  {
    if ( v9 == ThreadInfo )
      goto LABEL_13;
    goto LABEL_10;
  }
  if ( ThreadInfo || !CInputDest::operator==((int *)(a1 + 3776), (__int64)a3) )
  {
LABEL_10:
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a3, 2LL);
    if ( PtiFromInputDest )
      LastWokenThread::Set(PtiFromInputDest, 1u, 0, v12);
    else
      LastWokenThread::Clear(v11);
  }
LABEL_13:
  if ( (*(_DWORD *)(*(_QWORD *)(a4 + 8) + 120LL) & 2) != 0 )
  {
    WindowHandle = CInputDest::GetWindowHandle(a2);
    CBaseProcessor::PostQEventWork(v14, (__int64)WindowHandle, 0, 0, 0LL, 0LL);
  }
  v15 = ~(unsigned int)CMouseProcessor::CButtonEvent::GetHardwareButton(a4);
  v16 = (v15 & *(_DWORD *)(a1 + 3772)) == 0;
  *(_DWORD *)(a1 + 3772) &= v15;
  if ( v16 )
    CMouseProcessor::MouseOwner::Clear((CMouseProcessor::MouseOwner *)(a1 + 3776));
  return a2;
}
