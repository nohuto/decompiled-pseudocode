/*
 * XREFs of ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5D2C (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1401E8748 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     NtUserLayoutCompleted @ 0x1401F7530 (NtUserLayoutCompleted.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1401FD9F8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14021CBCC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x140295ED8 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?AltF4Callback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x14029B000 (-AltF4Callback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x140010AC0 (PostIAMShellHookMessageEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall PostIAMShellHookMessage(unsigned int a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax

  v4 = PtiCurrent();
  PostIAMShellHookMessageEx(*((_QWORD *)v4 + 61), a1, a2);
}
