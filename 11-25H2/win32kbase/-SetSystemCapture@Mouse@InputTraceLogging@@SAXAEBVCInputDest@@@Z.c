/*
 * XREFs of ?SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z @ 0x1400B75A4
 * Callers:
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x140222170 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4443AEBU?$_tlgWrapSz@D@@@Z @ 0x140009544 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemp.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x1400B7BF4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1400B8758 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1400B8770 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 */

void __fastcall InputTraceLogging::Mouse::SetSystemCapture(const struct CInputDest *a1, __int64 a2, __int64 a3)
{
  CInputDest *v3; // r9
  CInputDest *v4; // rcx
  struct tagWND *UserWindow; // rax
  __int64 WindowDetails; // rax
  __int128 v7; // xmm1
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+60h] [rbp-19h] BYREF
  __int128 v11; // [rsp+68h] [rbp-11h] BYREF
  const WCHAR *v12; // [rsp+78h] [rbp-1h] BYREF
  __int128 v13; // [rsp+80h] [rbp+7h]
  __int128 v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+A0h] [rbp+27h]
  _BYTE v16[40]; // [rsp+A8h] [rbp+2Fh] BYREF
  int v17; // [rsp+E8h] [rbp+6Fh] BYREF
  int v18; // [rsp+F0h] [rbp+77h] BYREF
  int v19; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)InputTraceLogging::Enabled(64LL, 0LL, a3, a1) )
  {
    CInputDest::GetBaseWindow(v3);
    UserWindow = CInputDest::GetUserWindow(v4);
    WindowDetails = InputTraceLogging::GetWindowDetails(v16, UserWindow);
    v7 = *(_OWORD *)(WindowDetails + 16);
    v13 = *(_OWORD *)WindowDetails;
    v15 = *(_QWORD *)(WindowDetails + 32);
    v14 = v7;
    if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 64LL) )
    {
      v11 = v13;
      v17 = HIDWORD(v15);
      v18 = v15;
      v19 = HIDWORD(v14);
      v12 = (const WCHAR *)v14;
      v10 = DWORD2(v14);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_140281B3F,
        v8,
        v9,
        &v12,
        (__int64)&v10,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (const WCHAR **)&v11 + 1,
        (void **)&v11);
    }
  }
}
