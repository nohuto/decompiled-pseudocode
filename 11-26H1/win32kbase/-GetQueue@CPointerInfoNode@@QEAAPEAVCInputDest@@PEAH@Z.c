/*
 * XREFs of ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x14006C7BC
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x14006CFE8 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400CCC34 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x14004C8A0 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ValidateHbwnd @ 0x1400533C0 (ValidateHbwnd.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CInputDest *__fastcall CPointerInfoNode::GetQueue(CPointerInfoNode *this, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  CInputDest *v7; // rdi
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rax
  char v11; // al
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 UserSessionState; // rax
  CInputDest *v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rax
  bool v21; // zf
  CInputDest *v22; // [rsp+60h] [rbp+8h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
  {
    LODWORD(v22) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 644LL);
  }
  v7 = (CPointerInfoNode *)((char *)this + 352);
  *a2 = 0;
  v8 = *((_DWORD *)this + 111);
  if ( !v8 )
  {
LABEL_18:
    v22 = 0LL;
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    CTouchProcessor::GetPointerCapture(*(PERESOURCE **)(UserSessionState + 3256), *((_QWORD *)this + 2), 0, &v22, 0LL);
    v18 = v22;
    if ( !v22 )
      return 0LL;
    if ( !CInputDest::GetThreadInfo(v22) )
    {
      LODWORD(v22) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 689LL);
    }
    if ( !*((_QWORD *)CInputDest::GetThreadInfo(v18) + 58) )
    {
      LODWORD(v22) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 690LL);
    }
    return v18;
  }
  v5 = *((_QWORD *)this + 24);
  if ( v8 == 2 )
  {
    v9 = *((_QWORD *)this + 54);
    LOBYTE(v4) = 1;
    v10 = HMValidateHandleNoSecure(v5, v4);
    if ( !v10 || (v21 = v10 == v9, v11 = 1, !v21) )
      v11 = 0;
    if ( v11 )
      goto LABEL_8;
    goto LABEL_24;
  }
  if ( v8 != 1
    || (v19 = *((_QWORD *)this + 54), LOBYTE(v4) = 23, (v20 = HMValidateHandleNoSecure(v5, v4)) == 0)
    || v20 != v19 )
  {
LABEL_24:
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
    goto LABEL_18;
  }
LABEL_8:
  v12 = *((_DWORD *)this + 111);
  v13 = *((_QWORD *)this + 24);
  if ( v12 == 2 )
  {
    v14 = *((_QWORD *)this + 54);
    v15 = ValidateHwndEx(v13, 1LL);
  }
  else
  {
    if ( v12 != 1 )
    {
LABEL_11:
      *a2 = 1;
      return 0LL;
    }
    v14 = *((_QWORD *)this + 54);
    v15 = ValidateHbwnd(v13, v4, v6);
  }
  if ( !v15 || v15 != v14 )
    goto LABEL_11;
  if ( !CInputDest::GetThreadInfo(v7) )
  {
    LODWORD(v22) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 666LL);
  }
  if ( !*((_QWORD *)CInputDest::GetThreadInfo(v7) + 58) )
  {
    LODWORD(v22) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 667LL);
  }
  return v7;
}
