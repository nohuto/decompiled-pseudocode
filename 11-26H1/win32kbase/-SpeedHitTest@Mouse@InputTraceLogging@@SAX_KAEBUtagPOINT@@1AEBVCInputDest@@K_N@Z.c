/*
 * XREFs of ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x14010B398
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14009B3E4 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x14010B6DC (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x14010B6F4 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x14010B828 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@4444654444@Z @ 0x14010B87C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapSz@.c)
 */

void __fastcall InputTraceLogging::Mouse::SpeedHitTest(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        LONG *a4,
        LONG a5,
        bool a6)
{
  CInputDest *v10; // rcx
  struct tagWND *UserWindow; // rax
  __int64 WindowDetails; // rax
  __int128 v13; // xmm1
  LONG v14; // eax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  LONG y; // [rsp+A8h] [rbp-80h] BYREF
  LONG x; // [rsp+ACh] [rbp-7Ch] BYREF
  __int64 v23; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp-70h] BYREF
  LONG v25; // [rsp+C0h] [rbp-68h] BYREF
  LONG v26; // [rsp+C4h] [rbp-64h] BYREF
  LONG v27; // [rsp+C8h] [rbp-60h] BYREF
  LONG v28; // [rsp+CCh] [rbp-5Ch] BYREF
  __int128 v29; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-40h] BYREF
  HWND WindowHandle; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-30h] BYREF
  __int128 v34; // [rsp+100h] [rbp-28h]
  __int128 v35; // [rsp+110h] [rbp-18h]
  unsigned __int64 v36; // [rsp+120h] [rbp-8h]
  _BYTE v37[48]; // [rsp+128h] [rbp+0h] BYREF

  if ( dword_1402A9E40 && (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
  {
    CInputDest::GetBaseWindow((CInputDest *)a4);
    UserWindow = CInputDest::GetUserWindow(v10);
    WindowDetails = InputTraceLogging::GetWindowDetails(v37, UserWindow);
    v13 = *(_OWORD *)(WindowDetails + 16);
    v34 = *(_OWORD *)WindowDetails;
    v36 = *(_QWORD *)(WindowDetails + 32);
    v35 = v13;
    if ( a6 )
    {
      if ( (unsigned int)dword_1402A9E40 > 4
        && (qword_1402A9E50 & 0x40) != 0
        && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
      {
        y = a3->y;
        x = a3->x;
        LODWORD(v23) = a2->y;
        HIDWORD(v23) = a2->x;
        v29 = v34;
        v24 = __PAIR64__(v36, HIDWORD(v36));
        v25 = HIDWORD(v35);
        v30 = v35;
        v14 = a4[26];
        v26 = DWORD2(v35);
        v15 = (unsigned int)a4[1];
        v27 = v14;
        v31 = InputTraceLogging::RoutingModeToString(v15);
        v28 = a5;
        WindowHandle = CInputDest::GetWindowHandle((CInputDest *)a4);
        v33 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1402A9E40,
          (unsigned int)&unk_14028C484,
          v16,
          v17,
          (__int64)&v33,
          (__int64)&WindowHandle,
          (__int64)&v28,
          (__int64)&v31,
          (__int64)&v27,
          (__int64)&v30,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24 + 4,
          (__int64)&v24,
          (__int64)&v29 + 8,
          (__int64)&v29,
          (__int64)&v23 + 4,
          (__int64)&v23,
          (__int64)&x,
          (__int64)&y);
      }
    }
    else if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 64LL) )
    {
      v18 = (unsigned int)a4[1];
      v28 = a3->y;
      v27 = a3->x;
      v26 = a2->y;
      v25 = a2->x;
      WindowHandle = (HWND)*((_QWORD *)&v34 + 1);
      v33 = v34;
      v24 = v36;
      v23 = *((_QWORD *)&v35 + 1);
      v31 = v35;
      x = a4[26];
      v30 = InputTraceLogging::RoutingModeToString(v18);
      y = a5;
      *((_QWORD *)&v29 + 1) = CInputDest::GetWindowHandle((CInputDest *)a4);
      *(_QWORD *)&v29 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1402A9E40,
        (unsigned int)&unk_14028C367,
        v19,
        v20,
        (__int64)&v29,
        (__int64)&v29 + 8,
        (__int64)&y,
        (__int64)&v30,
        (__int64)&x,
        (__int64)&v31,
        (__int64)&v23,
        (__int64)&v23 + 4,
        (__int64)&v24,
        (__int64)&v24 + 4,
        (__int64)&WindowHandle,
        (__int64)&v33,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v28);
    }
  }
}
