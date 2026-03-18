/*
 * XREFs of ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600
 * Callers:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x14004FC10 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008A10C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x14008A1B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14008D494 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxTimersProc @ 0x140098800 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x14009A98C (xxxTimersProc_Old.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E224 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x14012B02C (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     EditionPointerParentNotify @ 0x140137CA0 (EditionPointerParentNotify.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x140151A28 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140296A44 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNSetTop @ 0x1402DA3DC (xxxMNSetTop.c)
 *     xxxDragObject @ 0x1402F2554 (xxxDragObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32HM_ExchangeThreadLock<1>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    HMLockObject(a1);
  if ( v2 )
    return HMUnlockObject(v2);
  else
    return 0LL;
}
