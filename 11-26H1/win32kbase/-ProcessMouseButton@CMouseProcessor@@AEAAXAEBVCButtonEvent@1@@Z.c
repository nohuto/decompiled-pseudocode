/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1400884A0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     IsSpatialDelegationEnabledForThread @ 0x14006CF30 (IsSpatialDelegationEnabledForThread.c)
 *     HasHidTable @ 0x14006CFAC (HasHidTable.c)
 *     IsTouchpadDevice @ 0x14006E7CC (IsTouchpadDevice.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x14008984C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1400898B0 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x140089C64 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     IsPointerPromotedMouseMessage @ 0x140089CB8 (IsPointerPromotedMouseMessage.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x140089CEC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x140089F40 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x14008A044 (-GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     IsPTPIVEnabled @ 0x14008A078 (IsPTPIVEnabled.c)
 *     ?ProcessButton@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IPEAUHWND__@@@Z @ 0x14008A0BC (-ProcessButton@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IPEAUHWND__@@@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x14008A158 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x14008A278 (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x14008A2E4 (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ.c)
 *     UpdateAsyncKeyState @ 0x14008A330 (UpdateAsyncKeyState.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14009B3E4 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400A2568 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CF738 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14010AB30 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14010AFBC (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x14010B160 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x14012D9A4 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z @ 0x1401389BC (-UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14016C0A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x140190D44 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1401A4FDC (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401B4908 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1401C5578 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x140223A5C (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 *     ApiSetEditionIsAppForeground @ 0x1402277AC (ApiSetEditionIsAppForeground.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  char v4; // di
  char v5; // bl
  bool v6; // r15
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  unsigned int ButtonMessage; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  struct tagPOINT v17; // rbx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  HWND v23; // r9
  int MessageWParamInfo; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int128 v27; // xmm6
  BOOL v28; // r15d
  unsigned int v29; // r12d
  __int64 v30; // rcx
  int (*v31)(void); // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rdx
  int v38; // r8d
  __int64 v39; // r15
  struct tagPOINT *v40; // r9
  char v41; // r13
  int v42; // r15d
  int v43; // edx
  int v44; // r8d
  __int64 v45; // r12
  unsigned __int8 VKey; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // edx
  CMouseProcessor *v50; // rcx
  __int64 v51; // r9
  struct tagPOINT *v52; // rax
  struct tagPOINT v53; // rcx
  unsigned __int8 v54; // r15
  bool updated; // al
  int v56; // r8d
  int v57; // eax
  __int64 v58; // rbx
  struct tagTHREADINFO *v59; // rax
  __int64 v60; // rax
  InputDelegation *v61; // rbx
  int v62; // r8d
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  bool v65; // zf
  bool v66; // bl
  __int64 v67; // rdx
  __int64 v68; // rax
  InputDelegation *v69; // r15
  __int128 *RawMouseInputDestination; // rax
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  void *HasMouseOwner; // rax
  __int64 v78; // rdx
  HWND v79; // rdx
  unsigned int (__fastcall *v80)(_OWORD *, struct tagPOINT *, _QWORD, struct tagPOINT *, BOOL); // rax
  int v81; // r8d
  bool v82; // bl
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  __int64 v86; // rdx
  int v87; // eax
  int v88; // eax
  struct tagPOINT *v89; // rax
  struct tagPOINT v90; // xmm0_8
  LONG x; // eax
  __int64 v92; // rdx
  bool v93; // bl
  __int64 v94; // rax
  int v95; // r8d
  int v96; // edx
  int IsAppForeground; // eax
  bool v98; // bl
  __int64 v99; // rax
  int v100; // r8d
  int v101; // edx
  int v102; // eax
  __int64 v103; // rax
  char v104; // r9
  bool v105; // bl
  __int64 v106; // rax
  int v107; // r8d
  int v108; // edx
  bool v109; // bl
  __int64 v110; // rax
  int v111; // r8d
  int v112; // edx
  __int64 v113; // rax
  int v114; // r8d
  int v115; // edx
  __int64 v116; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  char v118; // r9
  __int64 v119; // rdx
  int v120; // edx
  int v121; // r8d
  bool v122; // bl
  __int64 v123; // rax
  int v124; // r8d
  int v125; // edx
  bool v126; // bl
  __int64 v127; // rax
  int v128; // r8d
  int v129; // edx
  bool v130; // bl
  __int64 v131; // rax
  int v132; // r8d
  int v133; // edx
  bool v134; // bl
  __int64 v135; // rax
  int v136; // edx
  int v137; // r8d
  __int64 PtiFromInputDest; // rax
  bool v139; // bl
  __int64 v140; // rax
  int v141; // r8d
  int v142; // edx
  __int16 v143; // [rsp+38h] [rbp-D0h]
  struct tagPOINT v144; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v145[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v146; // [rsp+60h] [rbp-A8h]
  int v147; // [rsp+64h] [rbp-A4h]
  unsigned int v148[2]; // [rsp+68h] [rbp-A0h]
  struct tagPOINT v149; // [rsp+70h] [rbp-98h] BYREF
  struct tagPOINT v150[2]; // [rsp+78h] [rbp-90h] BYREF
  int v151; // [rsp+88h] [rbp-80h]
  int v152; // [rsp+8Ch] [rbp-7Ch]
  int v153; // [rsp+90h] [rbp-78h]
  int v154; // [rsp+94h] [rbp-74h]
  __int64 v155; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v156[3]; // [rsp+A0h] [rbp-68h] BYREF
  char v157[112]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v158[8]; // [rsp+128h] [rbp+20h] BYREF
  struct tagPOINT v159; // [rsp+1A8h] [rbp+A0h] BYREF
  int v160; // [rsp+1B0h] [rbp+A8h]
  int v161; // [rsp+1B4h] [rbp+ACh]
  int v162; // [rsp+1B8h] [rbp+B0h]
  int v163; // [rsp+1BCh] [rbp+B4h]
  unsigned __int64 PublicExtraInfo; // [rsp+1C0h] [rbp+B8h]
  __int128 v165; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v166; // [rsp+1D8h] [rbp+D0h]
  __int128 v167; // [rsp+1E8h] [rbp+E0h]
  __int128 v168; // [rsp+1F8h] [rbp+F0h]
  __int128 v169; // [rsp+208h] [rbp+100h]
  __int128 v170; // [rsp+218h] [rbp+110h]
  __int128 v171; // [rsp+228h] [rbp+120h]
  _DWORD v172[20]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v173[12]; // [rsp+288h] [rbp+180h] BYREF
  int v174; // [rsp+294h] [rbp+18Ch]

  v4 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 32, (unsigned int)&WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      6,
      27,
      (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
  }
  v145[0] = this;
  v145[1] = a2;
  LOBYTE(v146) = 0;
  v147 = 0;
  if ( !*((_QWORD *)a2 + 5) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v66 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v94 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 32, (unsigned int)&WPP_GLOBAL_Control);
      LOBYTE(v95) = v66;
      LOBYTE(v96) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v96,
        v95,
        *(_QWORD *)(v94 + 69136),
        3,
        6,
        28,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    v67 = 14LL;
    goto LABEL_58;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
  v148[1] = ButtonMessage;
  if ( (unsigned __int8)IsPTPIVEnabled()
    && (unsigned __int8)isChildPartition(v12, v11, v13)
    && IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL), v11) )
  {
    v87 = *((_DWORD *)a2 + 8);
    if ( v87 == 1 )
    {
      v88 = CMouseProcessor::InertiaEndSuppression::HandleMake(
              (char *)this + 3768,
              *(_QWORD *)(*((_QWORD *)a2 + 1) + 104LL));
    }
    else
    {
      if ( v87 != 2 )
        goto LABEL_9;
      if ( *((_BYTE *)this + 3768) )
      {
        *((_BYTE *)this + 3768) = 0;
        v88 = 0;
      }
      else
      {
        v88 = 1;
      }
    }
    if ( !v88 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v98 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v99 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v13);
        LOBYTE(v100) = v98;
        LOBYTE(v101) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v101,
          v100,
          *(_QWORD *)(v99 + 69136),
          4,
          6,
          29,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
      }
      goto LABEL_52;
    }
  }
LABEL_9:
  LODWORD(v15) = *(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 66796) & 0x80008000;
  if ( (_DWORD)v15 == -2147450880 )
  {
    if ( ButtonMessage == 513 )
    {
      if ( *((_BYTE *)this + 3772) )
      {
        LOBYTE(v102) = 0;
      }
      else
      {
        LODWORD(v15) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 88LL);
        LOBYTE(v102) = 1;
        *((_DWORD *)this + 944) = v15;
      }
      *((_BYTE *)this + 3772) = v102;
      v102 = (unsigned __int8)v102;
    }
    else
    {
      if ( ButtonMessage != 514 )
        goto LABEL_10;
      v103 = W32GetUserSessionState(-2147450880, v14, v16);
      v104 = *((_BYTE *)this + 3772);
      if ( v104 )
      {
        v15 = *((_QWORD *)a2 + 1);
        v16 = *(_DWORD *)(v15 + 88) - *((_DWORD *)this + 944);
        if ( v16 <= *(_DWORD *)(v103 + 66888) )
        {
          *((_BYTE *)this + 3772) = 0;
          v104 = 0;
        }
      }
      v102 = v104 == 0;
    }
    if ( !v102 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v105 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v106 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v16);
        LOBYTE(v107) = v105;
        LOBYTE(v108) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v108,
          v107,
          *(_QWORD *)(v106 + 69136),
          4,
          6,
          30,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
      }
      v67 = 15LL;
      goto LABEL_58;
    }
  }
LABEL_10:
  v17 = *(struct tagPOINT *)(*(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 19904) + 4960LL);
  v149 = v17;
  v144 = v17;
  v155 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v19, v18, v20) + 19904) + 4952LL);
  CMouseProcessor::InformUMObservers(this, a2, &v149, &v149);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v109 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v110 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
      LOBYTE(v111) = v109;
      LOBYTE(v112) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v112,
        v111,
        *(_QWORD *)(v110 + 69136),
        4,
        6,
        31,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    v67 = 4LL;
LABEL_58:
    InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v67);
    goto LABEL_52;
  }
  CMouseProcessor::MouseHitTest(this, v158, &v144, &v155, a2, 0, 0LL);
  v23 = 0LL;
  v147 = DWORD1(v158[0]);
  LOBYTE(v146) = 1;
  if ( (v158[0] & 4) != 0 )
  {
    if ( HIDWORD(v158[5]) == 1 || HIDWORD(v158[5]) == 2 )
    {
      if ( *(_QWORD *)&v158[5] )
        v23 = **(HWND **)&v158[5];
      else
        v23 = 0LL;
    }
  }
  else if ( (v158[0] & 2) != 0 )
  {
    v23 = (HWND)*((_QWORD *)&v158[1] + 1);
  }
  InputTraceLogging::Mouse::ProcessButton(
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL),
    (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
    ButtonMessage,
    v23);
  v159 = v17;
  MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
  v25 = *((_QWORD *)a2 + 1);
  v160 = MessageWParamInfo;
  v161 = *(unsigned __int8 *)(v25 + 120) >> 7;
  v162 = *(_DWORD *)(v25 + 88);
  v163 = 0;
  PublicExtraInfo = CMouseProcessor::CMouseEvent::GetPublicExtraInfo(a2);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)&v165, (struct CInputDest *)v158);
  v26 = *((_QWORD *)a2 + 1);
  v27 = *(_OWORD *)(v26 + 144);
  v28 = (*(_DWORD *)(v26 + 120) & 1) == 0;
  v29 = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
  v31 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v30) + 48) + 4336LL);
  if ( v31 )
  {
    if ( v31() >= 0 )
    {
      v80 = *(unsigned int (__fastcall **)(_OWORD *, struct tagPOINT *, _QWORD, struct tagPOINT *, BOOL))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v33) + 48) + 4344LL);
      if ( v80 )
      {
        *(_OWORD *)&v150[0].x = v27;
        if ( v80(v158, &v159, v29, v150, v28) )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v4 = 0;
          }
          v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v83 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v32, v81);
            LOBYTE(v84) = v82;
            LOBYTE(v85) = v4;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v85,
              v84,
              *(_QWORD *)(v83 + 69136),
              4,
              6,
              32,
              (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
          }
          InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 0LL);
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)&v165, v86);
          goto LABEL_168;
        }
      }
    }
  }
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)&v165, v32);
  CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3696, 0LL, 3LL);
  v39 = *(_QWORD *)(W32GetUserSessionState(v35, v34, v36) + 18928);
  if ( v39 )
  {
    v68 = *(_QWORD *)(v39 + 112);
    v69 = v68 ? *(InputDelegation **)(v68 + 16) : *(InputDelegation **)(v39 + 96);
    if ( v69
      && !IsSpatialDelegationEnabledForThread(v69, v37, v38)
      && (unsigned int)HasHidTable((__int64)v69)
      && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v69 + 57) + 824LL) + 100LL) & 0x100) != 0 )
    {
      RawMouseInputDestination = (__int128 *)anonymous_namespace_::GetRawMouseInputDestination(v157);
      v71 = RawMouseInputDestination[1];
      v165 = *RawMouseInputDestination;
      v72 = RawMouseInputDestination[2];
      v166 = v71;
      v73 = RawMouseInputDestination[3];
      v167 = v72;
      v74 = RawMouseInputDestination[4];
      v168 = v73;
      v75 = RawMouseInputDestination[5];
      v169 = v74;
      v76 = RawMouseInputDestination[6];
      v170 = v75;
      v171 = v76;
      CInputDest::CInputDest((CInputDest *)v172, (const struct tagINPUTDEST *)&v165);
      if ( v172[0] )
      {
        CMouseProcessor::CButtonEvent::GetVKey(a2);
        ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v172);
        LOBYTE(v119) = v118;
        UpdateAsyncKeyState(*((_QWORD *)ThreadInfo + 58), v119);
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v4 = 0;
        }
        v122 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v123 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v120, v121);
          LOBYTE(v124) = v122;
          LOBYTE(v125) = v4;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v125,
            v124,
            *(_QWORD *)(v123 + 69136),
            4,
            6,
            33,
            (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 18LL);
        CInputDest::~CInputDest((CInputDest *)v172);
        goto LABEL_168;
      }
      if ( v174 )
        HMAssignmentUnlock(v173, v37);
    }
  }
  if ( !LODWORD(v158[0]) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v126 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v113 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v37, v38);
      LOBYTE(v114) = v126;
      LOBYTE(v115) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v115,
        v114,
        *(_QWORD *)(v113 + 69136),
        3,
        6,
        34,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    v116 = 13LL;
    goto LABEL_167;
  }
  if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, *((_QWORD *)a2 + 1) + 112LL) )
  {
    x = v40[19].x;
    v150[0] = v40[18];
    v41 = 1;
    v150[1].x = x;
    if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)v150, (CInputDest *)v158) )
    {
      v92 = 10LL;
LABEL_109:
      InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v92);
      v65 = HIDWORD(v158[5]) == 0;
      goto LABEL_49;
    }
  }
  else
  {
    v41 = 0;
  }
  v42 = LOWORD(v144.x) | (LOWORD(v144.y) << 16);
  ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v158, *((_DWORD *)a2 + 8) == 2);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1) )
  {
    if ( *((_DWORD *)a2 + 8) != 1 )
    {
      *((_DWORD *)this + 945) &= ~(unsigned int)CMouseProcessor::CButtonEvent::GetHardwareButton(a2);
      goto LABEL_24;
    }
    if ( CMouseProcessor::HandleCapture_MakeNoMouseOwner(this, (const struct CInputDest *)v158, a2, v42, v17, v148[1]) )
    {
LABEL_24:
      v45 = v42;
      VKey = CMouseProcessor::CButtonEvent::GetVKey(a2);
      if ( HIDWORD(v158[5]) && *(_QWORD *)&v158[5] )
        v48 = *(_QWORD *)(*(_QWORD *)&v158[5] + 16LL);
      else
        v48 = 0LL;
      LOBYTE(v47) = VKey;
      UpdateAsyncKeyState(*(_QWORD *)(v48 + 464), v47);
      if ( *((_DWORD *)a2 + 8) == 1 )
      {
        v150[0] = *(struct tagPOINT *)&v158[6];
        v52 = (struct tagPOINT *)*((_QWORD *)a2 + 1);
        v154 = 0;
        v151 = 4;
        v53 = v52[1];
        v152 = (__int16)v42;
        v150[1] = v53;
        v153 = SHIWORD(v42);
        SendMessageTo(5LL, v150, 32LL);
      }
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x100) != 0 || (BYTE8(v158[6]) & 1) != 0 )
      {
        v56 = 0;
      }
      else if ( (BYTE8(v158[6]) & 2) == 0
             || (IsAppForeground = ApiSetEditionIsAppForeground(*(_QWORD *)&v158[5]), v56 = 0, !IsAppForeground) )
      {
        v54 = 0;
        updated = CMouseProcessor::UpdateForegroundForInput(v50, (struct CInputDest *)v158, a2, v51);
        v56 = 0;
        if ( !updated )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v4 = 0;
          }
          v130 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v131 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v49, 0);
            LOBYTE(v132) = v130;
            LOBYTE(v133) = v4;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v133,
              v132,
              *(_QWORD *)(v131 + 69136),
              3,
              6,
              36,
              (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
          }
          v116 = 10LL;
          goto LABEL_167;
        }
