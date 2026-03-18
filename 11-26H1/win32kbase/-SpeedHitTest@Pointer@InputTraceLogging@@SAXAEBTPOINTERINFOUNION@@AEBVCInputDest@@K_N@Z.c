/*
 * XREFs of ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1401661F4
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@34AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@444465@Z @ 0x140001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U-$_tlgWrapSz@D@@U2@U-$_tlgWrap.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x14010B6DC (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x14010B6F4 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x14010B828 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::SpeedHitTest(
        const union POINTERINFOUNION *a1,
        const struct CInputDest *a2,
        int a3,
        char a4)
{
  CInputDest *v8; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v10; // r8
  __int64 WindowDetails; // rax
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+98h] [rbp-80h] BYREF
  int v19; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v20; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v21; // [rsp+A4h] [rbp-74h] BYREF
  __int64 v22; // [rsp+ACh] [rbp-6Ch] BYREF
  __int128 v23; // [rsp+B8h] [rbp-60h] BYREF
  const char *v24; // [rsp+C8h] [rbp-50h] BYREF
  const char *v25; // [rsp+D0h] [rbp-48h] BYREF
  const WCHAR *WindowHandle; // [rsp+D8h] [rbp-40h] BYREF
  void *v27; // [rsp+E0h] [rbp-38h] BYREF
  __int128 v28; // [rsp+E8h] [rbp-30h]
  __int128 v29; // [rsp+F8h] [rbp-20h]
  __int64 v30; // [rsp+108h] [rbp-10h]
  _BYTE v31[40]; // [rsp+110h] [rbp-8h] BYREF

  if ( dword_1402A9E40 && (qword_1402A9E50 & 0x20) != 0 && (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
  {
    CInputDest::GetBaseWindow(a2);
    UserWindow = CInputDest::GetUserWindow(v8);
    WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v31, (__int64)UserWindow, v10);
    v12 = *(_OWORD *)(WindowDetails + 16);
    v28 = *(_OWORD *)WindowDetails;
    v30 = *(_QWORD *)(WindowDetails + 32);
    v29 = v12;
    if ( a4 )
    {
      if ( (unsigned int)dword_1402A9E40 > 4
        && (qword_1402A9E50 & 0x20) != 0
        && (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
      {
        v23 = v28;
        v18 = HIDWORD(v30);
        v19 = v30;
        v20 = HIDWORD(v29);
        v24 = (const char *)v29;
        v21 = __PAIR64__(*((_DWORD *)a2 + 26), DWORD2(v29));
        v25 = InputTraceLogging::RoutingModeToString(*((_DWORD *)a2 + 1));
        LODWORD(v22) = a3;
        WindowHandle = (const WCHAR *)CInputDest::GetWindowHandle(a2);
        HIDWORD(v22) = *((_DWORD *)a1 + 1);
        v27 = (void *)*((_QWORD *)a1 + 10);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (__int64)&dword_1402A9E40,
          (__int64)&unk_14028A2C4,
          v13,
          v14,
          (__int64)&v27,
          (__int64)&v22 + 4,
          (__int64)&WindowHandle,
          (__int64)&v22,
          (void **)&v25,
          (__int64)&v21 + 4,
          (const WCHAR **)&v24,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (const WCHAR **)&v23 + 1,
          (void **)&v23);
      }
    }
    else if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 32LL) )
    {
      v15 = *((_DWORD *)a2 + 1);
      WindowHandle = (const WCHAR *)*((_QWORD *)&v28 + 1);
      v27 = (void *)v28;
      v22 = v30;
      v21 = *((_QWORD *)&v29 + 1);
      v25 = (const char *)v29;
      v20 = *((_DWORD *)a2 + 26);
      v24 = InputTraceLogging::RoutingModeToString(v15);
      v19 = a3;
      *((_QWORD *)&v23 + 1) = CInputDest::GetWindowHandle(a2);
      v18 = *((_DWORD *)a1 + 1);
      *(_QWORD *)&v23 = *((_QWORD *)a1 + 10);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (__int64)&dword_1402A9E40,
        (__int64)&unk_14028A39D,
        v16,
        v17,
        (__int64)&v23,
        (__int64)&v18,
        (__int64)&v23 + 8,
        (__int64)&v19,
        (void **)&v24,
        (__int64)&v20,
        (const WCHAR **)&v25,
        (__int64)&v21,
        (__int64)&v21 + 4,
        (__int64)&v22,
        (__int64)&v22 + 4,
        &WindowHandle,
        &v27);
    }
  }
}
