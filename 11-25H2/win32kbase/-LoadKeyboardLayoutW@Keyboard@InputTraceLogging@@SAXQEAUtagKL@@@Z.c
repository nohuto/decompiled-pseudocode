/*
 * XREFs of ?LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x140156C60
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapSz@G@@@Z @ 0x140009390 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Keyboard::LoadKeyboardLayoutW(struct tagKL *const a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // [rsp+50h] [rbp-10h] BYREF
  int v4; // [rsp+54h] [rbp-Ch] BYREF
  const WCHAR *v5; // [rsp+58h] [rbp-8h] BYREF
  int v6; // [rsp+78h] [rbp+18h] BYREF
  int v7; // [rsp+80h] [rbp+20h] BYREF
  int v8; // [rsp+88h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 0x4000LL) )
  {
    v5 = (const WCHAR *)(v1 + 124);
    v6 = *(_DWORD *)(v1 + 120);
    v7 = *(_DWORD *)(v1 + 116);
    v8 = *(unsigned __int16 *)(v1 + 72);
    v3 = *(_DWORD *)(v1 + 112);
    v4 = *(_DWORD *)(v1 + 40);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_140281031,
      v1,
      v2,
      (__int64)&v4,
      (__int64)&v3,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      &v5);
  }
}
