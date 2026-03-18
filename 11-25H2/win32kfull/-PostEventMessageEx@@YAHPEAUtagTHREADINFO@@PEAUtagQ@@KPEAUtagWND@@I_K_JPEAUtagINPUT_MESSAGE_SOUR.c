/*
 * XREFs of ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x14002F920 (xxxProcessNotifyWinEvent.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x140058F0C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     zzzDecomposeDesktop @ 0x1401229EC (zzzDecomposeDesktop.c)
 *     EditionPostInputEvent @ 0x140128AC0 (EditionPostInputEvent.c)
 *     EditionPostUpdateKeyStateEvent @ 0x140129110 (EditionPostUpdateKeyStateEvent.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x140129150 (NtUserBroadcastThemeChangeEvent.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x14012931C (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     NtUserScheduleDispatchNotification @ 0x14012A7E0 (NtUserScheduleDispatchNotification.c)
 *     NtUserSendEventMessage @ 0x14015C0A0 (NtUserSendEventMessage.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14015CE78 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1401C3E28 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     QueueShutdownData @ 0x1401E4924 (QueueShutdownData.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x140204B24 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020F2CC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x14021E418 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1402210AC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionPostAccessibilitySettingChangedEvent @ 0x14022BE40 (EditionPostAccessibilitySettingChangedEvent.c)
 *     ?xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z @ 0x14023CE88 (-xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14023F260 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1402402D4 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     NtUserRegisterBSDRWindow @ 0x14024C210 (NtUserRegisterBSDRWindow.c)
 *     EditionHandleAndPostKeyEvent @ 0x14024FA10 (EditionHandleAndPostKeyEvent.c)
 *     xxxTrackMouseMove @ 0x14025D2EC (xxxTrackMouseMove.c)
 *     EditionPostRitSound @ 0x140266FF0 (EditionPostRitSound.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x14026936C (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     xxxMinimizeHungWindow @ 0x14026BDFC (xxxMinimizeHungWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140279CB8 (-xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionPostThreadInputEvent @ 0x140281AE0 (EditionPostThreadInputEvent.c)
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A7A30 (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C1D24 (-PositionWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__.c)
 *     ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402C4D80 (-PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z.c)
 *     ?PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z @ 0x1402C5040 (-PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C6140 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 *     ?PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D5058 (-PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1402DEF14 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ??0?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@0@Z @ 0x1401101D8 (--0-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1401196C0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140119D60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x140120EA4 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProcessSuspendedEventMessage @ 0x14019D9D8 (ProcessSuspendedEventMessage.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall PostEventMessageEx(
        struct tagTHREADINFO *a1,
        struct tagQ *a2,
        DWORD a3,
        LARGE_INTEGER *a4,
        DWORD a5,
        LARGE_INTEGER a6,
        __int64 a7,
        struct tagINPUT_MESSAGE_SOURCE *a8)
{
  struct tagTHREADINFO *v11; // rbx
  __int64 UserSessionState; // rax
  LARGE_INTEGER *v13; // r14
  tagDomLock *v14; // rcx
  tagDomLock *v15; // rcx
  bool v16; // zf
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  tagDomLock *Base; // [rsp+70h] [rbp-59h] BYREF
  char v25; // [rsp+78h] [rbp-51h]
  tagDomLock *v26; // [rsp+80h] [rbp-49h]
  char v27; // [rsp+88h] [rbp-41h]
  tagObjLock *v28; // [rsp+A0h] [rbp-29h]
  tagObjLock *v29; // [rsp+A8h] [rbp-21h]
  char v30; // [rsp+B8h] [rbp-11h]

  v11 = a1;
  if ( !a1 )
  {
    UserSessionState = W32GetUserSessionState(0LL, a2);
    DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::ObjectLock<tagObjLock,tagObjLock>(
      (char *)&Base,
      UserSessionState + 42456,
      a2);
    goto LABEL_3;
  }
  DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::ObjectLock<tagObjLock,tagObjLock>(
    (char *)&Base,
    (__int64)a1 + 432,
    a2);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v11 + 132, 0, 0) & 1) != 0 )
  {
    if ( !v30 )
      return 0LL;
    if ( v29 )
      tagObjLock::UnLockExclusive(v29);
    if ( v28 )
      tagObjLock::UnLockExclusive(v28);
    v14 = v26;
    if ( !v26 )
      goto LABEL_22;
    if ( v27 )
    {
LABEL_20:
      tagDomLock::UnLockExclusive(v14);
      goto LABEL_22;
    }
LABEL_21:
    tagDomLock::UnLockShared(v14);
LABEL_22:
    v15 = Base;
    if ( Base )
    {
      v16 = v25 == 0;
LABEL_37:
      if ( !v16 )
      {
        tagDomLock::UnLockExclusive(v15);
        return 0LL;
      }
      tagDomLock::UnLockShared(v15);
    }
    return 0LL;
  }
  vAdjustDelegatePriority(v11);
  if ( tagPROCESSINFO::SyncAndTestFreeze(*((tagPROCESSINFO **)v11 + 58))
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))ProcessSuspendedEventMessage)(
                        v11,
                        a3,
                        a4,
                        a5,
                        (LARGE_INTEGER)a6.QuadPart,
                        a7) )
  {
    if ( !v30 )
      return 0LL;
    if ( v29 )
      tagObjLock::UnLockExclusive(v29);
    if ( v28 )
      tagObjLock::UnLockExclusive(v28);
    v14 = v26;
    if ( !v26 )
      goto LABEL_22;
    if ( v27 )
      goto LABEL_20;
    goto LABEL_21;
  }
LABEL_3:
  v13 = (LARGE_INTEGER *)AllocQEntryEx((__int64)a2 + 24, 0LL, 1);
  if ( !v13 )
  {
    if ( v30 )
    {
      if ( v29 )
        tagObjLock::UnLockExclusive(v29);
      if ( v28 )
        tagObjLock::UnLockExclusive(v28);
      if ( v26 )
      {
        if ( v27 )
          tagDomLock::UnLockExclusive(v26);
        else
          tagDomLock::UnLockShared(v26);
      }
      v15 = Base;
      if ( Base )
      {
        v16 = v25 == 0;
        goto LABEL_37;
      }
    }
    return 0LL;
  }
  if ( a4 )
  {
    v18 = *(_DWORD *)(a4[5].QuadPart + 288);
  }
  else
  {
    v19 = *((_QWORD *)a2 + 16);
    if ( v19 )
      v20 = *(_QWORD *)(v19 + 16);
    else
      v20 = *((_QWORD *)a2 + 13);
    v18 = *(_DWORD *)(*(_QWORD *)(v20 + 464) + 268LL);
  }
  StoreQMessage(v13, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v18, 0LL, 0LL);
  v13[13].QuadPart = (LONGLONG)v11;
  if ( a3 == 20 )
  {
    v23 = W32GetUserSessionState(v22, v21);
    CTouchProcessor::ReferenceMsgDataExternal(*(_QWORD *)(v23 + 3256), a7, 3LL, v13);
  }
  if ( !v11 )
  {
    SetWakeBit(*((_QWORD *)a2 + 12), 8256LL);
    v11 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 13);
  }
  SetWakeBit((__int64)v11, 8256LL);
  if ( v30 )
  {
    if ( v29 )
      tagObjLock::UnLockExclusive(v29);
    if ( v28 )
      tagObjLock::UnLockExclusive(v28);
    if ( v26 )
    {
      if ( v27 )
        tagDomLock::UnLockExclusive(v26);
      else
        tagDomLock::UnLockShared(v26);
    }
    if ( Base )
    {
      if ( v25 )
        tagDomLock::UnLockExclusive(Base);
      else
        tagDomLock::UnLockShared(Base);
    }
  }
  return 1LL;
}
