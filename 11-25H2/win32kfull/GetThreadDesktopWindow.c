/*
 * XREFs of GetThreadDesktopWindow @ 0x1401785A0
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     GetLastTopMostWindow @ 0x140065958 (GetLastTopMostWindow.c)
 *     _SelectPalette @ 0x14018BD50 (_SelectPalette.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1401A77E4 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1401AAFFC (fnHkINLPCBTCREATESTRUCT.c)
 *     NtUserBuildHwndList @ 0x140248160 (NtUserBuildHwndList.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     RemoteRedrawRectangle @ 0x1402AF088 (RemoteRedrawRectangle.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C2E94 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1402DF754 (xxxDrawAnimatedRects.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rax

  v2 = 0LL;
  if ( a1
    || (CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(0LL, a2)) != 0LL
    && (a1 = *CurrentThreadNonPaged) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 504);
    if ( v4 )
      return *(_QWORD *)(v4 + 24);
  }
  return v2;
}
