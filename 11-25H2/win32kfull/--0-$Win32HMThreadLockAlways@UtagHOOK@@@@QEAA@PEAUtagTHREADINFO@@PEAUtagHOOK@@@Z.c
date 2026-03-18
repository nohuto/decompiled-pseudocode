/*
 * XREFs of ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C
 * Callers:
 *     NtUserGetWindowMinimizeRect @ 0x14002A900 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140035D3C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     NtUserTrackPopupMenuEx @ 0x14003CDB0 (NtUserTrackPopupMenuEx.c)
 *     NtUserSetScrollInfo @ 0x140050C40 (NtUserSetScrollInfo.c)
 *     NtUserCalcMenuBar @ 0x140050D90 (NtUserCalcMenuBar.c)
 *     NtUserGetUpdateRect @ 0x140050FD0 (NtUserGetUpdateRect.c)
 *     NtUserUpdateLayeredWindow @ 0x140051B10 (NtUserUpdateLayeredWindow.c)
 *     NtUserEndPaint @ 0x140052010 (NtUserEndPaint.c)
 *     NtUserBeginPaint @ 0x140052120 (NtUserBeginPaint.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     NtUserTranslateAccelerator @ 0x14016E580 (NtUserTranslateAccelerator.c)
 *     NtUserSetWindowPlacement @ 0x14016FA40 (NtUserSetWindowPlacement.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     NtUserChangeWindowMessageFilterEx @ 0x1401A35A0 (NtUserChangeWindowMessageFilterEx.c)
 *     NtUserGetScrollBarInfo @ 0x1401B8D60 (NtUserGetScrollBarInfo.c)
 *     NtUserGetMenuBarInfo @ 0x1401BC010 (NtUserGetMenuBarInfo.c)
 *     NtUserGetComboBoxInfo @ 0x1401CDE10 (NtUserGetComboBoxInfo.c)
 *     NtUserInitThreadCoreMessagingIocp2 @ 0x1401D0830 (NtUserInitThreadCoreMessagingIocp2.c)
 *     NtUserFlashWindowEx @ 0x1401FA530 (NtUserFlashWindowEx.c)
 *     NtUserGetGestureConfig @ 0x140249B60 (NtUserGetGestureConfig.c)
 *     NtUserGetTitleBarInfo @ 0x14024A5F0 (NtUserGetTitleBarInfo.c)
 *     NtUserSetGestureConfig @ 0x14024DAE0 (NtUserSetGestureConfig.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserApplyWindowAction @ 0x1402945A0 (NtUserApplyWindowAction.c)
 *     NtUserDrawCaption @ 0x140295A70 (NtUserDrawCaption.c)
 *     NtUserInjectGesture @ 0x14029A330 (NtUserInjectGesture.c)
 *     NtUserPaintMonitor @ 0x14029B850 (NtUserPaintMonitor.c)
 *     NtUserScrollWindowEx @ 0x14029D9F0 (NtUserScrollWindowEx.c)
 *     NtUserSetClassLongPtr @ 0x14029E4A0 (NtUserSetClassLongPtr.c)
 *     NtUserSetInternalWindowPos @ 0x14029F490 (NtUserSetInternalWindowPos.c)
 *     NtUserSetWindowShowState @ 0x1402A0BF0 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402A3250 (NtUserUpdateWindowTrackingInfo.c)
 *     xxxCsEvent @ 0x1402DD438 (xxxCsEvent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  *a1 = *(_QWORD *)(a2 + 456);
  *(_QWORD *)(a2 + 456) = a1;
  a1[1] = a3;
  HMLockObject(a3);
  return a1;
}
