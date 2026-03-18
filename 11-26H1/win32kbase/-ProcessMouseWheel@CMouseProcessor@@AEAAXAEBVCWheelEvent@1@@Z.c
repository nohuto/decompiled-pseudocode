/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x140144620 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x14006CD8C (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x140089C64 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x140089CEC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x14008A044 (-GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x14008A158 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14009B3E4 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x14009C758 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400A2568 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400CE174 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1400CE34C (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CE498 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1400CF714 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D0D68 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x140145140 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x140145174 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x14014527C (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1401452AC (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x140145320 (APISetEditionGetMouseWheelRoutingMode.c)
 *     ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x140161484 (-ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x14016444C (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14016C0A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x14019CEDC (ApiSetEditionLLMouseWheelHook.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1401A224C (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1401C5408 (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x140224910 (-RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x140227C98 (ApiSetEditionPostMouseWheelToForeground.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        int a3)
{
  char v5; // di
  struct tagPOINT v6; // rbx
  __int64 v7; // rcx
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  bool v12; // r14
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // r8
  char v19; // r14
  __int64 v20; // r8
  __int128 v21; // xmm6
  int v22; // ebx
  unsigned int WheelMessage; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  char v27; // bl
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  int v32; // edx
  __int64 v33; // rcx
  int v34; // r8d
  struct CInputDest *v35; // rax
  int v36; // r8d
  CMouseProcessor *v37; // rcx
  int v38; // r8d
  __int64 v39; // rcx
  int v40; // eax
  struct tagTHREADINFO *ThreadInfo; // rax
  int v42; // edx
  int v43; // r8d
  struct tagTHREADINFO *v44; // rbx
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  char v52; // si
  bool v53; // bl
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  CMouseProcessor *v58; // rcx
  int v59; // edx
  int v60; // r8d
  char v61; // bl
  bool v62; // di
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  HWND WindowHandle; // rax
  unsigned int v67; // edi
  __int16 v68; // si
  HWND v69; // rbx
  unsigned int v70; // eax
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  int v74; // r12d
  __int64 v75; // rbx
  int v76; // eax
  int v77; // edx
  int v78; // ecx
  int v79; // r8d
  __int64 v80; // r15
  char v81; // al
  unsigned __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rdi
  __int64 v85; // rsi
  int v86; // r14d
  int v87; // ebx
  int v88; // eax
  bool v89[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct tagPOINT v90; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v91[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v92; // [rsp+78h] [rbp-90h]
  int v93; // [rsp+7Ch] [rbp-8Ch]
  __int64 v94; // [rsp+80h] [rbp-88h]
  __int64 v95; // [rsp+88h] [rbp-80h] BYREF
  struct tagPOINT v96; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v97[4]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v98[7]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v99[112]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v100[20]; // [rsp+198h] [rbp+90h] BYREF
  int v101; // [rsp+1ACh] [rbp+A4h]
  struct tagPOINT v102; // [rsp+1B8h] [rbp+B0h] BYREF
  int v103; // [rsp+1C0h] [rbp+B8h]
  int v104; // [rsp+1C4h] [rbp+BCh]
  int v105; // [rsp+1C8h] [rbp+C0h]
  int v106; // [rsp+1CCh] [rbp+C4h]
  __int64 PublicExtraInfo; // [rsp+1D0h] [rbp+C8h]
  _QWORD v108[14]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v109; // [rsp+248h] [rbp+140h]
  _BYTE v110[128]; // [rsp+258h] [rbp+150h] BYREF

  *(_DWORD *)&v89[4] = 0;
  v91[0] = this;
  v5 = 0;
  v91[1] = a2;
  v92 = 0;
  v93 = 0;
  v6 = *(struct tagPOINT *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3) + 19904) + 4960LL);
  v7 = *((_QWORD *)a2 + 1);
  v96 = v6;
  if ( (*(_DWORD *)(v7 + 120) & 0x200) != 0 )
    v6 = *(struct tagPOINT *)(v7 + 52);
  v90 = v6;
  v94 = (LOWORD(v6.y) << 16) | LOWORD(v6.x);
  memset(v108, 0, sizeof(v108));
  v109 = 0;
  CMouseProcessor::InformUMObservers(this, a2, &v90, &v90);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this, v8, v9) )
  {
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        6,
        44,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    v17 = 4LL;
    goto LABEL_71;
  }
  v18 = *((_QWORD *)a2 + 1);
  v103 = *((unsigned __int16 *)a2 + 16) << 16;
  v102 = v6;
  v104 = *(unsigned __int8 *)(v18 + 120) >> 7;
  v105 = *(_DWORD *)(v18 + 88);
  v106 = 0;
  PublicExtraInfo = CMouseProcessor::CMouseEvent::GetPublicExtraInfo(a2);
  v19 = 1;
  v21 = *(_OWORD *)(v20 + 144);
  v22 = *(_DWORD *)(v20 + 120) & 1;
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
  *(_OWORD *)v100 = v21;
  if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v102, WheelMessage, v100, v22 ^ 1u) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v27 = 0;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, v26);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 69136),
        4,
        6,
        45,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    v17 = 1LL;
    goto LABEL_71;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v25, v24, v26) + 18928) )
  {
    LODWORD(v33) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL);
    if ( (v33 & 8) == 0 )
    {
      v33 = *(_QWORD *)(W32GetUserSessionState(v33, v32, v34) + 19632);
      if ( (*(_DWORD *)(v33 + 8) & 2) == 0 )
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3696, 0, 0);
    }
  }
  v89[0] = 0;
  *(_DWORD *)&v89[4] = 0;
  if ( *((_DWORD *)a2 + 6)
    || (v33 = *(_QWORD *)(W32GetUserSessionState(v33, v32, v34) + 19632), (*(_DWORD *)(v33 + 8) & 2) != 0) )
  {
    v95 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v32, v34) + 19904) + 4952LL);
    v35 = CMouseProcessor::MouseHitTest(
            (__int64)this,
            (struct CInputDest *)v110,
            &v96,
            (__int64)&v95,
            (__int64)a2,
            0,
            (unsigned int *)&v89[4]);
    CInputDest::operator=(v108, v35, v36);
    CInputDest::~CInputDest((CInputDest *)v110);
    v93 = HIDWORD(v108[0]);
    v92 = 1;
    v89[0] = CMouseProcessor::ShouldDeliverWheelEventToInputDest(v37, a2, (const struct CInputDest *)v108);
    if ( v89[0] )
    {
      if ( !CInputDest::DoesBelongToForeground((__int64)v108, 0, v38) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v108);
      v39 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v39 + 120) & 8) != 0 )
      {
        if ( *(_DWORD *)(v39 + 116) == 1
          || (v40 = *(_DWORD *)(v39 + 152),
              *(_QWORD *)v100 = *(_QWORD *)(v39 + 144),
              *(_DWORD *)&v100[8] = v40,
              (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)v100, (CInputDest *)v108)) )
        {
          CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3696, (int)v108, 0);
        }
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v108);
      v44 = ThreadInfo;
      if ( !ThreadInfo )
        goto LABEL_39;
      if ( !(unsigned __int8)anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(ThreadInfo) )
        goto LABEL_39;
      InputDestFromForegroundFocus = (_OWORD *)QHelper::GetInputDestFromForegroundFocus(v99);
      v46 = InputDestFromForegroundFocus[1];
      v98[0] = *InputDestFromForegroundFocus;
      v47 = InputDestFromForegroundFocus[2];
      v98[1] = v46;
      v48 = InputDestFromForegroundFocus[3];
      v98[2] = v47;
      v49 = InputDestFromForegroundFocus[4];
      v98[3] = v48;
      v50 = InputDestFromForegroundFocus[5];
      v98[4] = v49;
      v51 = InputDestFromForegroundFocus[6];
      v98[5] = v50;
      v98[6] = v51;
      CInputDest::CInputDest((CInputDest *)v110, (const struct tagINPUTDEST *)v98);
      v5 = 1;
      v52 = 1;
      if ( CInputDest::operator==((__int64)v108, (__int64)v110) )
