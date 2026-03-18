/*
 * XREFs of ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC
 * Callers:
 *     NtUserfnINDEVICECHANGE @ 0x140036160 (NtUserfnINDEVICECHANGE.c)
 *     NtUserCreateWindowEx @ 0x14004D200 (NtUserCreateWindowEx.c)
 *     zzzSetDesktop @ 0x140059C20 (zzzSetDesktop.c)
 *     NtUserQueryInformationThread @ 0x1401533A0 (NtUserQueryInformationThread.c)
 *     NtUserRegisterRawInputDevices @ 0x14016FB50 (NtUserRegisterRawInputDevices.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14017AF60 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserfnPOWERBROADCAST @ 0x1401EF9C0 (NtUserfnPOWERBROADCAST.c)
 *     NtUserfnIMECONTROL @ 0x1401F6D70 (NtUserfnIMECONTROL.c)
 *     xxxValidateClassAndSize @ 0x1402001D4 (xxxValidateClassAndSize.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1402AEA80 (EditionCreateWindowStationEntryPoint.c)
 *     NtUserCtxDisplayIOCtl @ 0x1402B0C40 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1402B1520 (NtUserDrawCaptionTemp.c)
 *     NtUserGetClassInfoEx @ 0x1402B2550 (NtUserGetClassInfoEx.c)
 *     NtUserGetClipboardData @ 0x1402B27A0 (NtUserGetClipboardData.c)
 *     NtUserRegisterClassExWOW @ 0x1402B9700 (NtUserRegisterClassExWOW.c)
 *     NtUserResolveDesktopForWOW @ 0x1402BADC0 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1402C15D0 (NtUserfnINLPHLPSTRUCT.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
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
