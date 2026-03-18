/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC
 * Callers:
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1400895D8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     xxxLW_LoadFonts @ 0x1400CC240 (xxxLW_LoadFonts.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 *     xxxSwitchDesktopWithFade @ 0x1401B2760 (xxxSwitchDesktopWithFade.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     xxxRemoteDisconnect @ 0x1401B3938 (xxxRemoteDisconnect.c)
 *     MagGetLensContextInformation @ 0x1401EA86C (MagGetLensContextInformation.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1402330A4 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     xxxDesktopPaintCallback @ 0x14025A350 (xxxDesktopPaintCallback.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1402A023C (xxxGetDeviceChangeInfo.c)
 *     xxxOldMessageBeep @ 0x1402CB688 (xxxOldMessageBeep.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402D1ADC (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 *     ClientNoMemoryPopup @ 0x1402D508C (ClientNoMemoryPopup.c)
 *     xxxUserModeCallback @ 0x1402D8670 (xxxUserModeCallback.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxActivateDebugger @ 0x1402F0D94 (xxxActivateDebugger.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FCFA4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1402FF5A0 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2)
{
  __int64 UserSessionState; // rax

  *(_BYTE *)this = 0;
  if ( (_BYTE)a2 )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
    {
      *(_BYTE *)this = 1;
      LeaveMitRitHazardCrit();
    }
  }
  UserSessionSwitchLeaveCrit(this);
  return this;
}
