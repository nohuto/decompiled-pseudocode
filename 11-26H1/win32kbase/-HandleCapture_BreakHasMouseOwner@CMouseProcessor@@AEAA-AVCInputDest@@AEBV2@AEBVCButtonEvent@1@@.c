/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14010AFBC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x1400CFD00 (-Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D0D68 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x1400D1338 (-GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x14010B160 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x14010B1A0 (-Clear@MouseOwner@CMouseProcessor@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x14012D9A4 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1401625DC (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CInputDest *__fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        CInputDest *a2,
        CInputDest *a3,
        __int64 a4)
{
  const struct CInputDest *v4; // rsi
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v10; // r8
  unsigned int v11; // eax
  bool v12; // zf
  __int64 PtiFromInputDest; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rbx
  HWND WindowHandle; // rax
  __int64 v19; // rcx

  v4 = (const struct CInputDest *)(a1 + 3784);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3904), 1, 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4443LL);
  if ( *(_DWORD *)(a4 + 32) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4444LL);
  CInputDest::CInputDest(a2, v4);
  CInputDest::GetThreadInfo(v4);
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v10 )
  {
    if ( v10 == ThreadInfo )
      goto LABEL_9;
  }
  else if ( !ThreadInfo && CInputDest::operator==((__int64)v4, (__int64)a3) )
  {
    goto LABEL_9;
  }
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a3, 2LL, v10);
  if ( PtiFromInputDest )
  {
    LastWokenThread::Set(PtiFromInputDest, 1u, 0, v16);
  }
  else
  {
    v17 = *((_QWORD *)GetCurrentProcessUserGlobals(v15) + 381);
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)v17);
    if ( *(_BYTE *)(v17 + 17) )
    {
      ForegroundBoost::SetForegroundPriority(*(_QWORD *)(v17 + 8), 0, 0x10u);
      *(_BYTE *)(v17 + 17) = 0;
      *(_QWORD *)(v17 + 24) = 0LL;
    }
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_BYTE *)(v17 + 16) = 0;
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v17);
  }
LABEL_9:
  if ( (*(_DWORD *)(*(_QWORD *)(a4 + 8) + 120LL) & 2) != 0 )
  {
    WindowHandle = CInputDest::GetWindowHandle(a2);
    CBaseProcessor::PostQEventWork(v19, WindowHandle, 0LL);
  }
  v11 = ~(unsigned int)CMouseProcessor::CButtonEvent::GetHardwareButton(a4);
  v12 = (v11 & *(_DWORD *)(a1 + 3780)) == 0;
  *(_DWORD *)(a1 + 3780) &= v11;
  if ( v12 )
    CMouseProcessor::MouseOwner::Clear(v4);
  return a2;
}
