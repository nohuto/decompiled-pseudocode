/*
 * XREFs of ?LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x14011CA48
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapSz@G@@@Z @ 0x14000729C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 */

void __fastcall InputTraceLogging::Keyboard::LoadKeyboardLayoutW(
        struct tagKL *const a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+50h] [rbp-10h] BYREF
  int v5; // [rsp+54h] [rbp-Ch] BYREF
  const WCHAR *v6; // [rsp+58h] [rbp-8h] BYREF
  int v7; // [rsp+78h] [rbp+18h] BYREF
  int v8; // [rsp+80h] [rbp+20h] BYREF
  int v9; // [rsp+88h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x4000) != 0
    && (qword_1402A9E58 & 0x4000) == qword_1402A9E58 )
  {
    v6 = (const WCHAR *)((char *)a1 + 124);
    v7 = *((_DWORD *)a1 + 30);
    v8 = *((_DWORD *)a1 + 29);
    v9 = *((unsigned __int16 *)a1 + 36);
    v4 = *((_DWORD *)a1 + 28);
    v5 = *((_DWORD *)a1 + 10);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)&dword_1402A9E40,
      (__int64)&unk_14028B62D,
      0x4000LL,
      a4,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      &v6);
  }
}
