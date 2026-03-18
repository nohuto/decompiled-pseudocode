/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x140030264
 * Callers:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x140021D08 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x140025E98 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSendMinRectMessages @ 0x14002ADF4 (xxxSendMinRectMessages.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140030200 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400538A8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x140111A3C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140129E38 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14014B994 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     xxxTranslateAccelerator @ 0x14016E680 (xxxTranslateAccelerator.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxSendMessageEx @ 0x140182270 (xxxSendMessageEx.c)
 *     xxxSendSizeMessage @ 0x1401A8EA0 (xxxSendSizeMessage.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401BAE34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1401BAF84 (xxxHandleNCMouseGuys.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1401BFCF0 (xxxPerformTargetingWithinPwnd.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1401C276C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1401DFB58 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1401F5CEC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxHandleWindowPosChanged @ 0x1401F8394 (xxxHandleWindowPosChanged.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x140211BF8 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     xxxSendHelpMessage @ 0x140225E8C (xxxSendHelpMessage.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x14022F508 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1402340C4 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023A4E0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14023F260 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14024092C (xxxAppAdjustDpiCandidateRect.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14025388C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     xxxMNStartMenuState @ 0x140256734 (xxxMNStartMenuState.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140259D40 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140278CB0 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x140282DB8 (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140289A34 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA91C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 *     xxxSendMessageFF @ 0x1402B32C0 (xxxSendMessageFF.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1402B4598 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BEF74 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CE4F4 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxInterceptActivate@WindowActions@@YAXPEAUtagWND@@_N1@Z @ 0x1402CED30 (-xxxInterceptActivate@WindowActions@@YAXPEAUtagWND@@_N1@Z.c)
 *     ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CF088 (-xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@.c)
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CF388 (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CFAB0 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402D02DC (-xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402D042C (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402D0B40 (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402D0E60 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     ?xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402D1204 (-xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402D12FC (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@WindowArrangement@@K@Z @ 0x1402D19CC (-xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOp.c)
 *     ?xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z @ 0x1402D1C6C (-xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z.c)
 *     ?xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z @ 0x1402D1FC8 (-xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DCE18 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 *     xxxCsEvent @ 0x1402DD438 (xxxCsEvent.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402E0EFC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E35E8 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x14001DB00 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1400C4340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400C9B3C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     _FreeTouchInputInfo @ 0x1400CABF0 (_FreeTouchInputInfo.c)
 *     xxxBroadcastMessage @ 0x1401293B0 (xxxBroadcastMessage.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     FreeDelayedHooks @ 0x14012D3F0 (FreeDelayedHooks.c)
 *     ?ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z @ 0x14012D4C0 (-ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z.c)
 *     IsMiPPointerMessage @ 0x140138FC0 (IsMiPPointerMessage.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14014BCD0 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     IsMiPEnabledForWindow @ 0x14015DEA0 (IsMiPEnabledForWindow.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxDesktopWndProc @ 0x1401847E0 (xxxDesktopWndProc.c)
 *     ??1xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1401D7570 (--1xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ.c)
 *     ValidateDDEConvPair @ 0x1401DCF30 (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x140256024 (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x1402694A0 (_FreeGestureInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z @ 0x1402745CC (-Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x140275110 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1402B2E74 (--0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ.c)
 *     xxxEventWndProc @ 0x1402DD6A0 (xxxEventWndProc.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall xxxSendTransformableMessageTimeout(
        struct tagTHREADINFO **a1,
        __int64 a2,
        unsigned __int64 a3,
        struct tagDRAWITEMSTRUCT *a4,
        unsigned int a5,
        unsigned int Next_high,
        unsigned __int64 *a7,
        int a8,
        int a9)
{
  unsigned int v10; // r14d
  unsigned __int64 *v12; // r15
  __int64 *v13; // rdi
  unsigned int v14; // r12d
  ULONG_PTR v16; // r12
  struct tagTHREADINFO *v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserSessionState; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 *v26; // rax
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rdx
  struct tagHIDDATA *v30; // rax
  unsigned __int64 v31; // rsi
  char v32[8]; // [rsp+50h] [rbp-F8h] BYREF
  struct tagTHREADINFO *v33; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v34; // [rsp+60h] [rbp-E8h]
  unsigned __int64 LowLimit; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int64 v36; // [rsp+70h] [rbp-D8h]
  __int64 v37[2]; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+88h] [rbp-C0h]
  __int128 v39; // [rsp+98h] [rbp-B0h]
  unsigned __int64 HighLimit; // [rsp+A8h] [rbp-A0h] BYREF
  int v41; // [rsp+B0h] [rbp-98h]
  _QWORD v42[2]; // [rsp+B8h] [rbp-90h] BYREF
  _BYTE v43[56]; // [rsp+C8h] [rbp-80h] BYREF

  v34 = a3;
  v10 = a2;
  v12 = a7;
  v42[1] = a1;
  v13 = 0LL;
  LowLimit = 0LL;
  v42[0] = 0LL;
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a1 != (struct tagTHREADINFO **)-1LL )
  {
    v16 = 0LL;
    v36 = 0LL;
    v17 = 0LL;
    if ( a1 )
      v17 = *a1;
    HIDWORD(v33) = HIDWORD(v17);
    v18 = (unsigned __int16)v17;
    LODWORD(v33) = (unsigned __int16)v17;
    v41 = (unsigned __int16)v17;
    v20 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
    v36 = v18;
    if ( v18 >= *(_QWORD *)(v20 + 8)
      || (UserSessionState = W32GetUserSessionState(v20, v19),
          v16 = *(_QWORD *)(UserSessionState + 19888)
              + (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v23, v22) + 19896) * (_DWORD)v33),
          *(struct tagTHREADINFO ***)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 19832) + 40 * v36) != a1)
      || *(_BYTE *)(v16 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v16, 1uLL);
    }
    if ( v10 - 992 > 8 )
    {
      if ( (unsigned int)IsMiPPointerMessage(v10, v34) && !(unsigned int)IsMiPEnabledForWindow(a1) )
      {
        LODWORD(v33) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1600LL);
        return 0LL;
      }
    }
    else
    {
      if ( !(unsigned int)xxxDDETrackSendHook((struct tagWND *)a1) )
        return 0LL;
      if ( v10 == 992 && HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) )
      {
        a5 |= 2u;
        Next_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next);
        v26 = v42;
        if ( a7 )
          v26 = a7;
        v12 = v26;
      }
      v27 = ValidateDDEConvPair(v34, a1);
      v28 = 1;
      if ( !v27 )
        v28 = a8;
      a8 = v28;
    }
    v33 = PtiCurrent();
    if ( !(unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() && v10 == 255 )
    {
      LOBYTE(v29) = 18;
      v30 = (struct tagHIDDATA *)HMValidateHandleNoSecure(a4, v29);
      if ( v30 )
        Old_TrySmuggleHidData(a1[2], v30, 0);
    }
    if ( v33 == a1[2] )
    {
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v43);
      if ( ShouldCallWndProcHook(v33, 0x20u, v10, (struct tagWND *)a1) )
      {
        *((_QWORD *)&v38 + 1) = *a1;
        LODWORD(v38) = v10;
        v37[1] = v34;
        v37[0] = (__int64)a4;
        *(_QWORD *)&v39 = 0LL;
        xxxCallHook(0, 0LL, (__int64)v37, 4);
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v43);
      FreeDelayedHooks();
      if ( (*((_BYTE *)a1[5] + 18) & 4) != 0 )
      {
        HighLimit = 0LL;
        LowLimit = 0LL;
        IoGetStackLimits(&LowLimit, &HighLimit);
        if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
          return 0LL;
        v36 = *((_QWORD *)a1[5] + 15);
        if ( v36 >= 4 )
          return 0LL;
        xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired((xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *)v32);
        v31 = ((__int64 (__fastcall *)(struct tagTHREADINFO **, _QWORD, unsigned __int64, struct tagDRAWITEMSTRUCT *))(&gServerHandlers)[v36])(
                a1,
                v10,
                v34,
                a4);
        LowLimit = v31;
        xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::~xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired((xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *)v32);
        if ( !v12 )
          return v31;
      }
      else
      {
        xxxSendMessageToClient((struct tagWND *)a1, v10, v34, (__int64)a4, 0LL, 0, (__int64 *)&LowLimit);
        SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v43);
        if ( ShouldCallWndProcHook(v33, 0x2000u, v10, (struct tagWND *)a1) )
        {
          v39 = (unsigned __int64)*a1;
          DWORD2(v38) = v10;
          *(_QWORD *)&v38 = v34;
          v37[1] = (__int64)a4;
          v37[0] = LowLimit;
          xxxCallHook(0, 0LL, (__int64)v37, 12);
        }
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v43);
        FreeDelayedHooks();
        if ( v10 == 576 )
        {
          FreeTouchInputInfo(a4, 1LL);
        }
        else if ( v10 == 281 )
        {
          FreeGestureInfo(a4, 1LL);
        }
        if ( !v12 )
          return LowLimit;
      }
      *v12 = LowLimit;
      return 1LL;
    }
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      return xxxDefWindowProc((struct tagWND *)a1, v10, (HWND)v34, a4);
    if ( !v12 )
      return xxxInterSendMsgEx(a1, v10, v34, a4, 1, a1[2], v13, a8, a9);
    if ( (a5 & 2) == 0 || !IsThreadHung(a1[2]) )
    {
      LODWORD(v37[0]) = 2;
      *(_QWORD *)&v39 = __PAIR64__(Next_high, a5);
      *((_QWORD *)&v39 + 1) = v12;
      v13 = v37;
      return xxxInterSendMsgEx(a1, v10, v34, a4, 1, a1[2], v13, a8, a9);
    }
    return 0LL;
  }
  v14 = 0;
  if ( a7 )
  {
    v14 = 4;
    v37[0] = __PAIR64__(Next_high, a5);
    v37[1] = (__int64)a7;
    v13 = v37;
  }
  return (int)xxxBroadcastMessage(-1, a2, a3, (_DWORD)a4, v14, (union tagBROADCASTMSG *)v13, a8);
}
