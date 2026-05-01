/*
 * XREFs of ??$HandleInputPaneTryShow@PEBDPEBDAEAU?$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@AEB_NPEBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBD0AEAU?$atomic@_N@std@@$$QEAH1AEA_N11AEB_N0@Z @ 0x180481F20
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804838F0 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@444443AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180008F1C (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow<char const *,char const *,std::atomic<bool> &,int,std::atomic<bool> &,bool &,std::atomic<bool> &,std::atomic<bool> &,bool const &,char const *>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        __int64 *a10)
{
  const struct _tlgProvider_t *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  char v20; // [rsp+88h] [rbp-9h] BYREF
  char v21; // [rsp+89h] [rbp-8h] BYREF
  char v22; // [rsp+8Ah] [rbp-7h] BYREF
  char v23; // [rsp+8Bh] [rbp-6h] BYREF
  char v24; // [rsp+8Ch] [rbp-5h] BYREF
  char v25[3]; // [rsp+8Dh] [rbp-4h] BYREF
  int v26; // [rsp+90h] [rbp-1h] BYREF
  __int64 v27; // [rsp+98h] [rbp+7h]
  __int64 v28; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+1Fh] BYREF

  v14 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v14 > 5u )
  {
    LOBYTE(v14) = tlgKeywordOn((__int64)v14, 16LL);
    if ( (_BYTE)v14 )
    {
      v27 = 0x1000000LL;
      v15 = *a10;
      v20 = *a9;
      v28 = v15;
      v21 = std::_Atomic_storage<bool,1>::load(a8);
      v22 = std::_Atomic_storage<bool,1>::load(a7);
      v23 = *a6;
      v24 = std::_Atomic_storage<bool,1>::load(a5);
      v26 = *a4;
      v25[0] = std::_Atomic_storage<bool,1>::load(a3);
      v29 = *a2;
      v30 = *a1;
      LOBYTE(v14) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
                      v18,
                      (__int64)&unk_18080F9C9,
                      v16,
                      v17,
                      &v30,
                      &v29,
                      (__int64)v25,
                      (__int64)&v26,
                      (__int64)&v24,
                      (__int64)&v23,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20,
                      &v28);
    }
  }
  return (char)v14;
}
