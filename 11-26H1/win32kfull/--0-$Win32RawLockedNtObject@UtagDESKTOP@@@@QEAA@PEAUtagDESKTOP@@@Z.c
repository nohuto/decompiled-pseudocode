/*
 * XREFs of ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     zzzSetDesktop @ 0x140059C20 (zzzSetDesktop.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14015B4C0 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14017AF60 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxSetClipboardViewer @ 0x1401AF468 (xxxSetClipboardViewer.c)
 *     xxxCloseClipboard @ 0x1401B02A0 (xxxCloseClipboard.c)
 *     RemoteDisableScreen @ 0x1401B25E8 (RemoteDisableScreen.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x140218948 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendMinRectMessages @ 0x14021D3B4 (xxxSendMinRectMessages.c)
 *     xxxHardErrorControl @ 0x140244D3C (xxxHardErrorControl.c)
 *     NtUserSwitchDesktop @ 0x14025C610 (NtUserSwitchDesktop.c)
 *     RemoteRedrawScreen @ 0x14026EB0C (RemoteRedrawScreen.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14029419C (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     NtUserGetClipboardData @ 0x1402B27A0 (NtUserGetClipboardData.c)
 *     xxxChangeClipboardChain @ 0x1402CF520 (xxxChangeClipboardChain.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(_QWORD *a1, void *a2)
{
  struct tagTHREADINFO *v4; // rax

  v4 = PtiCurrent((__int64)a1);
  *a1 = *((_QWORD *)v4 + 47);
  *((_QWORD *)v4 + 47) = a1;
  a1[2] = UserDereferenceObject;
  a1[1] = a2;
  if ( a2 )
    ObfReferenceObject(a2);
  return a1;
}
