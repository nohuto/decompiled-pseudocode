/*
 * XREFs of ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14002D4E4
 * Callers:
 *     NtUserRedrawWindow @ 0x14002D3B0 (NtUserRedrawWindow.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140035D3C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserCreateWindowEx @ 0x1400391A0 (NtUserCreateWindowEx.c)
 *     NtUserGetMenuItemRect @ 0x14003D5F0 (NtUserGetMenuItemRect.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserDrawCaptionTemp @ 0x140295B70 (NtUserDrawCaptionTemp.c)
 *     NtUserPaintMonitor @ 0x14029B850 (NtUserPaintMonitor.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  *a1 = *(_QWORD *)(a2 + 456);
  *(_QWORD *)(a2 + 456) = a1;
  a1[1] = a3;
  if ( a3 )
    HMLockObject(a3);
  return a1;
}
