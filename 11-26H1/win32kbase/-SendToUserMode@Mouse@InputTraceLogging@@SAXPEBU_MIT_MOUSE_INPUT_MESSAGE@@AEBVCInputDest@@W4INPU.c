/*
 * XREFs of ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x14019D604
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@444465@Z @ 0x14000773C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x14010B6DC (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x14010B6F4 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x14010B828 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 */

void __fastcall InputTraceLogging::Mouse::SendToUserMode(__int64 a1, CInputDest *a2, int a3)
{
  CInputDest *v5; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v7; // r8
  __int64 WindowDetails; // rax
  __int128 v9; // xmm1
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+70h] [rbp-39h] BYREF
  int v13; // [rsp+74h] [rbp-35h] BYREF
  int v14; // [rsp+78h] [rbp-31h] BYREF
  int v15; // [rsp+7Ch] [rbp-2Dh] BYREF
  __int128 v16; // [rsp+80h] [rbp-29h] BYREF
  const WCHAR *v17; // [rsp+90h] [rbp-19h] BYREF
  const char *v18; // [rsp+98h] [rbp-11h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-1h]
  __int128 v21; // [rsp+B8h] [rbp+Fh]
  __int64 v22; // [rsp+C8h] [rbp+1Fh]
  _BYTE v23[48]; // [rsp+D0h] [rbp+27h] BYREF
  int v24; // [rsp+128h] [rbp+7Fh] BYREF

  if ( dword_1402A9E40 )
  {
    if ( (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
    {
      CInputDest::GetBaseWindow(a2);
      UserWindow = CInputDest::GetUserWindow(v5);
      WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v23, (__int64)UserWindow, v7);
      v9 = *(_OWORD *)(WindowDetails + 16);
      v20 = *(_OWORD *)WindowDetails;
      v22 = *(_QWORD *)(WindowDetails + 32);
      v21 = v9;
      if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 64LL) )
      {
        v16 = v20;
        v24 = HIDWORD(v22);
        v12 = v22;
        v13 = HIDWORD(v21);
        v14 = DWORD2(v21);
        v17 = (const WCHAR *)v21;
        v18 = InputTraceLogging::RoutingModeToString(a3);
        v15 = *(_DWORD *)(a1 + 192);
        v19 = *(_QWORD *)(a1 + 40);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (__int64)&dword_1402A9E40,
          (__int64)&unk_14028C064,
          v10,
          v11,
          (__int64)&v19,
          (__int64)&v15,
          (void **)&v18,
          &v17,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v24,
          (const WCHAR **)&v16 + 1,
          (void **)&v16);
      }
    }
  }
}
