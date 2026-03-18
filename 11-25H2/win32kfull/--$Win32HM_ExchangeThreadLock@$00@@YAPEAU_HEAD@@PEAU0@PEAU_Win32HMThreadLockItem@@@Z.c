/*
 * XREFs of ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410
 * Callers:
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14002A84C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14004F7CC (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x140051900 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x140052AF4 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     EditionPointerParentNotify @ 0x140136C20 (EditionPointerParentNotify.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140187CB8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1401C1988 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1401D16C0 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14023F260 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxTimersProc_Old @ 0x14028C0D0 (xxxTimersProc_Old.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNSetTop @ 0x1402C0490 (xxxMNSetTop.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1402C9B7C (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     xxxDragObject @ 0x1402E1078 (xxxDragObject.c)
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
