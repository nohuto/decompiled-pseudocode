/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14018F280 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x140037658 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x140037B68 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14003864C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x140038784 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     IsPTPIVEnabled @ 0x14005E094 (IsPTPIVEnabled.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     IsTouchpadDevice @ 0x14006721C (IsTouchpadDevice.c)
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1400B9350 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1400B9430 (-GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1400B97C4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400B98F0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1400C47D8 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1400E66F8 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E67D0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     IsPointerPromotedMouseMessage @ 0x1400EDF20 (IsPointerPromotedMouseMessage.c)
 *     ?UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z @ 0x1400F1DE0 (-UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z.c)
 *     ?ProcessButton@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IPEAUHWND__@@@Z @ 0x14012C764 (-ProcessButton@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IPEAUHWND__@@@Z.c)
 *     UpdateAsyncKeyState @ 0x14018CE40 (UpdateAsyncKeyState.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018F9E8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401928F0 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x140195138 (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x140195480 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x140195E78 (ApiSetEditionLLMouseButtonHook.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1401A1858 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F6D74 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x14022079C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x140220800 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x140220928 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x14022096C (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1402209F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x140220B58 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x140220F9C (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1402225F8 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  char v4; // r13
  char v5; // di
  char v6; // bl
  bool v7; // r15
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  bool v11; // bl
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rdx
  unsigned int ButtonMessage; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // al
  bool v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // bl
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  unsigned int v31; // r8d
  struct tagPOINT v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  bool v37; // bl
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  HWND WindowHandle; // rax
  int MessageWParamInfo; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // ebx
  __int128 v46; // xmm6
  unsigned int v47; // eax
  __int64 v48; // rdx
  bool v49; // bl
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  __int64 v53; // rdx
  _OWORD *RawMouseInputDestination; // rax
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  int v61; // ebx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  bool v65; // bl
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  bool v69; // bl
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  __int64 v73; // rdx
  __int64 v74; // r9
  int v75; // eax
  __int64 v76; // r15
  __int64 v77; // rdx
  bool v78; // bl
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  __int64 v82; // rax
  __int64 v83; // xmm0_8
  _QWORD *HasMouseOwner; // rax
  HWND v85; // rax
  int v86; // r8d
  int v87; // r9d
  int v88; // ebx
  struct tagTHREADINFO *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rax
  CMouseProcessor *v92; // rcx
  __int64 v93; // r9
  unsigned __int8 v94; // bl
  bool v95; // bl
  __int64 v96; // rax
  int v97; // r8d
  int v98; // edx
  bool v99; // bl
  __int64 v100; // rax
  int v101; // edx
  int v102; // r8d
  __int64 PtiFromInputDest; // rax
  __int64 v104; // rdx
  __int64 v105; // rdx
  bool v106; // bl
  __int64 v107; // rax
  int v108; // r8d
  int v109; // edx
  __int64 v110; // rax
  __int16 v111; // [rsp+38h] [rbp-D0h]
  struct tagPOINT v112; // [rsp+48h] [rbp-C0h] BYREF
  CMouseProcessor *v113[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v114; // [rsp+60h] [rbp-A8h]
  int v115; // [rsp+64h] [rbp-A4h]
  __int64 v116; // [rsp+68h] [rbp-A0h]
  struct tagPOINT v117; // [rsp+70h] [rbp-98h] BYREF
  __int64 v118; // [rsp+78h] [rbp-90h] BYREF
  __int64 v119; // [rsp+88h] [rbp-80h] BYREF
  int v120; // [rsp+90h] [rbp-78h]
  __int64 v121; // [rsp+98h] [rbp-70h] BYREF
  int v122; // [rsp+A0h] [rbp-68h]
  _QWORD v123[3]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v124[2]; // [rsp+C0h] [rbp-48h] BYREF
  int v125; // [rsp+D0h] [rbp-38h]
  int v126; // [rsp+D4h] [rbp-34h]
  int v127; // [rsp+D8h] [rbp-30h]
  int v128; // [rsp+DCh] [rbp-2Ch]
  __int128 v129; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v130[7]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v131[56]; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v132[7]; // [rsp+1A0h] [rbp+98h] BYREF
  _OWORD v133[6]; // [rsp+218h] [rbp+110h] BYREF
  __int128 v134; // [rsp+278h] [rbp+170h]
  struct tagPOINT v135; // [rsp+298h] [rbp+190h] BYREF
  int v136; // [rsp+2A0h] [rbp+198h]
  int v137; // [rsp+2A4h] [rbp+19Ch]
  int v138; // [rsp+2A8h] [rbp+1A0h]
  int v139; // [rsp+2ACh] [rbp+1A4h]
  __int64 PublicExtraInfo; // [rsp+2B0h] [rbp+1A8h]
  _OWORD v141[7]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _DWORD v142[32]; // [rsp+328h] [rbp+220h] BYREF
  _BYTE v143[128]; // [rsp+3A8h] [rbp+2A0h] BYREF

  v4 = 0;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 32LL);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      6,
      27,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
  }
  v113[0] = this;
  v113[1] = a2;
  LOBYTE(v114) = 0;
  v115 = 0;
  if ( !*((_QWORD *)a2 + 5) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control, 32LL);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 69144),
        3,
        6,
        28,
        (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    }
    v15 = 14LL;
LABEL_17:
    InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v15);
    goto LABEL_159;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
  if ( !IsPTPIVEnabled()
    || !isChildPartition(v18, v17)
    || !IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL), v17) )
  {
    goto LABEL_23;
  }
  v19 = *((_DWORD *)a2 + 8);
  if ( v19 != 1 )
  {
    if ( v19 == 2 && *((_BYTE *)this + 3760) )
    {
      *((_BYTE *)this + 3760) = 0;
      goto LABEL_30;
    }
LABEL_23:
    v21 = *(_DWORD *)(W32GetUserSessionState(v18, v17) + 66804) & 0x80008000;
    if ( (_DWORD)v21 == -2147450880 )
    {
      if ( ButtonMessage == 513 )
      {
        if ( *((_BYTE *)this + 3764) )
        {
          v22 = 0;
        }
        else
        {
          v21 = *(unsigned int *)(*((_QWORD *)a2 + 1) + 88LL);
          v22 = 1;
          *((_DWORD *)this + 942) = v21;
        }
        *((_BYTE *)this + 3764) = v22;
        if ( !v22 )
          goto LABEL_39;
      }
      else if ( ButtonMessage == 514 )
      {
        v31 = *(_DWORD *)(W32GetUserSessionState(v21, v20) + 66896);
        if ( *((_BYTE *)this + 3764) )
        {
          v20 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 1) + 88LL) - *((_DWORD *)this + 942));
          if ( (unsigned int)v20 > v31 )
          {
LABEL_39:
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v5 = 0;
            }
            v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
              LOBYTE(v29) = v27;
              LOBYTE(v30) = v5;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v30,
                v29,
                *(_QWORD *)(v28 + 69144),
                4,
                6,
                30,
                (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
            }
            v15 = 15LL;
            goto LABEL_17;
          }
          *((_BYTE *)this + 3764) = 0;
        }
      }
    }
    v32 = *(struct tagPOINT *)(*(_QWORD *)(W32GetUserSessionState(v21, v20) + 19872) + 4960LL);
    v117 = v32;
    v112 = v32;
    v118 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v34, v33) + 19872) + 4952LL);
    CMouseProcessor::InformUMObservers(this, a2, &v117, &v117);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this, v35) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v5 = 0;
      }
      v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v38 = W32GetUserSessionState(WPP_GLOBAL_Control, v36);
        LOBYTE(v39) = v37;
        LOBYTE(v40) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v40,
          v39,
          *(_QWORD *)(v38 + 69144),
          4,
          6,
          31,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
      v15 = 4LL;
      goto LABEL_17;
    }
    CMouseProcessor::MouseHitTest((__int64)this, (struct CInputDest *)v133, &v112, (__int64)&v118, a2, 0, 0LL);
    v115 = DWORD1(v133[0]);
    LOBYTE(v114) = 1;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v133);
    InputTraceLogging::Mouse::ProcessButton(
      *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL),
      (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
      ButtonMessage,
      (__int64)WindowHandle);
    v135 = v32;
    MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
    v43 = *((_QWORD *)a2 + 1);
    v136 = MessageWParamInfo;
    v137 = *(unsigned __int8 *)(v43 + 120) >> 7;
    v138 = *(_DWORD *)(v43 + 88);
    v139 = 0;
    PublicExtraInfo = CMouseProcessor::CMouseEvent::GetPublicExtraInfo(a2);
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v131, (struct CInputDest *)v133);
    v44 = *((_QWORD *)a2 + 1);
    v45 = *(_DWORD *)(v44 + 120);
    v46 = *(_OWORD *)(v44 + 144);
    v47 = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    v129 = v46;
    if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                         (unsigned int)v133,
                         (unsigned int)&v135,
                         v47,
                         (unsigned int)&v129,
                         (v45 & 1) == 0) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v5 = 0;
      }
      v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v50 = W32GetUserSessionState(WPP_GLOBAL_Control, v48);
        LOBYTE(v51) = v49;
        LOBYTE(v52) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v52,
          v51,
          *(_QWORD *)(v50 + 69144),
          4,
          6,
          32,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
      InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 0LL);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v131);
      goto LABEL_158;
    }
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v131);
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3688, 0, 3);
    if ( anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0) )
    {
      RawMouseInputDestination = anonymous_namespace_::GetRawMouseInputDestination(v132);
      v55 = RawMouseInputDestination[1];
      v130[0] = *RawMouseInputDestination;
      v56 = RawMouseInputDestination[2];
      v130[1] = v55;
      v57 = RawMouseInputDestination[3];
      v130[2] = v56;
      v58 = RawMouseInputDestination[4];
      v130[3] = v57;
      v59 = RawMouseInputDestination[5];
      v130[4] = v58;
      v60 = RawMouseInputDestination[6];
      v130[5] = v59;
      v130[6] = v60;
      CInputDest::CInputDest((CInputDest *)v142, (const struct tagINPUTDEST *)v130);
      if ( v142[0] )
      {
        v61 = *((_DWORD *)a2 + 8);
        CMouseProcessor::CButtonEvent::GetVKey(a2);
        ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v142);
        UpdateAsyncKeyState(*((_QWORD *)ThreadInfo + 59), v63, v61 == 2);
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v5 = 0;
        }
        v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v66 = W32GetUserSessionState(WPP_GLOBAL_Control, v64);
          LOBYTE(v67) = v65;
          LOBYTE(v68) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v68,
            v67,
            *(_QWORD *)(v66 + 69144),
            4,
            6,
            33,
            (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 18LL);
        CInputDest::~CInputDest((CInputDest *)v142);
        goto LABEL_158;
      }
      CInputDest::~CInputDest((CInputDest *)v142);
    }
    if ( !LODWORD(v133[0]) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v70 = W32GetUserSessionState(WPP_GLOBAL_Control, v53);
        LOBYTE(v71) = v69;
        LOBYTE(v72) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v72,
          v71,
          *(_QWORD *)(v70 + 69144),
          3,
          6,
          34,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
      v73 = 13LL;
      goto LABEL_90;
    }
    if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, (_DWORD *)(*((_QWORD *)a2 + 1) + 112LL)) )
    {
      v75 = *(_DWORD *)(v74 + 152);
      v119 = *(_QWORD *)(v74 + 144);
      v4 = 1;
      v120 = v75;
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v119) )
        goto LABEL_93;
    }
    v76 = LOWORD(v112.x) | (LOWORD(v112.y) << 16);
    ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v133, *((_DWORD *)a2 + 8) == 2);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 974, 1, 1) )
    {
      if ( v4 )
      {
        v82 = *((_QWORD *)a2 + 1);
        v83 = *(_QWORD *)(v82 + 144);
        LODWORD(v82) = *(_DWORD *)(v82 + 152);
        v121 = v83;
        v122 = v82;
        if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v121) )
        {
LABEL_93:
          v73 = 10LL;
LABEL_90:
          InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v73);
