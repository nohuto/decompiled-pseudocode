/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x140117A50 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     IsSpatialDelegationEnabledForThread @ 0x14006CF30 (IsSpatialDelegationEnabledForThread.c)
 *     HasHidTable @ 0x14006CFAC (HasHidTable.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140084250 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1400847A0 (PhysicalToLogicalDPIPoint.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x14008984C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1400898B0 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x140089C64 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ @ 0x140089E24 (-IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ.c)
 *     ?GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x14008A044 (-GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     EditionPostRawMouseInputMessage @ 0x14008A200 (EditionPostRawMouseInputMessage.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x14008D09C (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14009B3E4 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?ProcessMove@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@PEAUHWND__@@@Z @ 0x14009B730 (-ProcessMove@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@PEAUHWND__@@@Z.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     IsMouseIVEnabled @ 0x14009C12C (IsMouseIVEnabled.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x14009C1C8 (ApiSeEditionDeferWinEventNotify.c)
 *     ApiSetEditionEndDeferWinEventNotify @ 0x14009C220 (ApiSetEditionEndDeferWinEventNotify.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14009C52C (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x14009C758 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1400A26FC (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1400CE34C (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     IsEditionPostRawMouseInputMessageSupported @ 0x14012056C (IsEditionPostRawMouseInputMessageSupported.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14016C0A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1401C12C0 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401C20BC (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z @ 0x1401C4A0C (-InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x140211DB8 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402237E0 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x140224AD4 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMoveEvent *a2,
        int a3)
{
  bool v5; // bl
  bool v6; // r14
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  bool v9; // r12
  __int64 *v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 *v13; // rbx
  int v14; // r14d
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  InputDelegation *v24; // rbx
  struct tagPOINT *v25; // rcx
  int v26; // edx
  int v27; // r8d
  unsigned __int8 v28; // r14
  int v29; // r15d
  HWND v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // ebx
  struct tagPOINT v34; // rax
  __int64 y; // r8
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // edx
  unsigned int v39; // ecx
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rcx
  int v43; // r8d
  __int64 v44; // rbx
  __int64 v45; // rcx
  unsigned int v46; // r8d
  bool v47; // bl
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rbx
  int v51; // ecx
  bool v52; // bl
  bool v53; // di
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 PublicExtraInfo; // rax
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  __int64 v62; // rax
  bool v63; // bl
  bool v64; // di
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  signed int v68; // ebx
  __int64 v69; // rax
  unsigned int v70; // ecx
  bool v71; // bl
  bool v72; // r14
  bool v73; // bl
  bool v74; // r14
  __int64 v75; // rax
  __int64 v76; // rax
  bool v77; // bl
  bool v78; // di
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  int v82; // edx
  __int64 v83; // r8
  bool v84; // bl
  bool v85; // di
  __int64 v86; // rax
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // xmm0_8
  int v91; // edx
  __int64 v92; // r8
  bool v93; // bl
  bool v94; // di
  __int64 v95; // rax
  unsigned int v96; // r12d
  unsigned int v97; // r15d
  __int64 v98; // r13
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rax
  const struct tagBASEWNDCONTAINERINFO *v100; // r14
  char v101; // al
  bool v102; // [rsp+40h] [rbp-C0h]
  unsigned int v103[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v104; // [rsp+58h] [rbp-A8h]
  struct tagPOINT v105; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v106[2]; // [rsp+68h] [rbp-98h] BYREF
  char v107; // [rsp+78h] [rbp-88h]
  int v108; // [rsp+7Ch] [rbp-84h]
  struct tagPOINT v109; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v110; // [rsp+88h] [rbp-78h] BYREF
  int v111; // [rsp+90h] [rbp-70h]
  int v112; // [rsp+94h] [rbp-6Ch]
  _QWORD v113[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v114; // [rsp+B0h] [rbp-50h]
  __int64 v115; // [rsp+B8h] [rbp-48h]
  __int64 v116; // [rsp+C0h] [rbp-40h]
  __int64 v117; // [rsp+C8h] [rbp-38h]
  int v118; // [rsp+D0h] [rbp-30h]
  __int64 v119; // [rsp+D4h] [rbp-2Ch]
  __int64 v120; // [rsp+DCh] [rbp-24h]
  int v121; // [rsp+E4h] [rbp-1Ch]
  __int64 v122; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v123; // [rsp+F8h] [rbp-8h]
  _OWORD v124[8]; // [rsp+110h] [rbp+10h] BYREF

  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3);
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v6,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      6,
      49,
      (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
  }
  v8 = *((_QWORD *)a2 + 1);
  v9 = 0;
  v106[0] = this;
  v106[1] = a2;
  LODWORD(v10) = 2;
  v107 = 0;
  v11 = 1LL;
  v12 = *(_DWORD *)(v8 + 120);
  v108 = 0;
  v102 = 0;
  if ( (v12 & 0x800) != 0 )
  {
    *((_QWORD *)this + 461) = 0LL;
    goto LABEL_22;
  }
  v13 = (__int64 *)(v8 + 52);
  if ( (v12 & 0x1000) != 0 )
  {
    v14 = 2;
LABEL_14:
    v15 = *v13;
    v16 = *(_QWORD *)(W32GetUserSessionState(v8, (_DWORD)v10, 1) + 19904);
    *(_QWORD *)(v16 + 4960) = v15;
    v17 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 60LL);
    v8 = *(_QWORD *)(W32GetUserSessionState(v16, v18, v19) + 19904);
    *(_QWORD *)(v8 + 4952) = v17;
    goto LABEL_15;
  }
  v14 = 0;
  if ( *((_DWORD *)this + 917) == *(_DWORD *)v13 && *((_DWORD *)this + 918) == *(_DWORD *)(v8 + 56) )
  {
    v10 = (__int64 *)(v8 + 60);
    if ( *((_DWORD *)this + 919) != *(_DWORD *)(v8 + 60) || *((_DWORD *)this + 920) != *(_DWORD *)(v8 + 64) )
      v14 = 1;
  }
  else
  {
    v14 = 2;
    v10 = (__int64 *)(v8 + 60);
  }
  v8 = (unsigned int)(v14 - 1);
  if ( v14 != 1 )
  {
    if ( v14 != 2 )
      goto LABEL_15;
    goto LABEL_14;
  }
  v50 = *v10;
  v8 = *(_QWORD *)(W32GetUserSessionState(v8, (_DWORD)v10, 1) + 19904);
  *(_QWORD *)(v8 + 4952) = v50;
  v102 = (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x10000) == 0;
LABEL_15:
  if ( !*((_BYTE *)this + 3765) && !*((_BYTE *)this + 3764) )
  {
    v96 = *((_DWORD *)this + 930);
    v97 = 0;
    v98 = *((_QWORD *)this + 466);
    if ( (int)IsEditionPostRawMouseInputMessageSupported(v8, v10, v11) >= 0 )
      v97 = (unsigned int)EditionPostRawMouseInputMessage(0LL, v98, v96, (__int64)this + 3736, (__int64)this + 3696);
    *((_BYTE *)this + 3764) = v97 != 0;
  }
  v20 = *((_QWORD *)a2 + 1);
  if ( (*(_DWORD *)(v20 + 120) & 0x4000) != 0 && CBaseProcessor::IsUMObserverRegistered(this, (int)v10, v11) )
  {
    v55 = *((_QWORD *)a2 + 1);
    v113[0] = 72LL;
    v114 = 0LL;
    v116 = 0LL;
    v56 = *(_QWORD *)(v55 + 96);
    v115 = *(_QWORD *)(v20 + 52);
    v57 = *(_QWORD *)(v20 + 68);
    v113[1] = v56;
    v120 = v57;
    v119 = 0LL;
    v121 = 0;
    PublicExtraInfo = CMouseProcessor::CMouseEvent::GetPublicExtraInfo(a2);
    v59 = *((_DWORD *)a2 + 4);
    v117 = PublicExtraInfo;
    v118 = 4;
    v60 = v59 - 1;
    if ( v60 )
    {
      v61 = v60 - 1;
      if ( v61 )
      {
        if ( v61 == 1 )
        {
          HIDWORD(v119) = *((unsigned __int16 *)a2 + 16);
          LODWORD(v116) = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
        }
        else
        {
          v103[0] = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3805LL);
        }
      }
      else
      {
        HIDWORD(v119) = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
        LODWORD(v116) = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
      }
    }
    else
    {
      LODWORD(v116) = 512;
    }
    LODWORD(v114) = v114 & 0xFFFFFFFE | (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) >> 7) & 1;
    InputTraceLogging::Mouse::InformUMObservers((const struct _MIT_MOUSE_INPUT_OBSERVER_PACKET *)v113);
    SendMessageTo(11, (int)v113, 72);
  }
  v21 = *((_QWORD *)a2 + 1);
  if ( v14 )
  {
    *((_QWORD *)this + 461) = *(unsigned int *)(v21 + 40);
    v8 = *((_QWORD *)a2 + 1);
    *(_QWORD *)((char *)this + 3668) = *(_QWORD *)(v8 + 52);
    *(_QWORD *)((char *)this + 3676) = *(_QWORD *)(v8 + 60);
  }
  else
  {
    v51 = *(_DWORD *)(v21 + 120);
    if ( (v51 & 0x10000) == 0 )
    {
      if ( (v51 & 0x2000) == 0 )
        InputTraceLogging::Mouse::DropMove(*(_QWORD *)(v21 + 96), 11LL, v11);
      v52 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v54 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v10, v11);
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v52,
          v53,
          *(_QWORD *)(v54 + 69136),
          4,
          6,
          51,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
      }
      return;
    }
    LODWORD(v8) = (_DWORD)WPP_GLOBAL_Control;
    v71 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v71 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v76 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v10, v11);
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v71,
        v72,
        *(_QWORD *)(v76 + 69136),
        4,
        6,
        50,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    *((_QWORD *)this + 461) = 0LL;
  }
  v9 = v102;
LABEL_22:
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x800) == 0 )
  {
    v22 = *(_QWORD *)(W32GetUserSessionState(v8, (_DWORD)v10, v11) + 18928);
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 112);
      v24 = v23 ? *(InputDelegation **)(v23 + 16) : *(InputDelegation **)(v22 + 96);
      if ( v24 )
      {
        if ( !IsSpatialDelegationEnabledForThread(v24, (int)v10, v11) )
        {
          if ( (unsigned int)HasHidTable((__int64)v24) )
          {
            v8 = *(_QWORD *)(*((_QWORD *)v24 + 57) + 824LL);
            if ( (*(_DWORD *)(v8 + 100) & 2) != 0 )
            {
              v62 = *(_QWORD *)(W32GetUserSessionState(v8, (_DWORD)v10, v11) + 18928);
              if ( v62 )
              {
                v66 = *(_QWORD *)(v62 + 112);
                v67 = v66 ? *(_QWORD *)(v66 + 16) : *(_QWORD *)(v62 + 96);
                if ( v67 )
                {
                  v68 = *(_DWORD *)(v67 + 392);
                  *(_QWORD *)v103 = 0LL;
                  if ( v68 < 0 )
                    v68 = *(_DWORD *)(*(_QWORD *)(v67 + 456) + 268LL);
                  v69 = W32GetUserSessionState(v66, (_DWORD)v10, v11);
                  PhysicalToLogicalDPIPoint((__int64)v103, (__int64 *)(*(_QWORD *)(v69 + 19904) + 4960LL), v68, 0LL);
                  v70 = v103[1];
                  *((_DWORD *)this + 11) = v103[0];
                  *((_DWORD *)this + 12) = v70;
                  *((_DWORD *)this + 13) = v68;
                }
              }
              if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x10000) == 0 )
              {
                v63 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
                v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v63 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v65 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v10, v11);
                  WPP_RECORDER_AND_TRACE_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v63,
                    v64,
                    *(_QWORD *)(v65 + 69136),
                    3,
                    6,
                    53,
                    (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
                }
                InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 12LL, v11);
                CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)v106);
                return;
              }
              LODWORD(v8) = (_DWORD)WPP_GLOBAL_Control;
              v73 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
              v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v73 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v75 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v10, v11);
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v73,
                  v74,
                  *(_QWORD *)(v75 + 69136),
                  4,
                  6,
                  52,
                  (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
              }
            }
          }
        }
      }
    }
  }
  v25 = *(struct tagPOINT **)(W32GetUserSessionState(v8, (_DWORD)v10, v11) + 19904);
  v105 = v25[620];
  v122 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)v25, v26, v27) + 19904) + 4952LL);
  CMouseProcessor::MouseHitTest(
    this,
    v124,
    &v105,
    &v122,
    a2,
    _InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1) != 0,
    0LL);
  v28 = 1;
  v29 = DWORD1(v124[0]);
  v30 = 0LL;
  v107 = 1;
  v108 = DWORD1(v124[0]);
  if ( (v124[0] & 4) != 0 )
  {
    if ( HIDWORD(v124[5]) == 1 || HIDWORD(v124[5]) == 2 )
    {
      if ( *(_QWORD *)&v124[5] )
        v30 = **(HWND **)&v124[5];
      else
        v30 = 0LL;
    }
  }
  else if ( (v124[0] & 2) != 0 )
  {
    v30 = (HWND)*((_QWORD *)&v124[1] + 1);
  }
  InputTraceLogging::Mouse::ProcessMove(
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL),
    (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
    v30);
  if ( !LODWORD(v124[0]) )
  {
    v77 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v77 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v79 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v32);
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v77,
        v78,
        *(_QWORD *)(v79 + 69136),
        4,
        6,
        54,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 13LL, v32);
    if ( !HIDWORD(v124[5]) )
      goto LABEL_152;
    goto LABEL_151;
  }
  v33 = 18;
  if ( v9 )
  {
    v46 = 18;
    if ( HIDWORD(v124[5]) == 2 )
      v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v124[5] + 40LL) + 288LL);
    CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (__int64)v103, v46);
    v34 = v105;
    y = (unsigned int)v105.y;
    if ( *(_QWORD *)v103 == v105 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v28 = 0;
      }
      v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v48 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v105.y);
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v47,
          *(_QWORD *)(v48 + 69136),
          4,
          6,
          55,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
      }
      InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 11LL, y);
      if ( HIDWORD(v124[5]) )
        HMAssignmentUnlock(&v124[5], v49);
      memset(v124, 0, 0x78uLL);
      if ( (v29 & 0xFFFFFFFB) != 0
        && (*((_DWORD *)a2 + 4) == 3 || !_InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1)) )
      {
        goto LABEL_77;
      }
      return;
    }
  }
  else
  {
    v34 = v105;
    LODWORD(y) = v105.y;
  }
  v123 = __PAIR64__(y, v34.x);
  if ( HIDWORD(v124[5]) == 2 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)&v124[5] + 40LL);
    v33 = *(_DWORD *)(v31 + 288);
  }
  *((_DWORD *)this + 11) = v34.x;
  *((_DWORD *)this + 12) = y;
  *((_DWORD *)this + 13) = v33;
  if ( *((_QWORD *)a2 + 1) != -112LL )
  {
    v36 = *(unsigned int *)(*((_QWORD *)a2 + 1) + 112LL);
    if ( (_DWORD)v36 == 4 || (_DWORD)v36 == 8 )
    {
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v36, v31);
      if ( CurrentThreadWin32Thread )
        v88 = *CurrentThreadWin32Thread;
      else
        v88 = 0LL;
      v89 = *(_QWORD *)(v88 + 456);
      v90 = *(_QWORD *)(v89 + 864);
      LODWORD(v89) = *(_DWORD *)(v89 + 872);
      *(_QWORD *)v103 = v90;
      v104 = v89;
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)v103, (CInputDest *)v124) )
      {
        v93 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v94 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v93 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v95 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v91, v92);
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v93,
            v94,
            *(_QWORD *)(v95 + 69136),
            3,
            6,
            56,
            (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
        }
        InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 10LL, v92);
        if ( !HIDWORD(v124[5]) )
          goto LABEL_152;
        goto LABEL_151;
      }
      v34 = v105;
    }
  }
  v37 = *((_QWORD *)a2 + 1);
  if ( !*(_DWORD *)(v37 + 156) && *(_BYTE *)(v37 + 160) )
  {
    v81 = *(_DWORD *)(v37 + 152);
    *(_QWORD *)v103 = *(_QWORD *)(v37 + 144);
    v104 = v81;
    if ( (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)v103, (CInputDest *)v124) )
    {
      v34 = v105;
      goto LABEL_43;
    }
    v84 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v85 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v84 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v86 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v82, v83);
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v84,
        v85,
        *(_QWORD *)(v86 + 69136),
        3,
        6,
        57,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 10LL, v83);
    if ( !HIDWORD(v124[5]) )
    {
LABEL_152:
      memset(v124, 0, 0x78uLL);
      CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)v106);
      return;
    }
