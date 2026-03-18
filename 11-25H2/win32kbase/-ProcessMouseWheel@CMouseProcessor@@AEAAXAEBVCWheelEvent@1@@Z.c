/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14021FA30 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x140037658 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x140037B68 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14003864C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x140038784 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x140039A7C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1400B8984 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1400B9350 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1400B93A4 (ApiSetEditionLLMouseWheelHook.c)
 *     ?GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1400B9430 (-GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1400B9464 (-ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1400B9534 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x1400B9794 (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1400B97C4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1400B9818 (ApiSetEditionPostRawMouseInputMessage.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1400B988C (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400B98F0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1400B9C04 (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400B9D20 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1400BA388 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1400BA3AC (ApiSetEditionPostMouseWheelToForeground.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1400BA4C0 (APISetEditionGetMouseWheelRoutingMode.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x14015EA78 (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1401A1664 (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021FF1C (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1402209B0 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x140222024 (-RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x140222284 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1402225F8 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  char v2; // di
  char v5; // r14
  struct tagPOINT v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // ebx
  __int128 v11; // xmm6
  unsigned int WheelMessage; // eax
  char v13; // si
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool ShouldDeliverWheelEventToInputDest; // r13
  struct CInputDest *v19; // rax
  CMouseProcessor *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  HWND v30; // r14
  unsigned int v31; // ebx
  __int16 v32; // di
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // rbx
  int v38; // eax
  bool v39; // zf
  __int64 v40; // rdx
  bool v41; // si
  bool v42; // bl
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r13
  int v53; // eax
  bool v54; // bl
  __int64 v55; // rsi
  __int64 v56; // r14
  int v57; // r15d
  int v58; // edi
  unsigned int v59; // eax
  CMouseProcessor *v60; // rcx
  __int64 v61; // rdx
  char v62; // bl
  bool v63; // di
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  char v71; // bl
  bool v72; // di
  __int64 UserSessionState; // rax
  int v74; // r8d
  int v75; // edx
  __int64 v76; // rdx
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  int v80; // eax
  bool v81; // bl
  __int64 v82; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+60h] [rbp-A8h] BYREF
  struct tagPOINT v84; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v85; // [rsp+70h] [rbp-98h]
  _QWORD v86[2]; // [rsp+78h] [rbp-90h] BYREF
  char v87; // [rsp+88h] [rbp-80h]
  int v88; // [rsp+8Ch] [rbp-7Ch]
  struct tagPOINT v89; // [rsp+90h] [rbp-78h] BYREF
  _OWORD v90[7]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v91[20]; // [rsp+108h] [rbp+0h] BYREF
  int v92; // [rsp+11Ch] [rbp+14h]
  _QWORD v93[16]; // [rsp+128h] [rbp+20h] BYREF
  struct tagPOINT v94; // [rsp+1A8h] [rbp+A0h] BYREF
  int v95; // [rsp+1B0h] [rbp+A8h]
  int v96; // [rsp+1B4h] [rbp+ACh]
  int v97; // [rsp+1B8h] [rbp+B0h]
  int v98; // [rsp+1BCh] [rbp+B4h]
  unsigned __int64 PublicExtraInfo; // [rsp+1C0h] [rbp+B8h]
  _BYTE v100[80]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v101; // [rsp+218h] [rbp+110h] BYREF
  int v102; // [rsp+224h] [rbp+11Ch]
  _BYTE v103[128]; // [rsp+248h] [rbp+140h] BYREF

  v2 = 0;
  LODWORD(v83) = 0;
  v86[0] = this;
  v5 = 0;
  v86[1] = a2;
  v87 = 0;
  v88 = 0;
  v6 = *(struct tagPOINT *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19872) + 4960LL);
  v7 = *((_QWORD *)a2 + 1);
  v89 = v6;
  if ( (*(_DWORD *)(v7 + 120) & 0x200) != 0 )
    v6 = *(struct tagPOINT *)(v7 + 52);
  v84 = v6;
  v85 = (LOWORD(v6.y) << 16) | LOWORD(v6.x);
  memset(v93, 0, 113);
  CMouseProcessor::InformUMObservers(this, a2, &v84, &v84);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x80u) != 0 || !CBaseProcessor::IsUMSuppressed(this) )
  {
    v8 = *((_QWORD *)a2 + 1);
    v95 = *((unsigned __int16 *)a2 + 16) << 16;
    v94 = v6;
    v96 = *(unsigned __int8 *)(v8 + 120) >> 7;
    v97 = *(_DWORD *)(v8 + 88);
    v98 = 0;
    PublicExtraInfo = CMouseProcessor::CMouseEvent::GetPublicExtraInfo(a2);
    v10 = *(_DWORD *)(v9 + 120);
    v11 = *(_OWORD *)(v9 + 144);
    WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
    *(_OWORD *)v91 = v11;
    v13 = 1;
    if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v94, WheelMessage, v91, (v10 & 1) == 0) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || (v71 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v71 = 0;
      }
      v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v71 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v74) = v72;
        LOBYTE(v75) = v71;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v75,
          v74,
          *(_QWORD *)(UserSessionState + 69144),
          4,
          6,
          45,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
      v76 = 1LL;
    }
    else
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18888) )
      {
        v17 = *(unsigned int *)(*((_QWORD *)a2 + 1) + 120LL);
        if ( (v17 & 8) == 0 )
        {
          v17 = *((unsigned int *)InputDelegation::CInputDelegationInfo::GetInstance() + 2);
          if ( (v17 & 2) == 0 )
            CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3688, 0LL, 0LL);
        }
      }
      ShouldDeliverWheelEventToInputDest = 0;
      LODWORD(v82) = 0;
      if ( !*((_DWORD *)a2 + 6) )
      {
        v17 = *((unsigned int *)InputDelegation::CInputDelegationInfo::GetInstance() + 2);
        if ( (v17 & 2) == 0 )
          goto LABEL_26;
      }
      v83 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872) + 4952LL);
      v19 = CMouseProcessor::MouseHitTest(
              (__int64)this,
              (struct CInputDest *)v100,
              &v89,
              (__int64)&v83,
              a2,
              0,
              (unsigned int *)&v82);
      CInputDest::operator=(v93, v19);
      if ( v102 )
        HMAssignmentUnlock(&v101);
      v88 = HIDWORD(v93[0]);
      v87 = 1;
      ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                             v20,
                                             a2,
                                             (const struct CInputDest *)v93);
      if ( !ShouldDeliverWheelEventToInputDest )
        goto LABEL_26;
      if ( !*(_QWORD *)(W32GetUserSessionState(v22, v21) + 18888)
        || (v25 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 18888), CInputDest::GetQueue(v93, 2LL) != v25) )
      {
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v93);
      }
      v27 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v27 + 120) & 8) != 0 )
      {
        if ( *(_DWORD *)(v27 + 116) == 1
          || (v80 = *(_DWORD *)(v27 + 152),
              *(_QWORD *)v91 = *(_QWORD *)(v27 + 144),
              *(_DWORD *)&v91[8] = v80,
              (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)v91)) )
        {
          if ( !*((_BYTE *)this + 3757) && !*((_BYTE *)this + 3756) )
            *((_BYTE *)this + 3756) = (unsigned int)ApiSetEditionPostRawMouseInputMessage(
                                                      (unsigned int)v93,
                                                      *((_QWORD *)this + 465),
                                                      *((_DWORD *)this + 928),
                                                      (int)this + 3728,
                                                      (__int64)this + 3688) != 0;
        }
      }
      if ( HIDWORD(v93[11]) && v93[10] )
        v28 = *(_QWORD *)(v93[10] + 16LL);
      else
        v28 = 0LL;
      if ( v28 )
      {
        if ( (unsigned __int8)anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(v28) )
        {
          InputDestFromForegroundFocus = (_OWORD *)QHelper::GetInputDestFromForegroundFocus(v100);
          v44 = InputDestFromForegroundFocus[1];
          v90[0] = *InputDestFromForegroundFocus;
          v45 = InputDestFromForegroundFocus[2];
          v90[1] = v44;
          v46 = InputDestFromForegroundFocus[3];
          v90[2] = v45;
          v47 = InputDestFromForegroundFocus[4];
          v90[3] = v46;
          v48 = InputDestFromForegroundFocus[5];
          v90[4] = v47;
          v49 = InputDestFromForegroundFocus[6];
          v90[5] = v48;
          v90[6] = v49;
          CInputDest::CInputDest((CInputDest *)v103, (const struct tagINPUTDEST *)v90);
          v5 = 1;
          if ( !CInputDest::operator==((int *)v93, (__int64)v103) )
            v2 = 1;
        }
      }
      if ( (v5 & 1) != 0 )
        CInputDest::~CInputDest((CInputDest *)v103);
      if ( !v2 )
      {
        MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
        if ( MouseWheelForegroundThread
          && *(_QWORD *)(v28 + 464) != *(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread(MouseWheelForegroundThread)
                                                 + 464)
          && !(unsigned int)APISetEditionGetMouseWheelRoutingMode()
          && CMouseProcessor::HittestWheelRoutingRequested(v60) )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
            || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v62 = 0;
          }
          v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v64 = W32GetUserSessionState(WPP_GLOBAL_Control, v61);
            LOBYTE(v65) = v63;
            LOBYTE(v66) = v62;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v66,
              v65,
              *(_QWORD *)(v64 + 69144),
              4,
              6,
              47,
              (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
          }
          InputTraceLogging::Mouse::RerouteWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL));
          ShouldDeliverWheelEventToInputDest = 0;
        }