LABEL_33:
        v57 = v158[0];
        if ( LODWORD(v158[0]) )
        {
          if ( !v41 )
            goto LABEL_35;
          PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v158, 2LL, 0LL);
          v56 = 0;
          if ( !PtiFromInputDest
            || (_InterlockedCompareExchange((volatile signed __int32 *)(PtiFromInputDest + 520), 0, 0) & 1) == 0 )
          {
            v57 = v158[0];
LABEL_35:
            if ( !v57 )
              goto LABEL_46;
            v58 = 0LL;
            if ( HIDWORD(v158[5]) == 2 )
            {
              v59 = CInputDest::GetThreadInfo((CInputDest *)v158);
              if ( v59 )
                v58 = *((_QWORD *)v59 + 58);
            }
            if ( !v58
              || ((v60 = *(_QWORD *)(v58 + 112)) != 0
                ? (v61 = *(InputDelegation **)(v60 + 16))
                : (v61 = *(InputDelegation **)(v58 + 96)),
                  !v61
               || IsSpatialDelegationEnabledForThread(v61, v49, v56)
               || !(unsigned int)HasHidTable((__int64)v61)
               || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 57) + 824LL) + 100LL) & 2) == 0) )
            {
LABEL_46:
              v156[0] = v54;
              v156[1] = v45;
              v156[2] = 0LL;
              v63 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
              if ( (unsigned int)CMouseProcessor::ForwardInputToISM(this, v158, a2, v156, &v149, 0, v148[1], v63) == 1 )
                CMouseProcessor::DeliverMouseButtonToInputDest(
                  this,
                  a2,
                  (const struct CInputDest *)v158,
                  (const struct CMouseProcessor::InputDeliveryContext *)v156);
              v65 = HIDWORD(v158[5]) == 0;
              goto LABEL_49;
            }
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
            {
              v4 = 0;
            }
            v139 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v140 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v62);
              LOBYTE(v141) = v139;
              LOBYTE(v142) = v4;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v142,
                v141,
                *(_QWORD *)(v140 + 69136),
                3,
                6,
                39,
                (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
            }
            v116 = 12LL;
