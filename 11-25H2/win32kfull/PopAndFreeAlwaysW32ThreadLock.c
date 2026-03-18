/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4
 * Callers:
 *     xxxClientExtTextOutW @ 0x14002A440 (xxxClientExtTextOutW.c)
 *     ClientGetListboxString @ 0x140061F10 (ClientGetListboxString.c)
 *     SfnINSTRING @ 0x140062E70 (SfnINSTRING.c)
 *     xxxClientLpkDrawTextEx @ 0x1400C1458 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x1400C1B54 (xxxClientGetTextExtentPointW.c)
 *     ClientLoadLibrary @ 0x1400C82EC (ClientLoadLibrary.c)
 *     xxxClientLoadImage @ 0x1401244C4 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1401247A8 (xxxClientExpandStringW.c)
 *     xxxClientAddFontResourceW @ 0x140128360 (xxxClientAddFontResourceW.c)
 *     SfnCOPYDATA @ 0x1401306F0 (SfnCOPYDATA.c)
 *     UserOnGreTextReady @ 0x140146468 (UserOnGreTextReady.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x140148224 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     xxxInitWindowStation @ 0x1401484D8 (xxxInitWindowStation.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140148E8C (--1-$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     xxxClientLoadStringW @ 0x140148EF0 (xxxClientLoadStringW.c)
 *     SfnINSTRINGNULL @ 0x140170AC0 (SfnINSTRINGNULL.c)
 *     SfnINDEVICECHANGE @ 0x140176990 (SfnINDEVICECHANGE.c)
 *     SfnOUTSTRING @ 0x1401791B0 (SfnOUTSTRING.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x14018A360 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnPOWERBROADCAST @ 0x1401A10A0 (SfnPOWERBROADCAST.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1401AAFFC (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientLoadMenu @ 0x1401B2838 (xxxClientLoadMenu.c)
 *     NtUserfnDDEINIT @ 0x1401E2A50 (NtUserfnDDEINIT.c)
 *     SfnIMECONTROL @ 0x1401EC740 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1401FA710 (SfnINCNTOUTSTRING.c)
 *     xxxWaitForInputIdle @ 0x1401FAC5C (xxxWaitForInputIdle.c)
 *     xxxSetProcessWindowStation @ 0x140207710 (xxxSetProcessWindowStation.c)
 *     SfnCOPYGLOBALDATA @ 0x140209C80 (SfnCOPYGLOBALDATA.c)
 *     SfnTOUCHHITTESTING @ 0x14020AC30 (SfnTOUCHHITTESTING.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x140210940 (SfnINLPHELPINFOSTRUCT.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 *     PrepareForLogoff @ 0x14021612C (PrepareForLogoff.c)
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x140219D50 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     SfnINLPCREATESTRUCT @ 0x140258460 (SfnINLPCREATESTRUCT.c)
 *     xxxGetDeviceChangeInfo @ 0x14027C658 (xxxGetDeviceChangeInfo.c)
 *     ClientEventCallback @ 0x1402BA094 (ClientEventCallback.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402BA540 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHLPSTRUCT @ 0x1402BA9C0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402BAD10 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402BBDF0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1402BC660 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402BCA00 (SfnPOUTLPINT.c)
 *     xxxClientFindMnemChar @ 0x1402BDAEC (xxxClientFindMnemChar.c)
 *     xxxClientPSMTextOut @ 0x1402BE1C0 (xxxClientPSMTextOut.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v4 = 0LL;
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  *(_QWORD *)(v4 + 384) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
