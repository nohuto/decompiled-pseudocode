/*
 * XREFs of ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0
 * Callers:
 *     xxxSendMinRectMessages @ 0x14002ADF4 (xxxSendMinRectMessages.c)
 *     xxxCloseClipboard @ 0x14002B910 (xxxCloseClipboard.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14002CC5C (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxSetClipboardViewer @ 0x140110CB8 (xxxSetClipboardViewer.c)
 *     RemoteRedrawScreen @ 0x14012515C (RemoteRedrawScreen.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     xxxHardErrorControl @ 0x14021DD80 (xxxHardErrorControl.c)
 *     RemoteDisableScreen @ 0x14022C670 (RemoteDisableScreen.c)
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14022E674 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     zzzSetDesktop @ 0x140244CA0 (zzzSetDesktop.c)
 *     NtUserGetClipboardData @ 0x140248F00 (NtUserGetClipboardData.c)
 *     NtUserSwitchDesktop @ 0x14024F070 (NtUserSwitchDesktop.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402599A0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSetShellWindow @ 0x14025E314 (xxxSetShellWindow.c)
 *     ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x14026C044 (-xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026CA20 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1402B4A8C (xxxChangeClipboardChain.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(_QWORD *a1, void *a2)
{
  struct tagTHREADINFO *v4; // rax

  v4 = PtiCurrent();
  *a1 = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = a1;
  a1[2] = UserDereferenceObject;
  a1[1] = a2;
  if ( a2 )
    ObfReferenceObject(a2);
  return a1;
}
