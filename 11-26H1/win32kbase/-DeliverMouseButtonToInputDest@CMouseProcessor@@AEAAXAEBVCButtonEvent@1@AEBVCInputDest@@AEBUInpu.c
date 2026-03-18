/*
 * XREFs of ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CF738
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x140224010 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x14008984C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1400898B0 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x140089F40 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1400CDFE8 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400CE144 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1400CE394 (ApiSetEditionPostInputMessage.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1400CE60C (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1400CF714 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x140119374 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x1401983C0 (ApiSetEditionxxxReportMouseBreakToAccessibility.c)
 *     ApiSetEditionHandleHungWindow @ 0x14019D220 (ApiSetEditionHandleHungWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::DeliverMouseButtonToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  int v9; // ecx
  int v10; // r12d
  __int64 v11; // r15
  char v12; // al
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdi
  int v16; // esi
  struct tagWND *UserWindow; // rax
  __int64 v18; // r9
  CMouseProcessor::CButtonEvent *v19; // rdi
  char v20; // bl
  int v21; // edx
  int v22; // r8d
  bool v23; // di
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // r8d
  bool v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  unsigned int ButtonMessage; // [rsp+60h] [rbp-69h]
  __int128 v38; // [rsp+70h] [rbp-59h] BYREF
  CMouseProcessor::CButtonEvent *v39; // [rsp+80h] [rbp-49h]
  _QWORD v40[3]; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v41[56]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v42; // [rsp+D8h] [rbp+Fh] BYREF
  int v43; // [rsp+E0h] [rbp+17h]

  v39 = a2;
  if ( !*(_DWORD *)a3 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4193LL);
    return;
  }
  if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
  {
    ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    AtomicExecutionCheck::AtomicExecutionCheck(&v38);
    CMouseProcessor::PostPendingMouseMoveToInputDest(this, a3);
    DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(a3);
    if ( DelegateThreadInfo )
      CMouseProcessor::PostPendingMouseMove(this, *((struct tagQ **)DelegateThreadInfo + 58));
    v9 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v10 = v9 | 4;
    if ( !*(_BYTE *)a4 )
      v10 = v9;
    if ( (*((_DWORD *)a3 + 26) & 4) != 0 )
      v10 |= 0x40u;
    v11 = *((_QWORD *)a2 + 1);
    v42 = *(_QWORD *)(v11 + 144);
    v43 = *(_DWORD *)(v11 + 152);
    v40[0] = v11;
    v12 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v13 = *((_QWORD *)a4 + 1);
    v40[2] = 0LL;
    v40[1] = (unsigned __int64)&v42 & -(__int64)(v12 != 0);
    v14 = *(unsigned int *)(v11 + 40);
    v15 = *(_QWORD *)(v11 + 96);
    v16 = *(_DWORD *)(v11 + 88);
    CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v39);
    UserWindow = CInputDest::GetUserWindow(a3);
    ApiSetEditionPostInputMessage(
      (__int64)a3,
      (__int64)UserWindow,
      ButtonMessage,
      v18,
      v13,
      v16,
      v15,
      v14,
      v10,
      (__int64 *)(v11 + 112),
      (__int64)v40);
    if ( (_BYTE)v38 )
      --*(_DWORD *)(*((_QWORD *)&v38 + 1) + 28LL);
    v19 = v39;
    v20 = 1;
    if ( *((_DWORD *)v39 + 8) != 2 )
      goto LABEL_12;
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v41, a3);
    v27 = *((_QWORD *)v19 + 1);
    v28 = *((unsigned int *)v19 + 6);
    v29 = *(_OWORD *)(v27 + 144);
    v30 = (*(_DWORD *)(v27 + 120) >> 7) & 1;
    v38 = v29;
    if ( (unsigned int)ApiSetEditionxxxReportMouseBreakToAccessibility(v28, &v38, v30) )
    {
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v41, v31);
LABEL_12:
      AtomicExecutionCheck::AtomicExecutionCheck(&v38);
      if ( *(_DWORD *)a3 && ButtonMessage == 513 )
        ApiSetEditionHandleHungWindow(a3);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v20 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(UserSessionState + 69136),
          4,
          6,
          41,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
      }
      if ( (_BYTE)v38 )
        --*(_DWORD *)(*((_QWORD *)&v38 + 1) + 28LL);
      return;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v20 = 0;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v32);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69136),
        3,
        6,
        40,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v41, v31);
  }
}
