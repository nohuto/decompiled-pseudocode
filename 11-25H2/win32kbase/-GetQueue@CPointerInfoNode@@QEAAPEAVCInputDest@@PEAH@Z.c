/*
 * XREFs of ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x140204448
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400DFA04 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x140204600 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D1578 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F701C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 */

struct CInputDest *__fastcall CPointerInfoNode::GetQueue(CPointerInfoNode *this, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  CInputDest *v8; // rbx
  CInputDest *v9; // [rsp+50h] [rbp+8h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 646);
  }
  *a2 = 0;
  if ( !*((_DWORD *)this + 111) )
  {
LABEL_14:
    v9 = 0LL;
    UserSessionState = W32GetUserSessionState(v5, v4);
    CTouchProcessor::GetPointerCapture(
      *(CTouchProcessor **)(UserSessionState + 3256),
      *((_QWORD *)this + 2),
      0,
      &v9,
      0LL);
    v8 = v9;
    if ( !v9 )
      return 0LL;
    if ( !CInputDest::GetThreadInfo(v9) )
    {
      LODWORD(v9) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 691);
    }
    if ( !*((_QWORD *)CInputDest::GetThreadInfo(v8) + 59) )
    {
      LODWORD(v9) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 692);
    }
    return v8;
  }
  if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 352, *((_QWORD *)this + 24), 1) )
  {
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
    goto LABEL_14;
  }
  if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 352, *((_QWORD *)this + 24), 2) )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( !CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 668);
  }
  if ( !*((_QWORD *)CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) + 59) )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 669);
  }
  return (CPointerInfoNode *)((char *)this + 352);
}
