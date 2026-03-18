/*
 * XREFs of ?QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z @ 0x140221E88
 * Callers:
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x14021F644 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5554AEBU?$_tlgWrapSz@D@@@Z @ 0x140009750 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U2@U-$_tlgW.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x1400B7BF4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1400B8758 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1400B8770 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 */

void __fastcall InputTraceLogging::Mouse::QueueUserModeInput(__int64 a1, const struct CInputDest *a2)
{
  CInputDest *v3; // r9
  CInputDest *v4; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v6; // r8
  __int64 WindowDetails; // rax
  __int128 v8; // xmm1
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+60h] [rbp-29h] BYREF
  int v12; // [rsp+64h] [rbp-25h] BYREF
  __int128 v13; // [rsp+68h] [rbp-21h] BYREF
  const WCHAR *v14; // [rsp+78h] [rbp-11h] BYREF
  __int64 v15; // [rsp+80h] [rbp-9h] BYREF
  __int128 v16; // [rsp+88h] [rbp-1h]
  __int128 v17; // [rsp+98h] [rbp+Fh]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  _BYTE v19[48]; // [rsp+B0h] [rbp+27h] BYREF
  int v20; // [rsp+100h] [rbp+77h] BYREF
  int v21; // [rsp+108h] [rbp+7Fh] BYREF

  if ( InputTraceLogging::Enabled(64, 0) )
  {
    CInputDest::GetBaseWindow(v3);
    UserWindow = CInputDest::GetUserWindow(v4);
    WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v19, (__int64)UserWindow, v6);
    v8 = *(_OWORD *)(WindowDetails + 16);
    v16 = *(_OWORD *)WindowDetails;
    v18 = *(_QWORD *)(WindowDetails + 32);
    v17 = v8;
    if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 64LL) )
    {
      v13 = v16;
      v20 = HIDWORD(v18);
      v21 = v18;
      v11 = HIDWORD(v17);
      v14 = (const WCHAR *)v17;
      v12 = DWORD2(v17);
      v15 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_140281CEA,
        v9,
        v10,
        (__int64)&v15,
        &v14,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v21,
        (__int64)&v20,
        (const WCHAR **)&v13 + 1,
        (void **)&v13);
    }
  }
}
