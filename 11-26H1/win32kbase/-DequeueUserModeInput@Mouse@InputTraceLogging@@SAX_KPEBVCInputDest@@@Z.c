/*
 * XREFs of ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x14022338C
 * Callers:
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x140224964 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5554AEBU?$_tlgWrapSz@D@@@Z @ 0x140007444 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U2@U-$_tlgW.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14005B6B0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x14010B6DC (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x14010B6F4 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x14010F6F4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 */

void __fastcall InputTraceLogging::Mouse::DequeueUserModeInput(__int64 a1, const struct CInputDest *a2)
{
  CInputDest *v3; // r9
  CInputDest *v4; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v6; // r8
  __int64 WindowDetails; // rax
  __int128 v8; // xmm1
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+60h] [rbp-29h] BYREF
  int v14; // [rsp+64h] [rbp-25h] BYREF
  __int128 v15; // [rsp+68h] [rbp-21h] BYREF
  const WCHAR *v16; // [rsp+78h] [rbp-11h] BYREF
  __int64 v17; // [rsp+80h] [rbp-9h] BYREF
  __int128 v18; // [rsp+88h] [rbp-1h]
  __int128 v19; // [rsp+98h] [rbp+Fh]
  __int64 v20; // [rsp+A8h] [rbp+1Fh]
  _BYTE v21[48]; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v22; // [rsp+100h] [rbp+77h] BYREF
  int v23; // [rsp+108h] [rbp+7Fh] BYREF

  if ( InputTraceLogging::Enabled(64, 0) )
  {
    if ( v3 )
    {
      CInputDest::GetBaseWindow(v3);
      UserWindow = CInputDest::GetUserWindow(v4);
      WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v21, (__int64)UserWindow, v6);
      v8 = *(_OWORD *)(WindowDetails + 16);
      v18 = *(_OWORD *)WindowDetails;
      v20 = *(_QWORD *)(WindowDetails + 32);
      v19 = v8;
      if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 64LL) )
      {
        v15 = v18;
        LODWORD(v22) = HIDWORD(v20);
        v23 = v20;
        v13 = HIDWORD(v19);
        v16 = (const WCHAR *)v19;
        v14 = DWORD2(v19);
        v17 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (__int64)&dword_1402A9E40,
          (__int64)&unk_14028C249,
          v9,
          v10,
          (__int64)&v17,
          &v16,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v23,
          (__int64)&v22,
          (const WCHAR **)&v15 + 1,
          (void **)&v15);
      }
    }
    else if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 64LL) )
    {
      v22 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)&dword_1402A9E40,
        byte_14028C20E,
        v11,
        v12,
        (__int64)&v22);
    }
  }
}