LABEL_158:
          CInputDest::~CInputDest((CInputDest *)v133);
          goto LABEL_159;
        }
      }
      v141[0] = v133[0];
      v141[2] = v133[2];
      v141[1] = v133[1];
      v141[4] = v133[4];
      v141[3] = v133[3];
      v141[6] = v134;
      v141[5] = v133[5];
      if ( *((_DWORD *)a2 + 8) == 1 )
      {
        *((_DWORD *)this + 943) |= CMouseProcessor::CButtonEvent::GetHardwareButton(a2);
        CInputDest::operator=(v133, (char *)this + 3776);
      }
      else
      {
        HasMouseOwner = (_QWORD *)CMouseProcessor::HandleCapture_BreakHasMouseOwner(this, v143, v133, a2);
        CInputDest::operator=(v133, HasMouseOwner);
        CInputDest::~CInputDest((CInputDest *)v143);
      }
      v85 = CInputDest::GetWindowHandle((CInputDest *)v133);
      InputTraceLogging::Mouse::UpdateTargetForCapture(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v85, v86, v87);
      if ( !LODWORD(v133[0]) )
      {
        LODWORD(v116) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4082LL);
      }
      ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        (unsigned int)v133,
        (unsigned int)v141,
        v117.x,
        v112.x,
        (__int64)&v112);
      v76 = LOWORD(v112.x) | (LOWORD(v112.y) << 16);
    }
    else if ( *((_DWORD *)a2 + 8) == 1 )
    {
      if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
              this,
              (const struct CInputDest *)v133,
              a2,
              v76,
              v117,
              ButtonMessage) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v79 = W32GetUserSessionState(WPP_GLOBAL_Control, v77);
          LOBYTE(v80) = v78;
          LOBYTE(v81) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v81,
            v80,
            *(_QWORD *)(v79 + 69144),
            3,
            6,
            35,
            (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
        }
        v73 = 16LL;
        goto LABEL_90;
      }
    }
    else
    {
      *((_DWORD *)this + 943) &= ~(unsigned int)CMouseProcessor::CButtonEvent::GetHardwareButton(a2);
    }
    v88 = *((_DWORD *)a2 + 8);
    CMouseProcessor::CButtonEvent::GetVKey(a2);
    v89 = CInputDest::GetThreadInfo((CInputDest *)v133);
    UpdateAsyncKeyState(*((_QWORD *)v89 + 59), v90, v88 == 2);
    if ( *((_DWORD *)a2 + 8) == 1 )
    {
      v128 = 0;
      v124[0] = v134;
      v91 = *((_QWORD *)a2 + 1);
      v126 = (__int16)v76;
      v125 = 4;
      v124[1] = *(_QWORD *)(v91 + 8);
      v127 = SWORD1(v76);
      SendMessageTo(5LL, v124, 32LL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x100) != 0
      || CInputDest::ShouldSkipForegroundActivation((CInputDest *)v133) )
    {
      v94 = 1;
    }
    else
    {
      v94 = 0;
      if ( !CMouseProcessor::UpdateForegroundForInput(v92, (struct CInputDest *)v133, a2, v93) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v95 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v96 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v97) = v95;
          LOBYTE(v98) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v98,
            v97,
            *(_QWORD *)(v96 + 69144),
            3,
            6,
            36,
            (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
        }
        goto LABEL_93;
      }
    }
    if ( LODWORD(v133[0]) )
    {
      if ( !v4
        || (PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((CInputDest *)v133, 2LL)) == 0
        || (_InterlockedCompareExchange((volatile signed __int32 *)(PtiFromInputDest + 528), 0, 0) & 1) == 0 )
      {
        if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v133, 1LL, 1) )
        {
          v123[0] = v94;
          v123[1] = v76;
          v123[2] = 0LL;
          v110 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
          if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                               (__int64)this,
                               (__int64)v133,
                               a2,
                               (struct CMouseProcessor::InputDeliveryContext *)v123,
                               &v117,
                               0,
                               ButtonMessage,
                               v110) == 1 )
            CMouseProcessor::DeliverMouseButtonToInputDest(
              this,
              a2,
              (const struct CInputDest *)v133,
              (const struct CMouseProcessor::InputDeliveryContext *)v123);
          goto LABEL_158;
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v106 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v107 = W32GetUserSessionState(WPP_GLOBAL_Control, v105);
          LOBYTE(v108) = v106;
          LOBYTE(v109) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v109,
            v108,
            *(_QWORD *)(v107 + 69144),
            3,
            6,
            39,
            (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
        }
        v73 = 12LL;
        goto LABEL_90;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v99 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_136;
      v100 = W32GetUserSessionState(WPP_GLOBAL_Control, v104);
      v111 = 38;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v99 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_136;
      v100 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      v111 = 37;
    }
    LOBYTE(v102) = v99;
    LOBYTE(v101) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v101,
      v102,
      *(_QWORD *)(v100 + 69144),
      3,
      6,
      v111,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
LABEL_136:
    v73 = 17LL;
    goto LABEL_90;
  }
  if ( (unsigned int)CMouseProcessor::InertiaEndSuppression::HandleMake(
                       (char *)this + 3760,
                       *(_QWORD *)(*((_QWORD *)a2 + 1) + 104LL)) )
    goto LABEL_23;
LABEL_30:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 69144),
      4,
      6,
      29,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
  }
LABEL_159:
  CMouseProcessor::EndStreamToken::~EndStreamToken(v113);
}