LABEL_39:
        v52 = 0;
      if ( (v5 & 1) != 0 )
        CInputDest::~CInputDest((CInputDest *)v110);
      if ( v52 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v19 = 0;
        }
        v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v54 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v42, v43);
          LOBYTE(v55) = v53;
          LOBYTE(v56) = v19;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v56,
            v55,
            *(_QWORD *)(v54 + 69136),
            4,
            6,
            46,
            (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
        }
        v17 = 3LL;
        goto LABEL_71;
      }
      MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
      if ( MouseWheelForegroundThread
        && *((_QWORD *)v44 + 57) != *(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread(MouseWheelForegroundThread)
                                              + 456)
        && !(unsigned int)APISetEditionGetMouseWheelRoutingMode()
        && CMouseProcessor::HittestWheelRoutingRequested(v58) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v61 = 0;
        }
        v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v63 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v59, v60);
          LOBYTE(v64) = v62;
          LOBYTE(v65) = v61;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v65,
            v64,
            *(_QWORD *)(v63 + 69136),
            4,
            6,
            47,
            (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
        }
        InputTraceLogging::Mouse::RerouteWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL));
        v89[0] = 0;
      }
    }
  }
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v108);
  v67 = *((_DWORD *)a2 + 6);
  v68 = *((_WORD *)a2 + 16);
  v69 = WindowHandle;
  v70 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
  InputTraceLogging::Mouse::ProcessWheel(
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL),
    (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
    v70,
    v68,
    v67,
    v69,
    v89[0]);
  v74 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  if ( v89[0] )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v108, 1, 1) )
    {
      *(_QWORD *)&v100[12] = 0LL;
      v101 = 0;
      v75 = (unsigned __int64)*((unsigned __int16 *)a2 + 16) << 16;
      *(_QWORD *)v100 = v94;
      *(_DWORD *)&v100[8] = v74;
      v76 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
      if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                           (__int64)this,
                           (__int64)v108,
                           a2,
                           (struct CMouseProcessor::InputDeliveryContext *)v100,
                           (__int64 *)&v90,
                           *(int *)&v89[4],
                           v76,
                           v75) == 1 )
        CMouseProcessor::DeliverMouseWheelToInputDest(
          this,
          a2,
          (const struct CInputDest *)v108,
          (const struct CMouseProcessor::InputDeliveryContext *)v100);
    }
  }
  else
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v72, v71, v73) + 18928)
      || anonymous_namespace_::InMouseRawInputMode(0LL, 1, 1) )
    {
      v17 = *(_QWORD *)(W32GetUserSessionState(v78, v77, v79) + 18928) != 0LL ? 12 : 19;
LABEL_71:
      InputTraceLogging::Mouse::DropWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v17);
      goto LABEL_72;
    }
    v80 = *((_QWORD *)a2 + 1);
    *(_QWORD *)v100 = *(_QWORD *)(v80 + 144);
    *(_DWORD *)&v100[8] = *(_DWORD *)(v80 + 152);
    v97[0] = v80;
    v81 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v97[2] = 0LL;
    v82 = (unsigned __int64)v100 & -(__int64)(v81 != 0);
    v83 = *((unsigned __int16 *)a2 + 16);
    v97[1] = v82;
    v84 = *(unsigned int *)(v80 + 40);
    v85 = *(_QWORD *)(v80 + 96);
    v86 = *(_DWORD *)(v80 + 88);
    v87 = v83 << 16;
    v88 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
    ApiSetEditionPostMouseWheelToForeground(v88, v87, v94, v86, v85, v84, v74 | 0x20, v80 + 112, (__int64)v97);
  }
LABEL_72:
  CInputDest::~CInputDest((CInputDest *)v108);
  CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)v91);
}
