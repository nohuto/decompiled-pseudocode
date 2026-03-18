/*
 * XREFs of FindTimer @ 0x14001A310
 * Callers:
 *     NtUserKillTimer @ 0x140019980 (NtUserKillTimer.c)
 *     InternalSetTimer @ 0x140019C44 (InternalSetTimer.c)
 *     xxxCancelMouseMoveTracking @ 0x140021AE8 (xxxCancelMouseMoveTracking.c)
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     MNAnimate @ 0x140045C18 (MNAnimate.c)
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140158894 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x140158AD8 (zzzInternalDestroyCaret.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x14015DAC0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x14015DD4C (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x14019EF1C (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     TrackMouseEvent @ 0x1401A5CD4 (TrackMouseEvent.c)
 *     StopFade @ 0x1401F4CB0 (StopFade.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     EditionKillAccessibilityTimer @ 0x140221FB0 (EditionKillAccessibilityTimer.c)
 *     HandleAsyncResizeComplete @ 0x14022CBAC (HandleAsyncResizeComplete.c)
 *     SetMouseTrails @ 0x140241038 (SetMouseTrails.c)
 *     xxxSystemTimerProc @ 0x140246950 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x14025D270 (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     xxxTrackMouseMove @ 0x14025D2EC (xxxTrackMouseMove.c)
 *     HideAutorunCursor @ 0x140273F80 (HideAutorunCursor.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DecrementCompositedCount @ 0x14028796C (DecrementCompositedCount.c)
 *     NtUserKillSystemTimer @ 0x14029B000 (NtUserKillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402A7F00 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402AF590 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BEF74 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BF250 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     _lambda_49ba710cdad7805a04ef9893981131b8_::operator() @ 0x1402DB5EC (_lambda_49ba710cdad7805a04ef9893981131b8_--operator().c)
 *     ?TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402DD0F0 (-TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402DD190 (-TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1402E85E0 (xxxEndScroll.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402ED240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402ED3DC (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x140246670 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  _QWORD *v7; // rbx
  unsigned int v8; // r15d
  _QWORD **v11; // r12
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v15; // rcx
  __int64 result; // rax

  v5 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v11 = (_QWORD **)(W32GetUserSessionState() + 16LL * (((_BYTE)a2 + BYTE1(a1)) & 0x3F) + 61656);
  v12 = *v11;
  if ( *v11 != v11 )
  {
    while ( 1 )
    {
      v7 = v12 - 15;
      if ( *(v12 - 2) == a1 && v7[14] == a2 )
      {
        v13 = *((unsigned int *)v7 + 12);
        if ( ((a3 ^ *((_BYTE *)v7 + 48)) & 6) == 0 && (v13 & 0x1000) == 0 )
        {
          if ( (v13 & 0x40) != 0 )
            break;
          CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v13);
          v15 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
            v15 = 0LL;
          if ( v15 == *(_QWORD **)(v7[3] + 464LL) || !a1 && ((*((_BYTE *)v7 + 48) ^ a3) & 4) == 0 )
            break;
        }
      }
      v12 = (_QWORD *)*v12;
      if ( v12 == v11 )
        goto LABEL_18;
    }
    if ( a4 )
    {
      FreeTimer((struct _HEAD *)(v12 - 15));
      v7 = 0LL;
    }
    v8 = 1;
  }
LABEL_18:
  result = v8;
  if ( a5 )
  {
    if ( v8 == 1 )
      v5 = v7;
    *a5 = v5;
  }
  return result;
}
