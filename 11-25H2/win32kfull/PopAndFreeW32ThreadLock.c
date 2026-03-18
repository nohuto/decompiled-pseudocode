/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x14002C740
 * Callers:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14002A200 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxSendMinRectMessages @ 0x14002ADF4 (xxxSendMinRectMessages.c)
 *     xxxPSMGetTextExtent @ 0x14002B2D0 (xxxPSMGetTextExtent.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14002B4FC (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxCloseClipboard @ 0x14002B910 (xxxCloseClipboard.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x14002C3B4 (-UnlockWorker@-$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagIMEINFOEX@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x14002C41C (-UnlockWorker@-$Win32RawLockedItemBase@UtagIMEINFOEX@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14002C6B8 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagWINDOWSTATION@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x14002C6E0 (-UnlockWorker@-$Win32RawLockedItemBase@UtagWINDOWSTATION@@$1-UserDereferenceObject@@YAXPEAX@Z$00.c)
 *     xxxDoPaint @ 0x14005138C (xxxDoPaint.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 *     xxxSetClipboardViewer @ 0x140110CB8 (xxxSetClipboardViewer.c)
 *     RemoteRedrawScreen @ 0x14012515C (RemoteRedrawScreen.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x140127FDC (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140128C2C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageBSM @ 0x140128DF0 (xxxSendMessageBSM.c)
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x140148224 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x14019E848 (-xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401ADA18 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1401BF8B8 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4Win.c)
 *     ??1?$Win32RawOptionalLockedItem@X$0A@@@QEAA@XZ @ 0x1401CDB3C (--1-$Win32RawOptionalLockedItem@X$0A@@@QEAA@XZ.c)
 *     xxxEmptyClipboard @ 0x1401EF1DC (xxxEmptyClipboard.c)
 *     xxxSwitchDesktopWithFade @ 0x1401FCFD0 (xxxSwitchDesktopWithFade.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 *     xxxHardErrorControl @ 0x14021DD80 (xxxHardErrorControl.c)
 *     RemoteDisableScreen @ 0x14022C670 (RemoteDisableScreen.c)
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14022E674 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x140231DEC (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@X$0A@$00$00$00@@AEAAX_N0@Z @ 0x140231F48 (-UnlockWorker@-$Win32RawLockedItemBase@X$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserSwitchDesktop @ 0x14024F070 (NtUserSwitchDesktop.c)
 *     EditionHandleAndPostKeyEvent @ 0x14024FA10 (EditionHandleAndPostKeyEvent.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402599A0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     xxxTrackMouseMove @ 0x14025D2EC (xxxTrackMouseMove.c)
 *     xxxSetShellWindow @ 0x14025E314 (xxxSetShellWindow.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 *     ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x14026C044 (-xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026CA20 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x140278994 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x14027C658 (xxxGetDeviceChangeInfo.c)
 *     xxxDDETrackWindowDying @ 0x1402B2AA4 (xxxDDETrackWindowDying.c)
 *     xxxChangeClipboardChain @ 0x1402B4A8C (xxxChangeClipboardChain.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CE998 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     xxxMessageEvent @ 0x1402DD790 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1402E1078 (xxxDragObject.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v4 + 384) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
