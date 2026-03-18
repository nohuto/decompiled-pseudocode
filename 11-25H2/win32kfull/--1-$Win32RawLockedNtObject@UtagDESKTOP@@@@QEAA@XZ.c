/*
 * XREFs of ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14002C6B8
 * Callers:
 *     NtUserfnIMECONTROL @ 0x14002AF60 (NtUserfnIMECONTROL.c)
 *     NtUserfnPOWERBROADCAST @ 0x14002C1D0 (NtUserfnPOWERBROADCAST.c)
 *     NtUserQueryInformationThread @ 0x14002C490 (NtUserQueryInformationThread.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14002CC5C (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserfnINDEVICECHANGE @ 0x140035260 (NtUserfnINDEVICECHANGE.c)
 *     NtUserCreateWindowEx @ 0x1400391A0 (NtUserCreateWindowEx.c)
 *     NtUserRegisterRawInputDevices @ 0x14011D7A0 (NtUserRegisterRawInputDevices.c)
 *     zzzSetDesktop @ 0x140244CA0 (zzzSetDesktop.c)
 *     NtUserGetClipboardData @ 0x140248F00 (NtUserGetClipboardData.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserCtxDisplayIOCtl @ 0x1402952D0 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x140295B70 (NtUserDrawCaptionTemp.c)
 *     NtUserGetClassInfoEx @ 0x1402970E0 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x14029C000 (NtUserRegisterClassExWOW.c)
 *     NtUserResolveDesktopForWOW @ 0x14029D7D0 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1402A39A0 (NtUserfnINLPHLPSTRUCT.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    result = PopAndFreeW32ThreadLock(a1);
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  return result;
}
