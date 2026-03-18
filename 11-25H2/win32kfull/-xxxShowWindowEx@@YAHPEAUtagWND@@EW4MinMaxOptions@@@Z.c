/*
 * XREFs of ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowPlacement @ 0x14016FB84 (xxxSetWindowPlacement.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x14016FFF4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     NtUserShowWindow @ 0x140170070 (NtUserShowWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxShowScrollBar @ 0x1401D4208 (xxxShowScrollBar.c)
 *     NtUserSetWindowPos @ 0x14024EC50 (NtUserSetWindowPos.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     xxxSetInternalWindowPos @ 0x1402ACC4C (xxxSetInternalWindowPos.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x14002677C (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140027A5C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x140029E0C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z @ 0x14004DD24 (-xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z @ 0x14005A864 (-IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x140062C48 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     xxxSendSizeMessage @ 0x1401A8EA0 (xxxSendSizeMessage.c)
 *     _FChildVisible @ 0x1401AD490 (_FChildVisible.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1401CBF08 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x140229FA4 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 *     ?IsForegroundWindowWithThreadCheck@@YA_NPEBUtagWND@@PEBUtagTHREADINFO@@@Z @ 0x14023A1DC (-IsForegroundWindowWithThreadCheck@@YA_NPEBUtagWND@@PEBUtagTHREADINFO@@@Z.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14025C310 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     xxxMinimizeHungWindow @ 0x14026BDFC (xxxMinimizeHungWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A67FC (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z @ 0x1402C23A0 (-SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxShowWindowEx(const struct tagWND *a1, __int64 a2, unsigned int a3)
{
  int v3; // r12d
  int v6; // ebx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  char v10; // si
  int v11; // r10d
  unsigned int v12; // r15d
  int v13; // r11d
  int v14; // r13d
  __int64 ShellShowWindowCommand; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __m128i v19; // xmm2
  __int64 v20; // xmm1_8
  bool v21; // r14
  __int64 v22; // rbx
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  bool v27; // bl
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  bool v32; // bl
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  __int64 v36; // rcx
  char v37; // al
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rdx
  char v43; // r13
  bool v44; // r12
  __int64 v45; // rbx
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  int v49; // r13d
  int v50; // ebx
  const struct tagWND *v51; // rcx
  int v52; // r8d
  const struct tagTHREADINFO *v53; // r14
  int v54; // ecx
  int v55; // r14d
  bool v56; // al
  struct tagWND *v57; // rcx
  __int64 v58; // r9
  int v59; // edx
  __int64 v60; // r8
  int v61; // edx
  __int64 v62; // rdx
  char v64; // [rsp+50h] [rbp-B0h]
  char v65; // [rsp+51h] [rbp-AFh]
  bool v66; // [rsp+52h] [rbp-AEh]
  __int64 v67; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+60h] [rbp-A0h]
  _BYTE v70[24]; // [rsp+68h] [rbp-98h] BYREF
  struct tagTHREADINFO *v71[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+90h] [rbp-70h]
  struct tagRECT v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-50h]
  _DWORD v75[42]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v76[40]; // [rsp+168h] [rbp+68h] BYREF

  v3 = (unsigned __int8)a2;
  v64 = a2;
  v6 = 3;
  v7 = PtiCurrent((__int64)a1, a2);
  v9 = *((_QWORD *)a1 + 5);
  v10 = 1;
  v71[0] = v7;
  v11 = 0;
  v67 = *((_QWORD *)v7 + 58);
  v12 = *(_BYTE *)(v9 + 25) & 8 | *(_BYTE *)(v9 + 31) & 0x10;
  v69 = v67 + 772;
  v13 = *(_DWORD *)(v67 + 792);
  v14 = v13 & 1;
  if ( (v13 & 1) == 0 || !IsTopLevelUnownedWindowWithCaption(a1) || (v11 = 1, v3 != 1) && v3 != 5 )
  {
    if ( (_BYTE)v3 != 10 )
      goto LABEL_9;
    if ( !v14 )
      goto LABEL_8;
  }
  v11 = 1;
  LOBYTE(v3) = *(_BYTE *)(v67 + 796);
  v64 = v3;
  if ( (_BYTE)v3 == 10 )
  {
LABEL_8:
    LOBYTE(v3) = 1;
    v64 = 1;
  }
LABEL_9:
  if ( v11 )
  {
    *(_DWORD *)(v67 + 792) = v13 & 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a1);
  }
  LOBYTE(v8) = v3;
  ShellShowWindowCommand = xxxGetShellShowWindowCommand(v70, a1, v8, v69);
  v19 = *(__m128i *)ShellShowWindowCommand;
  v73 = (struct tagRECT)v19;
  v20 = *(_QWORD *)(ShellShowWindowCommand + 16);
  v74 = v20;
  if ( v19.m128i_i8[4] == -1 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v10 = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
      LOBYTE(v24) = v21;
      LOBYTE(v25) = v10;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v25,
        v24,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        12,
        32,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
        v22,
        v12);
    }
    return v12;
  }
  v68 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 4));
  if ( v68 == 19 )
  {
    if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v17, v16, v18) )
    {
      AdvancedWindowPos::CWindowAction::CWindowAction(v75, 0LL);
      v75[0] |= 0x30u;
      v75[10] = 3;
      AdvancedWindowPos::CWindowAction::SetFrameBounds(
        (AdvancedWindowPos::CWindowAction *)v75,
        (const struct tagRECT *)&v73.right);
      AdvancedWindowPos::xxxApplyWindowAction(a1, v75, 6LL);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v10 = 0;
      }
      v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v30,
          v29,
          *(_QWORD *)(v28 + 69160),
          4,
          12,
          33,
          (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids);
      }
      CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v76);
      return v12;
    }
    if ( (unsigned __int8)WindowArrangement::xxxSetSnapArrangementPos(a1, &v73.right, 0LL, 0LL) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v10 = 0;
      }
      v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31);
        LOBYTE(v34) = v32;
        LOBYTE(v35) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v35,
          v34,
          *(_QWORD *)(v33 + 69160),
          4,
          12,
          34,
          (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids);
      }
      return v12;
    }
    if ( v64 == LOBYTE(v73.top) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 803LL);
    v36 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
      || (v37 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v37 = 0;
    }
    v65 = v37;
    v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v37 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v36) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v38 = W32GetUserSessionState(v36, v31);
      LOBYTE(v39) = v66;
      LOBYTE(v40) = v65;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v40,
        v39,
        *(_QWORD *)(v38 + 69160),
        3,
        12,
        35,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids);
    }
    v41 = 0LL;
    v20 = v74;
    LOBYTE(v73.top) = v64;
    v73.left = 0;
    v19 = (__m128i)v73;
    v68 = v64;
  }
  else
  {
    v41 = (unsigned int)_mm_cvtsi128_si32(v19);
  }
  if ( (_DWORD)v41 )
  {
    if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x10, v41) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
        || (v43 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v43 = 0;
      }
      v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v43 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v45 = *(_QWORD *)a1;
        v46 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v42);
        LOBYTE(v47) = v44;
        LOBYTE(v48) = v43;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v48,
          v47,
          *(_QWORD *)(v46 + 69160),
          4,
          12,
          36,
          (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
          v45);
      }
      a3 |= 0x20u;
      v6 = 1048579;
    }
    v19 = (__m128i)v73;
    LODWORD(v41) = v73.left;
    v20 = v74;
  }
  v49 = v6;
  if ( v68 > 7u )
  {
    if ( v68 == 8 )
    {
      v50 = v6 | 0x50;
LABEL_105:
      v53 = v71[0];
      goto LABEL_106;
    }
    if ( v68 == 9 )
      goto LABEL_96;
    if ( v68 == 11 )
    {
      xxxMinimizeHungWindow(a1);
      return v12;
    }
    if ( v68 == 15 )
    {
      LOBYTE(v73.top) = 3;
    }
    else
    {
      if ( v68 != 16 )
      {
        if ( v68 == 17 )
        {
          LOBYTE(v73.top) = 3;
        }
        else
        {
          if ( v68 != 18 )
            goto LABEL_86;
          LOBYTE(v73.top) = 9;
        }
        v55 = a3 | 0x70;
        goto LABEL_89;
      }
      LOBYTE(v73.top) = 9;
    }
    v55 = a3 | 0x30;
LABEL_89:
    v52 = v55;
LABEL_90:
    v51 = a1;
    v72 = v20;
    *(struct tagRECT *)v71 = v73;
    goto LABEL_74;
  }
  if ( v68 == 7 )
    goto LABEL_68;
  if ( v68 )
  {
    if ( v68 == 1 )
      goto LABEL_96;
    if ( v68 != 2 )
    {
      if ( v68 == 3 )
      {
        *(__m128i *)v71 = v19;
        v72 = v20;
        v51 = a1;
        if ( (_DWORD)v41 != 1 )
        {
          v52 = a3;
LABEL_74:
          xxxShowWindowViaMinMax(v51, (__int64)v71, v52);
          return v12;
        }
        goto LABEL_72;
      }
      if ( v68 != 4 )
      {
        if ( v68 != 5 )
        {
          if ( v68 == 6 )
            goto LABEL_68;
LABEL_86:
          UserSetLastError(1449);
          return v12;
        }
        if ( v12 )
          return v12;
        v50 = v6 | 0x40;
        goto LABEL_105;
      }
LABEL_96:
      v51 = a1;
      if ( (_DWORD)v41 != 1 )
      {
        v56 = IsArranged(a1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) == 0 && !v56 )
        {
          if ( v12 )
            return v12;
          v50 = v6 | 0x40;
          if ( v68 == 4 )
            v50 = v49 | 0x54;
          goto LABEL_105;
        }
        v20 = v74;
        v52 = a3 | (4 * v56);
        goto LABEL_90;
      }
      *(__m128i *)v71 = v19;
      v72 = v20;
LABEL_72:
      xxxShowWindowViaStartupInfo(v51, v71, v69, 0LL);
      return v12;
    }
LABEL_68:
    *(__m128i *)v71 = v19;
    v72 = v20;
    xxxMinimizeWindowViaMinMax(a1, (__int64)v71, a3);
    return v12;
  }
  if ( !v12 )
    return v12;
  v53 = v71[0];
  v54 = 148;
  if ( a1 == *(const struct tagWND **)(*((_QWORD *)v71[0] + 59) + 128LL) )
    v54 = 128;
  v50 = v54 | v6;
LABEL_106:
  if ( (v68 != 0) != v12 )
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 24LL, v68 != 0, 0LL, 0, 0, 0LL, 1, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    goto LABEL_112;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 9LL) & 8) != 0 && ((v68 - 1) & 0xFB) == 0 )
  {
    xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1LL, 0);
LABEL_112:
    v50 |= 0x14u;
  }
  if ( (unsigned int)FChildVisible(a1) )
    xxxShowWindowViaSetWindowPos(v57, v50);
  else
    SetVisible((__int64)v57, v68 != 0);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x10) != 0 )
  {
    SetOrClrWF(0, a1, 0x10u, 1);
    xxxSendSizeMessage(a1);
    v58 = *((_QWORD *)a1 + 13);
    *(_OWORD *)v71 = *(_OWORD *)(*(_QWORD *)(v58 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces(v71, v71, a1, v58);
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      v61 = *(unsigned __int16 *)(v60 + 104) | (v59 << 16);
    else
      v61 = (unsigned __int16)(*(_WORD *)(v60 + 104) - LOWORD(v71[0])) | ((unsigned __int16)(v59 - WORD2(v71[0])) << 16);
    xxxSendTransformableMessageTimeout(
      (struct tagTHREADINFO **)a1,
      3LL,
      0LL,
      (struct tagDRAWITEMSTRUCT *)v61,
      0,
      0,
      0LL,
      1,
      0);
  }
  if ( !v68 )
  {
    if ( IsForegroundWindowWithThreadCheck(a1, v53) )
      xxxActivateWindowWithOptions(a1, 2LL, 57LL, 1LL, 0);
    else
      xxxMoveFocusAway(a1, v62);
  }
  return v12;
}
