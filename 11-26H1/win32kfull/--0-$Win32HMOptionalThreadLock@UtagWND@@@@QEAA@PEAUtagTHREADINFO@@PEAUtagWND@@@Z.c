/*
 * XREFs of ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14004D19C
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     NtUserCreateWindowEx @ 0x14004D200 (NtUserCreateWindowEx.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140050A90 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     NtUserGetMenuItemRect @ 0x14020D500 (NtUserGetMenuItemRect.c)
 *     NtUserRedrawWindow @ 0x14024C180 (NtUserRedrawWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserDrawCaptionTemp @ 0x1402B1520 (NtUserDrawCaptionTemp.c)
 *     NtUserPaintMonitor @ 0x1402B8D20 (NtUserPaintMonitor.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  *a1 = *(_QWORD *)(a2 + 448);
  *(_QWORD *)(a2 + 448) = a1;
  a1[1] = a3;
  if ( a3 )
    HMLockObject(a3);
  return a1;
}
