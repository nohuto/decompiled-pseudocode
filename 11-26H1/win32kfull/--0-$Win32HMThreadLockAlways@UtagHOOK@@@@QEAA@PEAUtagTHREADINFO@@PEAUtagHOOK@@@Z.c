/*
 * XREFs of ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x14000D710 (NtUserGetMenuBarInfo.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     NtUserScrollWindowEx @ 0x14003E4E0 (NtUserScrollWindowEx.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140050A90 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     NtUserChangeWindowMessageFilterEx @ 0x14012A3A0 (NtUserChangeWindowMessageFilterEx.c)
 *     NtUserEndPaint @ 0x14012A570 (NtUserEndPaint.c)
 *     NtUserBeginPaint @ 0x14012A670 (NtUserBeginPaint.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     NtUserSetClassLongPtr @ 0x140151C30 (NtUserSetClassLongPtr.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     NtUserGetGestureConfig @ 0x1401E45C0 (NtUserGetGestureConfig.c)
 *     NtUserSetGestureConfig @ 0x1401E47F0 (NtUserSetGestureConfig.c)
 *     NtUserInitThreadCoreMessagingIocp2 @ 0x1402034A0 (NtUserInitThreadCoreMessagingIocp2.c)
 *     NtUserFlashWindowEx @ 0x14022EA40 (NtUserFlashWindowEx.c)
 *     NtUserUpdateLayeredWindow @ 0x140234060 (NtUserUpdateLayeredWindow.c)
 *     NtUserCalcMenuBar @ 0x14025DF00 (NtUserCalcMenuBar.c)
 *     NtUserGetUpdateRect @ 0x14025E9B0 (NtUserGetUpdateRect.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserApplyWindowAction @ 0x1402AF630 (NtUserApplyWindowAction.c)
 *     NtUserDrawCaption @ 0x1402B1410 (NtUserDrawCaption.c)
 *     NtUserGetComboBoxInfo @ 0x1402B2F50 (NtUserGetComboBoxInfo.c)
 *     NtUserGetScrollBarInfo @ 0x1402B4840 (NtUserGetScrollBarInfo.c)
 *     NtUserGetTitleBarInfo @ 0x1402B4CA0 (NtUserGetTitleBarInfo.c)
 *     NtUserGetWindowMinimizeRect @ 0x1402B55B0 (NtUserGetWindowMinimizeRect.c)
 *     NtUserInjectGesture @ 0x1402B6830 (NtUserInjectGesture.c)
 *     NtUserPaintMonitor @ 0x1402B8D20 (NtUserPaintMonitor.c)
 *     NtUserSetInternalWindowPos @ 0x1402BCF60 (NtUserSetInternalWindowPos.c)
 *     NtUserSetScrollInfo @ 0x1402BDBB0 (NtUserSetScrollInfo.c)
 *     NtUserSetWindowPlacement @ 0x1402BE650 (NtUserSetWindowPlacement.c)
 *     NtUserSetWindowShowState @ 0x1402BE910 (NtUserSetWindowShowState.c)
 *     NtUserTrackPopupMenuEx @ 0x1402C0470 (NtUserTrackPopupMenuEx.c)
 *     NtUserTranslateAccelerator @ 0x1402C0630 (NtUserTranslateAccelerator.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402C0AF0 (NtUserUpdateWindowTrackingInfo.c)
 *     xxxCsEvent @ 0x1402EF878 (xxxCsEvent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  *a1 = *(_QWORD *)(a2 + 448);
  *(_QWORD *)(a2 + 448) = a1;
  a1[1] = a3;
  HMLockObject(a3);
  return a1;
}