LABEL_26:
        v30 = 0LL;
        if ( (v93[0] & 4) != 0 )
        {
          if ( HIDWORD(v93[11]) == 1 || HIDWORD(v93[11]) == 2 )
          {
            if ( v93[10] )
              v30 = *(HWND *)v93[10];
            else
              v30 = 0LL;
          }
        }
        else if ( (v93[0] & 2) != 0 )
        {
          v30 = (HWND)v93[3];
        }
        v31 = *((_DWORD *)a2 + 6);
        v32 = *((_WORD *)a2 + 16);
        v33 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
        InputTraceLogging::Mouse::ProcessWheel(
          *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL),
          (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
          v33,
          v32,
          v31,
          v30,
          ShouldDeliverWheelEventToInputDest);
        v36 = 2 * CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
        LODWORD(v83) = v36;
        if ( ShouldDeliverWheelEventToInputDest )
        {
          if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v93, 1LL, 1) )
          {
            *(_QWORD *)&v91[12] = 0LL;
            v92 = 0;
            *(_DWORD *)&v91[8] = v36;
            v37 = (unsigned __int64)*((unsigned __int16 *)a2 + 16) << 16;
            *(_QWORD *)v91 = v85;
            v38 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
            if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                                 (__int64)this,
                                 (__int64)v93,
                                 a2,
                                 (struct CMouseProcessor::InputDeliveryContext *)v91,
                                 &v84,
                                 v82,
                                 v38,
                                 v37) == 1 )
              CMouseProcessor::DeliverMouseWheelToInputDest(
                this,
                a2,
                (const struct CInputDest *)v93,
                (const struct CMouseProcessor::InputDeliveryContext *)v91);
          }
        }
        else if ( !*(_QWORD *)(W32GetUserSessionState(v35, v34) + 18888)
               || anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1) )
        {
          v67 = W32GetUserSessionState(v51, v50);
          InputTraceLogging::Mouse::DropWheel(
            *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL),
            *(_QWORD *)(v67 + 18888) != 0LL ? 12 : 19);
        }
        else
        {
          v52 = *((_QWORD *)a2 + 1);
          v53 = *(_DWORD *)(v52 + 152);
          *(_QWORD *)v91 = *(_QWORD *)(v52 + 144);
          *(_DWORD *)&v91[8] = v53;
          v54 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
          v55 = *(unsigned int *)(v52 + 40);
          v56 = *(_QWORD *)(v52 + 96);
          v57 = *(_DWORD *)(v52 + 88);
          v58 = *((unsigned __int16 *)a2 + 16) << 16;
          v59 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
          ApiSetEditionPostMouseWheelToForeground(
            v59,
            v58,
            v85,
            v57,
            v56,
            v55,
            v83 | 0x20,
            v52 + 112,
            (unsigned __int64)v91 & -(__int64)v54);
        }
        v39 = HIDWORD(v93[11]) == 0;
        goto LABEL_34;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v13 = 0;
      }
      v81 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v77 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
        LOBYTE(v78) = v81;
        LOBYTE(v79) = v13;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v79,
          v78,
          *(_QWORD *)(v77 + 69144),
          4,
          6,
          46,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
      v76 = 3LL;
    }
    InputTraceLogging::Mouse::DropWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v76);
    CInputDest::~CInputDest((CInputDest *)v93);
    goto LABEL_37;
  }
  v41 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v68 = W32GetUserSessionState(WPP_GLOBAL_Control, v40);
    LOBYTE(v69) = v42;
    LOBYTE(v70) = v41;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v70,
      v69,
      *(_QWORD *)(v68 + 69144),
      4,
      6,
      44,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
  }
  InputTraceLogging::Mouse::DropWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 4LL);
  v39 = HIDWORD(v93[11]) == 0;
LABEL_34:
  if ( !v39 )
    HMAssignmentUnlock(&v93[10]);
  memset(v93, 0, 0x78uLL);
LABEL_37:
  CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)v86);
}
