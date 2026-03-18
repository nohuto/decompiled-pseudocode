/*
 * XREFs of xxxProcessEventMessage @ 0x14024572C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     _PostTransformableMessage @ 0x140020914 (_PostTransformableMessage.c)
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     xxxCancelMouseMoveTracking @ 0x140021AE8 (xxxCancelMouseMoveTracking.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1400268A8 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x1400292B4 (-s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x14002F920 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessAsyncSendMessage @ 0x14002FF54 (xxxProcessAsyncSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140058924 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140067260 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8FCC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400CA314 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     xxxProcessTSFEvent @ 0x1400CADAC (xxxProcessTSFEvent.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400D8B20 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1401108CC (xxxSoundSentry.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x1401303C4 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14015CE78 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x14015DC10 (PostMousePointerLeaveAndCleanup.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x14016FFF4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     _PostThreadMessage @ 0x1401AAC30 (_PostThreadMessage.c)
 *     xxxProcessSetWindowPosEvent @ 0x1401D64DC (xxxProcessSetWindowPosEvent.c)
 *     xxxClientBroadcastThemeChange @ 0x1401F01F8 (xxxClientBroadcastThemeChange.c)
 *     xxxClientUpdateDpi @ 0x140227B7C (xxxClientUpdateDpi.c)
 *     xxxDoDeferredPointerActivate @ 0x14022C878 (xxxDoDeferredPointerActivate.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023A4E0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x14023B7E4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1402402D4 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x14026C044 (-xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z.c)
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x14026C0C4 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402AAC50 (-xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C2E94 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402CE344 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402D94B8 (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct tagTHREADINFO *__fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  struct tagQMSG *v5; // rdx
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  struct tagWND *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  struct tagWND *v18; // rax
  struct tagWND *v19; // rbx
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // r15
  struct tagQ **v27; // rcx
  int v28; // ebx
  __int64 v29; // rcx
  unsigned int v30; // esi
  __int64 UserSessionState; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rbx
  struct tagWND *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  __int64 v58; // rax
  MoveSizeApi *v59; // rbx
  unsigned __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rbx
  _OWORD *v64; // rcx
  __int64 v65; // rdx
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int64 v71; // rax
  struct tagWND *v72; // rbx
  __int64 v73; // rdx
  struct tagTHREADINFO *result; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v76[4]; // [rsp+60h] [rbp-59h] BYREF
  _OWORD v77[6]; // [rsp+80h] [rbp-39h] BYREF

  v4 = PtiCurrent(a1, a2);
  v76[0] = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = v76;
  v7 = *(_DWORD *)(a2 + 96);
  v8 = *(_QWORD *)(a1 + 472);
  v76[2] = CleanEventMessage;
  v76[1] = a2;
  if ( v7 > 16 )
  {
    if ( v7 <= 24 )
    {
      if ( v7 == 24 )
      {
        xxxClientUpdateDpi(*(_DWORD *)(a2 + 32));
        goto LABEL_116;
      }
      v42 = v7 - 17;
      if ( !v42 )
      {
        v51 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
        v52 = v51;
        if ( !v51 )
          goto LABEL_116;
        Win32HM_LockIntoThread<0>(a1, v51, BugCheckParameter3);
        xxxArrangeWindow(v52, *(unsigned int *)(a2 + 32));
        goto LABEL_23;
      }
      v10 = (unsigned int)(v42 - 1);
      if ( !(_DWORD)v10 )
      {
        if ( v8
          && *(_QWORD *)(v8 + 120)
          && (v8 == *(_QWORD *)(W32GetUserSessionState(v10, v5) + 18888)
           || (unsigned __int8)IsKeyboardDelegationTarget(a1)) )
        {
          v10 = *(unsigned int *)(W32GetUserSessionState(v10, v5) + 66808);
          if ( (v10 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings();
        }
        goto LABEL_116;
      }
      v43 = v10 - 1;
      if ( !v43 )
      {
        if ( *(_DWORD *)(a2 + 24) == 809 )
          PostThreadMessage((struct tagTHREADINFO *)a1, 0x329u, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        else
          xxxSendShutdownData(*(HWND *)(a2 + 40), *(_QWORD *)(a2 + 32));
        goto LABEL_116;
      }
      v44 = v43 - 1;
      if ( v44 )
      {
        v45 = v44 - 1;
        if ( !v45 )
        {
          LOBYTE(v5) = 1;
          v47 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), (__int64)v5);
          LOBYTE(v48) = 1;
          v49 = v47;
          v50 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v48);
          PostMousePointerLeaveAndCleanup(v49, v50);
          goto LABEL_116;
        }
        v10 = (unsigned int)(v45 - 1);
        if ( !(_DWORD)v10 )
        {
          CRecalcProp::s_xxxProcessRecalcSignal(*(_DWORD *)(a2 + 32), *(HWND *)(a2 + 16));
          goto LABEL_116;
        }
        if ( (_DWORD)v10 != 1 )
          goto LABEL_116;
        v46 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
        v38 = v46;
        if ( !v46 )
          goto LABEL_116;
        Win32HM_LockIntoThread<0>(a1, v46, BugCheckParameter3);
        v39 = *(unsigned int *)(a2 + 40);
        v40 = *(unsigned int *)(a2 + 32);
        goto LABEL_64;
      }
      xxxDoDeferredPointerActivate(a2);
LABEL_83:
      CleanEventMessage((struct tagQMSG *)a2);
      goto LABEL_116;
    }
    v53 = v7 - 25;
    if ( !v53 )
    {
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_116;
    }
    v54 = v53 - 1;
    if ( !v54 )
    {
      if ( *(_DWORD *)(a2 + 40) )
        xxxTooltipCallback(0LL, 0LL, 0LL);
      else
        xxxTooltipCreateCallback(*(HWND *)(a2 + 16), *(_DWORD *)(a2 + 32));
      goto LABEL_116;
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
      ShellWindowPos::xxxProcessPositionEvent((ShellWindowPos *)a2, v5);
      goto LABEL_116;
    }
    v56 = v55 - 1;
    if ( !v56 )
    {
      AdvancedWindowPos::xxxProcessAsyncWindowAction(*(AdvancedWindowPos **)(a2 + 16), *(HWND *)(a2 + 40), v6);
      goto LABEL_83;
    }
    v57 = v56 - 1;
    if ( !v57 )
    {
      v71 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v72 = (struct tagWND *)v71;
      if ( !v71 )
        goto LABEL_116;
      Win32HM_LockIntoThread<0>(a1, v71, BugCheckParameter3);
      xxxDeliverRestoreFocusMessage(v72, v73);
      goto LABEL_23;
    }
    v10 = (unsigned int)(v57 - 2);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 != 1 )
        goto LABEL_116;
      v58 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v59 = (MoveSizeApi *)v58;
      if ( !v58 )
        goto LABEL_83;
      Win32HM_LockIntoThread<0>(a1, v58, BugCheckParameter3);
      MoveSizeApi::xxxProcessEnterMoveSizeRequest(v59, *(struct tagWND **)(a2 + 32), v60);
    }
    else
    {
      v62 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v63 = v62;
      if ( !v62 )
        goto LABEL_83;
      Win32HM_LockIntoThread<0>(a1, v62, BugCheckParameter3);
      v64 = *(_OWORD **)(a2 + 40);
      v65 = *(_QWORD *)(a2 + 32);
      v66 = v64[1];
      v77[0] = *v64;
      v67 = v64[2];
      v77[1] = v66;
      v68 = v64[3];
      v77[2] = v67;
      v69 = v64[4];
      v77[3] = v68;
      v70 = v64[5];
      v77[4] = v69;
      v77[5] = v70;
      WindowActions::xxxApplyActionAsync(v63, v65, v77);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v61);
    goto LABEL_83;
  }
  if ( v7 == 16 )
  {
    LOBYTE(v5) = 1;
    v41 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v5);
    v38 = v41;
    if ( !v41 )
      goto LABEL_116;
    v10 = *(_QWORD *)(v41 + 40);
    if ( (*(_BYTE *)(v10 + 31) & 1) == 0 )
      goto LABEL_116;
    Win32HM_LockIntoThread<0>(a1, v41, BugCheckParameter3);
    v40 = 3LL;
    v39 = 19LL;
    goto LABEL_64;
  }
  if ( v7 > 8 )
  {
    v21 = v7 - 9;
    if ( !v21 )
    {
      xxxProcessAsyncSendMessage(
        *(_QWORD *)(a2 + 16),
        *(unsigned int *)(a2 + 24),
        *(_QWORD *)(a2 + 32),
        (__int64 *)(a2 + 40));
      goto LABEL_116;
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 )
      {
        v34 = *(_QWORD *)(a1 + 496);
        v35 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
        v36 = v35;
        if ( (*(_DWORD *)(v34 + 48) & 0x3C0) == 0
          || (v5 = *(struct tagQMSG **)(v34 + 192), v10 = *(_QWORD *)(a2 + 16), *(_QWORD *)v5 != v10)
          || (v10 = *(unsigned int *)(a2 + 32), *(_DWORD *)(v34 + 200) != (_DWORD)v10) )
        {
          if ( v35 )
          {
            Win32HM_LockIntoThread<0>(a1, v35, BugCheckParameter3);
            xxxCancelMouseMoveTracking(*(_DWORD *)(a2 + 24), v36, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
            goto LABEL_23;
          }
        }
        goto LABEL_116;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>((__int64)v77);
        v33 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v33 + 24) )
          xxxProcessTSFEvent((struct tagNOTIFY *)v33, v32);
        else
          xxxProcessNotifyWinEvent(v33);
        DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v77);
        goto LABEL_116;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        if ( ((*(_DWORD *)(a1 + 720) | *(_DWORD *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x800) != 0 )
          xxxCallHook(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10);
        PostShellHookMessagesEx((LastWokenThread *)*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40));
        goto LABEL_116;
      }
      v10 = (unsigned int)(v25 - 1);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 1 )
          goto LABEL_116;
        v26 = *(_QWORD *)(v8 + 120);
        if ( !v26 )
        {
          v26 = *(_QWORD *)(v8 + 128);
          if ( !v26 )
            goto LABEL_116;
        }
        v27 = *(struct tagQ ***)(v26 + 16);
        if ( (struct tagQ **)a1 != v27 )
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v27,
            v27[59],
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            (struct tagINPUT_MESSAGE_SOURCE *)(a2 + 124));
          goto LABEL_116;
        }
        v28 = *(_DWORD *)(a2 + 40) - 165;
        *(_QWORD *)(a2 + 40) = ((unsigned __int64)(unsigned __int16)v28 << 16) | (unsigned __int16)GetMouseKeyFlags(v27[59]);
        tagTHREADINFO::UpdateInputSource((tagTHREADINFO *)a1, (const struct tagINPUT_MESSAGE_SOURCE *)(a2 + 124));
        Win32HM_LockIntoThread<0>(a1, v26, BugCheckParameter3);
        xxxSendTransformableMessageTimeout(
          (struct tagTHREADINFO **)v26,
          793LL,
          *(_QWORD *)v26,
          *(struct tagDRAWITEMSTRUCT **)(a2 + 40),
          0,
          0,
          0LL,
          1,
          1);
        goto LABEL_23;
      }
      v29 = 5LL;
      if ( *(_DWORD *)(a2 + 24) == 5 )
      {
        v30 = *(_DWORD *)(a2 + 40);
        if ( v30 > 5 )
          v30 = 5;
        if ( !v30 )
          goto LABEL_47;
      }
      else
      {
        v30 = 1;
      }
      do
      {
        UserSessionState = W32GetUserSessionState(v29, v5);
        CUserPlaySound::PlaySync(*(RPC_BINDING_HANDLE **)(UserSessionState + 70544));
        --v30;
      }
      while ( v30 );
LABEL_47:
      xxxSoundSentry(v29, (__int64)v5);
      goto LABEL_116;
    }
    LOBYTE(v5) = 1;
    v37 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v5);
    v38 = v37;
    if ( !v37 )
      goto LABEL_116;
    Win32HM_LockIntoThread<0>(a1, v37, BugCheckParameter3);
    if ( (*(_BYTE *)(*(_QWORD *)(v38 + 40) + 31LL) & 0x10) != 0 )
      goto LABEL_23;
    SetVisible(v38, 1u);
    if ( (*(_BYTE *)(*(_QWORD *)(v38 + 40) + 31LL) & 0x20) != 0 )
      goto LABEL_23;
    v39 = 1LL;
    v40 = 7LL;
LABEL_64:
    xxxMinMaximize(v38, v40, v39);
    goto LABEL_23;
  }
  if ( v7 != 8 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v10 = (unsigned int)(v13 - 1);
              if ( (_DWORD)v10 )
              {
                if ( (_DWORD)v10 == 1 )
                {
                  LOBYTE(v5) = 1;
                  v14 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v5);
                  if ( v14 )
                    PostTransformableMessage(v14, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
                }
              }
              else
              {
                xxxProcessActivationEvent((const struct tagQMSG *)a2, (__int64)v5);
              }
            }
            else
            {
              xxxDeactivate(a1, *(unsigned int *)(a2 + 32), *(_DWORD *)(a2 + 72));
            }
          }
          else
          {
            ProcessUpdateKeyStateEvent(v8, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
          }
        }
        else
        {
          xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32), (__int64)v5);
        }
        goto LABEL_116;
      }
      v5 = *(struct tagQMSG **)(v8 + 112);
      if ( !v5 )
        goto LABEL_116;
      Win32HM_LockIntoThread<0>(a1, (__int64)v5, BugCheckParameter3);
      xxxSendTransformableMessageTimeout(*(struct tagTHREADINFO ***)(v8 + 112), 31LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      SetWakeBit(a1, 2LL);
    }
    else
    {
      v16 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v17 = v16;
      if ( !v16 )
        goto LABEL_116;
      v10 = *(_QWORD *)(v16 + 40);
      if ( *(char *)(v10 + 20) < 0 )
        goto LABEL_116;
      Win32HM_LockIntoThread<0>(a1, v16, BugCheckParameter3);
      xxxProcessShowWindowEvent(v17, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
    }
LABEL_23:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v15);
    goto LABEL_116;
  }
  v18 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1LL);
  v19 = v18;
  if ( v18 )
  {
    if ( *(char *)(*((_QWORD *)v18 + 5) + 19LL) < 0 )
    {
      Win32HM_LockIntoThread<0>(a1, (__int64)v18, BugCheckParameter3);
      xxxFreeWindow((struct tagTHREADINFO *)a1, v19);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v20);
    }
    else
    {
      xxxDestroyWindow(v18, (__int64)v5);
    }
  }
LABEL_116:
  result = PtiCurrent(v10, (__int64)v5);
  *((_QWORD *)result + 48) = v76[0];
  return result;
}
