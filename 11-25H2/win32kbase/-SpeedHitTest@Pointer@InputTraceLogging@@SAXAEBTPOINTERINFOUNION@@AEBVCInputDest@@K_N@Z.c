/*
 * XREFs of ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1400B72F0
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x14020D188 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@34AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@444465@Z @ 0x140008034 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U-$_tlgWrapSz@D@@U2@U-$_tlgWrap.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x1400B7BF4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1400B8758 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1400B8770 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1400BA334 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::SpeedHitTest(
        const union POINTERINFOUNION *a1,
        const struct CInputDest *a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // di
  int v7; // r14d
  CInputDest *v8; // rcx
  struct tagWND *UserWindow; // rax
  __int64 WindowDetails; // rax
  __int128 v11; // xmm1
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // [rsp+98h] [rbp-80h] BYREF
  int v18; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v19; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+A4h] [rbp-74h] BYREF
  __int64 v21; // [rsp+ACh] [rbp-6Ch] BYREF
  __int128 v22; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-48h] BYREF
  const WCHAR *WindowHandle; // [rsp+D8h] [rbp-40h] BYREF
  void *v26; // [rsp+E0h] [rbp-38h] BYREF
  __int128 v27; // [rsp+E8h] [rbp-30h]
  __int128 v28; // [rsp+F8h] [rbp-20h]
  __int64 v29; // [rsp+108h] [rbp-10h]
  _BYTE v30[40]; // [rsp+110h] [rbp-8h] BYREF

  v6 = a4;
  v7 = a3;
  if ( (unsigned __int8)InputTraceLogging::Enabled(32LL, 0LL, a3, a4) )
  {
    CInputDest::GetBaseWindow(a2);
    UserWindow = CInputDest::GetUserWindow(v8);
    WindowDetails = InputTraceLogging::GetWindowDetails(v30, UserWindow);
    v11 = *(_OWORD *)(WindowDetails + 16);
    v27 = *(_OWORD *)WindowDetails;
    v29 = *(_QWORD *)(WindowDetails + 32);
    v28 = v11;
    if ( v6 )
    {
      if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 32LL) )
      {
        v22 = v27;
        v17 = HIDWORD(v29);
        v18 = v29;
        v19 = HIDWORD(v28);
        v23 = v28;
        v20 = __PAIR64__(*((_DWORD *)a2 + 26), DWORD2(v28));
        v24 = InputTraceLogging::RoutingModeToString(*((unsigned int *)a2 + 1));
        LODWORD(v21) = v7;
        WindowHandle = (const WCHAR *)CInputDest::GetWindowHandle(a2);
        HIDWORD(v21) = *((_DWORD *)a1 + 1);
        v26 = (void *)*((_QWORD *)a1 + 10);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (__int64)&dword_14029EE20,
          (__int64)&unk_14027FDA8,
          v12,
          v13,
          (__int64)&v26,
          (__int64)&v21 + 4,
          (__int64)&WindowHandle,
          (__int64)&v21,
          (void **)&v24,
          (__int64)&v20 + 4,
          (const WCHAR **)&v23,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (const WCHAR **)&v22 + 1,
          (void **)&v22);
      }
    }
    else if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 32LL) )
    {
      v14 = *((unsigned int *)a2 + 1);
      WindowHandle = (const WCHAR *)*((_QWORD *)&v27 + 1);
      v26 = (void *)v27;
      v21 = v29;
      v20 = *((_QWORD *)&v28 + 1);
      v24 = v28;
      v19 = *((_DWORD *)a2 + 26);
      v23 = InputTraceLogging::RoutingModeToString(v14);
      v18 = v7;
      *((_QWORD *)&v22 + 1) = CInputDest::GetWindowHandle(a2);
      v17 = *((_DWORD *)a1 + 1);
      *(_QWORD *)&v22 = *((_QWORD *)a1 + 10);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_14027FCC8,
        v15,
        v16,
        (__int64)&v22,
        (__int64)&v17,
        (__int64)&v22 + 8,
        (__int64)&v18,
        (void **)&v23,
        (__int64)&v19,
        (const WCHAR **)&v24,
        (__int64)&v20,
        (__int64)&v20 + 4,
        (__int64)&v21,
        (__int64)&v21 + 4,
        &WindowHandle,
        &v26);
    }
  }
}
