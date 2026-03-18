/*
 * XREFs of ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0
 * Callers:
 *     NtUserfnINDEVICECHANGE @ 0x140036160 (NtUserfnINDEVICECHANGE.c)
 *     NtUserCreateWindowEx @ 0x14004D200 (NtUserCreateWindowEx.c)
 *     xxxCancelTracking @ 0x14005359C (xxxCancelTracking.c)
 *     NtUserQueryInformationThread @ 0x1401533A0 (NtUserQueryInformationThread.c)
 *     NtUserRegisterRawInputDevices @ 0x14016FB50 (NtUserRegisterRawInputDevices.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     NtUserfnPOWERBROADCAST @ 0x1401EF9C0 (NtUserfnPOWERBROADCAST.c)
 *     NtUserfnIMECONTROL @ 0x1401F6D70 (NtUserfnIMECONTROL.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z @ 0x1402A1860 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402ACF70 (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1402AEA80 (EditionCreateWindowStationEntryPoint.c)
 *     NtUserCtxDisplayIOCtl @ 0x1402B0C40 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1402B1520 (NtUserDrawCaptionTemp.c)
 *     NtUserGetClassInfoEx @ 0x1402B2550 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1402B9700 (NtUserRegisterClassExWOW.c)
 *     NtUserResolveDesktopForWOW @ 0x1402BADC0 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1402C15D0 (NtUserfnINLPHLPSTRUCT.c)
 * Callees:
 *     <none>
 */

tagTLBLOCK::_unnamed_type_list_ *__fastcall tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_(
        tagTLBLOCK::_unnamed_type_list_ *this)
{
  tagTLBLOCK::_unnamed_type_list_ *result; // rax

  result = this;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 2) = -1LL;
  return result;
}