LABEL_151:
    HMAssignmentUnlock(&v124[5], v80);
    goto LABEL_152;
  }
LABEL_43:
  v109 = v34;
  v112 = 0;
  v110 = v123;
  v111 = v33;
  if ( (unsigned int)CMouseProcessor::ForwardInputToISM(this, v124, a2, &v109, &v105, 0, 512, 0LL) == 1 )
  {
    if ( !LODWORD(v124[0]) )
    {
      v103[0] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5387LL);
    }
    if ( !(unsigned __int8)IsMouseIVEnabled() || !(unsigned __int8)isRootPartition() )
      goto LABEL_54;
    CInputDest::GetContainerId(v124, v103);
    ContainerInfo = CInputDest::GetContainerInfo((CInputDest *)v124);
    v39 = v103[0];
    v100 = ContainerInfo;
    LOBYTE(v38) = *((_WORD *)this + 2572) == LOWORD(v103[0])
               && (v38 = HIWORD(v103[0]), *((_WORD *)this + 2573) == HIWORD(v103[0]));
    if ( *((_WORD *)this + 2556) )
    {
      v101 = 0;
    }
    else
    {
      *((_DWORD *)this + 1286) = v103[0];
      v101 = 1;
    }
    if ( v100 && v101 && (_BYTE)v38 )
      goto LABEL_204;
    if ( *((_BYTE *)this + 5129) )
    {
      CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput((CMouseProcessor *)((char *)this + 4088), a2);
      CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 4088));
    }
    if ( v100 )
    {
LABEL_204:
      CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk(
        (CMouseProcessor *)((char *)this + 4088),
        a2,
        (const struct CInputDest *)v124);
    }
    else
    {
LABEL_54:
      if ( !*(_QWORD *)(W32GetUserSessionState(v39, v38, v40) + 18928) )
        goto LABEL_55;
      v44 = 0LL;
      if ( HIDWORD(v124[5]) )
      {
        if ( LODWORD(v124[0]) )
        {
          if ( *(_QWORD *)&v124[5] )
          {
            v42 = *(_QWORD *)(*(_QWORD *)&v124[5] + 16LL);
            if ( v42 )
              v44 = *(_QWORD *)(v42 + 464);
          }
        }
      }
      if ( v44 != *(_QWORD *)(W32GetUserSessionState(v42, v41, v43) + 18928) )
LABEL_55:
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v124);
      ApiSeEditionDeferWinEventNotify();
      CMouseProcessor::UpdateGlobalCursorOwner(
        this,
        (const struct CInputDest *)v124,
        &v109,
        (const struct tagINPUT_MESSAGE_SOURCE *)(*((_QWORD *)a2 + 1) + 112LL));
      CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        this,
        (const struct CInputDest *)v124,
        (const struct tagLOGICALPOINT *)&v110,
        a2,
        0LL);
      ApiSetEditionEndDeferWinEventNotify();
    }
  }
  if ( HIDWORD(v124[5]) )
  {
    v45 = *(_QWORD *)&v124[5];
    *(_QWORD *)&v124[5] = 0LL;
    if ( v45 )
      HMUnlockObject(v45);
  }
  memset(v124, 0, 120);
  if ( (v29 & 0xFFFFFFFB) != 0
    && (*((_DWORD *)a2 + 4) == 3 || !_InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1)) )
  {
LABEL_77:
    CMouseProcessor::SendInputStreamEndedMessage(this, a2);
  }
}
