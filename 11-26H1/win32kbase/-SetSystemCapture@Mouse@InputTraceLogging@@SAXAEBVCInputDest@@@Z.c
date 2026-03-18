/*
 * XREFs of ?SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z @ 0x14010B278
 * Callers:
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x14010B214 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x14010B6DC (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x14010B6F4 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4443AEBU?$_tlgWrapSz@D@@@Z @ 0x140199940 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemp.c)
 */

void __fastcall InputTraceLogging::Mouse::SetSystemCapture(const struct CInputDest *a1)
{
  CInputDest *v1; // rcx
  struct tagWND *UserWindow; // rax
  __int64 WindowDetails; // rax
  __int128 v4; // xmm1
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+60h] [rbp-19h] BYREF
  __int128 v8; // [rsp+68h] [rbp-11h] BYREF
  __int64 v9; // [rsp+78h] [rbp-1h] BYREF
  __int128 v10; // [rsp+80h] [rbp+7h]
  __int128 v11; // [rsp+90h] [rbp+17h]
  __int64 v12; // [rsp+A0h] [rbp+27h]
  _BYTE v13[40]; // [rsp+A8h] [rbp+2Fh] BYREF
  int v14; // [rsp+E8h] [rbp+6Fh] BYREF
  int v15; // [rsp+F0h] [rbp+77h] BYREF
  int v16; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( dword_1402A9E40 )
  {
    if ( (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
    {
      CInputDest::GetBaseWindow(a1);
      UserWindow = CInputDest::GetUserWindow(v1);
      WindowDetails = InputTraceLogging::GetWindowDetails(v13, UserWindow);
      v4 = *(_OWORD *)(WindowDetails + 16);
      v10 = *(_OWORD *)WindowDetails;
      v12 = *(_QWORD *)(WindowDetails + 32);
      v11 = v4;
      if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 64LL) )
      {
        v8 = v10;
        v14 = HIDWORD(v12);
        v15 = v12;
        v16 = HIDWORD(v11);
        v9 = v11;
        v7 = DWORD2(v11);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (unsigned int)&dword_1402A9E40,
          (unsigned int)&unk_14028C15D,
          v5,
          v6,
          (__int64)&v9,
          (__int64)&v7,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v8 + 8,
          (__int64)&v8);
      }
    }
  }
}
