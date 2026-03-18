/*
 * XREFs of ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14002B2A0
 * Callers:
 *     NtUserfnIMECONTROL @ 0x14002AF60 (NtUserfnIMECONTROL.c)
 *     NtUserfnPOWERBROADCAST @ 0x14002C1D0 (NtUserfnPOWERBROADCAST.c)
 *     NtUserQueryInformationThread @ 0x14002C490 (NtUserQueryInformationThread.c)
 *     NtUserfnINDEVICECHANGE @ 0x140035260 (NtUserfnINDEVICECHANGE.c)
 *     NtUserCreateWindowEx @ 0x1400391A0 (NtUserCreateWindowEx.c)
 *     NtUserRegisterRawInputDevices @ 0x14011D7A0 (NtUserRegisterRawInputDevices.c)
 *     xxxCancelTracking @ 0x14012B1F8 (xxxCancelTracking.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z @ 0x140283050 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402919EC (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140293D10 (EditionCreateWindowStationEntryPointEx.c)
 *     NtUserCtxDisplayIOCtl @ 0x1402952D0 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x140295B70 (NtUserDrawCaptionTemp.c)
 *     NtUserGetClassInfoEx @ 0x1402970E0 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x14029C000 (NtUserRegisterClassExWOW.c)
 *     NtUserResolveDesktopForWOW @ 0x14029D7D0 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1402A39A0 (NtUserfnINLPHLPSTRUCT.c)
 * Callees:
 *     <none>
 */

tagTLBLOCK::_unnamed_type_list_ *__fastcall tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_(
        tagTLBLOCK::_unnamed_type_list_ *this)
{
  tagTLBLOCK::_unnamed_type_list_ *result; // rax

  *(_OWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 2) = -1LL;
  return result;
}
