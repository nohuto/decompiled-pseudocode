/*
 * XREFs of xxxReleaseCapture @ 0x14006247C
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     NtUserReleaseCapture @ 0x140062440 (NtUserReleaseCapture.c)
 *     xxxIsDragging @ 0x1401171C8 (xxxIsDragging.c)
 *     xxxDCETrackCaptionButton @ 0x140117458 (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x1401192EC (xxxTrackCaptionButton.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x14022F508 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140259C18 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     xxxMNReleaseCapture @ 0x14026AD74 (xxxMNReleaseCapture.c)
 *     xxxDragObject @ 0x1402E1078 (xxxDragObject.c)
 *     xxxEndScroll @ 0x1402E85E0 (xxxEndScroll.c)
 *     xxxHelpLoop @ 0x1402EB044 (xxxHelpLoop.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x140218258 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall xxxReleaseCapture(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  struct tagTHREADINFO *v4; // rbx
  __int64 UserSessionState; // rax
  struct tagRECT *v7; // rdx
  struct MOVESIZEDATA *v8; // rcx

  v2 = PtiCurrent(a1, a2);
  v4 = v2;
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 59) + 412LL) & 0x100000) != 0 )
    return 0LL;
  if ( *((_QWORD *)v2 + 89) && (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 132, 0, 0) & 0x10) != 0 )
  {
    UserSessionState = W32GetUserSessionState(0LL, v3);
    bSetDevDragRect(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
    v8 = (struct MOVESIZEDATA *)*((_QWORD *)v4 + 89);
    if ( (*((_DWORD *)v8 + 50) & 0x20) == 0 )
      xxxDrawDragRect(v8, v7, 2u);
    _InterlockedAnd((volatile signed __int32 *)v4 + 132, 0xFFFF7FEF);
  }
  xxxCapture(v4, 0LL, 0);
  return 1LL;
}