LABEL_167:
            InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v116);
LABEL_168:
            CInputDest::~CInputDest((CInputDest *)v158);
            goto LABEL_52;
          }
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v4 = 0;
          }
          v134 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_208:
            v116 = 17LL;
            goto LABEL_167;
          }
          v135 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v49, 0);
          v143 = 38;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v4 = 0;
          }
          v134 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_208;
          v135 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v49, 0);
          v143 = 37;
        }
        LOBYTE(v137) = v134;
        LOBYTE(v136) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v136,
          v137,
          *(_QWORD *)(v135 + 69136),
          3,
          6,
          v143,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
        goto LABEL_208;
      }
      v54 = 1;
      goto LABEL_33;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v93 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v127 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v43, v44);
      LOBYTE(v128) = v93;
      LOBYTE(v129) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v129,
        v128,
        *(_QWORD *)(v127 + 69136),
        3,
        6,
        35,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    v92 = 16LL;
    goto LABEL_109;
  }
  if ( !v41
    || (v89 = (struct tagPOINT *)*((_QWORD *)a2 + 1),
        v90 = v89[18],
        LODWORD(v89) = v89[19].x,
        v150[0] = v90,
        v150[1].x = (int)v89,
        (unsigned __int8)anonymous_namespace_::ValidateUIPI(
                           (UIPrivilegeIsolation *)v150,
                           (CMouseProcessor *)((char *)this + 3784))) )
  {
    v165 = v158[0];
    v167 = v158[2];
    v166 = v158[1];
    v169 = v158[4];
    v168 = v158[3];
    v171 = v158[6];
    v170 = v158[5];
    if ( *((_DWORD *)a2 + 8) == 1 )
    {
      *((_DWORD *)this + 945) |= CMouseProcessor::CButtonEvent::GetHardwareButton(a2);
      CInputDest::operator=((__int64)v158, (__int64)this + 3784);
    }
    else
    {
      HasMouseOwner = (void *)CMouseProcessor::HandleCapture_BreakHasMouseOwner(this, v172, v158, a2);
      CInputDest::operator=(v158, HasMouseOwner);
      if ( v174 )
        HMAssignmentUnlock(v173, v78);
    }
    v79 = 0LL;
    if ( (v158[0] & 4) != 0 )
    {
      if ( HIDWORD(v158[5]) == 1 || HIDWORD(v158[5]) == 2 )
      {
        if ( *(_QWORD *)&v158[5] )
          v79 = **(HWND **)&v158[5];
        else
          v79 = 0LL;
      }
    }
    else if ( (v158[0] & 2) != 0 )
    {
      v79 = (HWND)*((_QWORD *)&v158[1] + 1);
    }
    InputTraceLogging::Mouse::UpdateTargetForCapture(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), v79);
    if ( !LODWORD(v158[0]) )
    {
      v148[0] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4092LL);
    }
    ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
      (unsigned int)v158,
      (unsigned int)&v165,
      v17.x,
      v144.x,
      (__int64)&v144);
    v42 = LOWORD(v144.x) | (LOWORD(v144.y) << 16);
    goto LABEL_24;
  }
  InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 10LL);
  v65 = HIDWORD(v158[5]) == 0;
LABEL_49:
  if ( !v65 )
    HMAssignmentUnlock(&v158[5], v64);
  memset(v158, 0, 0x78uLL);
LABEL_52:
  CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)v145);
}
