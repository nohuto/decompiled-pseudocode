/*
 * XREFs of ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1400B6F04
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x140037B68 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@444465@Z @ 0x140009AEC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x1400B7BF4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1400B8758 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1400B8770 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1400BA334 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 */

char __fastcall InputTraceLogging::Mouse::SendToUserMode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 WindowDetails; // rax
  CInputDest *v6; // r9
  CInputDest *v7; // rcx
  struct tagWND *UserWindow; // rax
  __int128 v9; // xmm1
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+70h] [rbp-39h] BYREF
  int v14; // [rsp+74h] [rbp-35h] BYREF
  int v15; // [rsp+78h] [rbp-31h] BYREF
  int v16; // [rsp+7Ch] [rbp-2Dh] BYREF
  __int128 v17; // [rsp+80h] [rbp-29h] BYREF
  const WCHAR *v18; // [rsp+90h] [rbp-19h] BYREF
  __int64 v19; // [rsp+98h] [rbp-11h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v21; // [rsp+A8h] [rbp-1h]
  __int128 v22; // [rsp+B8h] [rbp+Fh]
  __int64 v23; // [rsp+C8h] [rbp+1Fh]
  _BYTE v24[48]; // [rsp+D0h] [rbp+27h] BYREF
  int v25; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = a3;
  LOBYTE(WindowDetails) = InputTraceLogging::Enabled(64LL, 0LL, a3, a2);
  if ( (_BYTE)WindowDetails )
  {
    CInputDest::GetBaseWindow(v6);
    UserWindow = CInputDest::GetUserWindow(v7);
    WindowDetails = InputTraceLogging::GetWindowDetails(v24, UserWindow);
    v9 = *(_OWORD *)(WindowDetails + 16);
    v21 = *(_OWORD *)WindowDetails;
    v23 = *(_QWORD *)(WindowDetails + 32);
    v22 = v9;
    if ( (unsigned int)dword_14029EE20 > 4 )
    {
      LOBYTE(WindowDetails) = tlgKeywordOn((__int64)&dword_14029EE20, 64LL);
      if ( (_BYTE)WindowDetails )
      {
        v17 = v21;
        v25 = HIDWORD(v23);
        v13 = v23;
        v14 = HIDWORD(v22);
        v15 = DWORD2(v22);
        v18 = (const WCHAR *)v22;
        v19 = InputTraceLogging::RoutingModeToString(v4);
        v16 = *(_DWORD *)(a1 + 192);
        v20 = *(_QWORD *)(a1 + 40);
        LOBYTE(WindowDetails) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
                                  (__int64)&dword_14029EE20,
                                  (__int64)&unk_140281A75,
                                  v10,
                                  v11,
                                  (__int64)&v20,
                                  (__int64)&v16,
                                  (void **)&v19,
                                  &v18,
                                  (__int64)&v15,
                                  (__int64)&v14,
                                  (__int64)&v13,
                                  (__int64)&v25,
                                  (const WCHAR **)&v17 + 1,
                                  (void **)&v17);
      }
    }
  }
  return WindowDetails;
}
