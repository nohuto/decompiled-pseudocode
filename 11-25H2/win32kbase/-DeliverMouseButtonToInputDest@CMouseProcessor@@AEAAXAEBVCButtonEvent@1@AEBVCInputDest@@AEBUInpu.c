/*
 * XREFs of ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018F9E8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1402215DC (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x14005F048 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1400BA388 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1400EBE5C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x140125E38 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x140190780 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x140195700 (ApiSetEditionHandleHungWindow.c)
 *     ApiSetEditionPostInputMessage @ 0x140196610 (ApiSetEditionPostInputMessage.c)
 *     ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x140197004 (ApiSetEditionxxxReportMouseBreakToAccessibility.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F6D74 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x14022079C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x140220928 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::DeliverMouseButtonToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  unsigned __int8 v9; // al
  __int64 v10; // r15
  int v11; // edx
  bool v12; // zf
  int v13; // r12d
  char v14; // al
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rdi
  int v18; // esi
  unsigned int UserWindow; // eax
  int v20; // r9d
  CMouseProcessor::CButtonEvent *v21; // rdi
  char v22; // bl
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  bool v27; // di
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  bool v32; // di
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  unsigned int ButtonMessage; // [rsp+60h] [rbp-69h]
  __int128 v37; // [rsp+70h] [rbp-59h] BYREF
  CMouseProcessor::CButtonEvent *v38; // [rsp+80h] [rbp-49h]
  _QWORD v39[3]; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v40[56]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v41; // [rsp+D8h] [rbp+Fh] BYREF
  int v42; // [rsp+E0h] [rbp+17h]

  v38 = a2;
  if ( !*(_DWORD *)a3 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4183LL);
    return;
  }
  if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
  {
    ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    LOBYTE(v37) = 0;
    *((_QWORD *)&v37 + 1) = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v37);
    CMouseProcessor::PostPendingMouseMoveToInputDest(this, a3);
    DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(a3);
    if ( DelegateThreadInfo )
      CMouseProcessor::PostPendingMouseMove(this, *((struct tagQ **)DelegateThreadInfo + 59));
    v9 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v10 = *((_QWORD *)a2 + 1);
    v11 = (2 * v9) | 4;
    v12 = *(_BYTE *)a4 == 0;
    v41 = *(_QWORD *)(v10 + 144);
    if ( v12 )
      v11 = 2 * v9;
    v42 = *(_DWORD *)(v10 + 152);
    v13 = v11 | 0x40;
    v39[0] = v10;
    if ( (*((_BYTE *)a3 + 104) & 4) == 0 )
      v13 = v11;
    v14 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v15 = *((_QWORD *)a4 + 1);
    v39[2] = 0LL;
    v39[1] = (unsigned __int64)&v41 & -(__int64)(v14 != 0);
    v16 = *(unsigned int *)(v10 + 40);
    v17 = *(_QWORD *)(v10 + 96);
    v18 = *(_DWORD *)(v10 + 88);
    CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v38);
    UserWindow = (unsigned int)CInputDest::GetUserWindow(a3);
    ApiSetEditionPostInputMessage(
      (_DWORD)a3,
      UserWindow,
      ButtonMessage,
      v20,
      v15,
      v18,
      v17,
      v16,
      v13,
      v10 + 112,
      (__int64)v39);
    if ( (_BYTE)v37 )
      --*(_DWORD *)(*((_QWORD *)&v37 + 1) + 28LL);
    v21 = v38;
    v22 = 1;
    if ( *((_DWORD *)v38 + 8) == 2 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v40, a3);
      v23 = *((_QWORD *)v21 + 1);
      v24 = *((unsigned int *)v21 + 6);
      v25 = (*(_DWORD *)(v23 + 120) >> 7) & 1;
      v37 = *(_OWORD *)(v23 + 144);
      if ( !(unsigned int)ApiSetEditionxxxReportMouseBreakToAccessibility(v24, &v37, v25) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v22 = 0;
        }
        v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
          LOBYTE(v29) = v27;
          LOBYTE(v30) = v22;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v30,
            v29,
            *(_QWORD *)(UserSessionState + 69144),
            3,
            6,
            40,
            (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
        }
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v40);
        return;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v40);
    }
    LOBYTE(v37) = 0;
    *((_QWORD *)&v37 + 1) = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v37);
    if ( *(_DWORD *)a3 && ButtonMessage == 513 )
      ApiSetEditionHandleHungWindow(a3);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v22 = 0;
    }
    v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
      LOBYTE(v34) = v32;
      LOBYTE(v35) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v34,
        *(_QWORD *)(v33 + 69144),
        4,
        6,
        41,
        (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    }
    if ( (_BYTE)v37 )
      --*(_DWORD *)(*((_QWORD *)&v37 + 1) + 28LL);
  }
}
