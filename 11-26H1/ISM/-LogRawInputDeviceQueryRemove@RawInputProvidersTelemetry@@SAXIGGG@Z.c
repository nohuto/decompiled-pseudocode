/*
 * XREFs of ?LogRawInputDeviceQueryRemove@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800DFA98
 * Callers:
 *     ?OnDeviceQueryRemove@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DFBF0 (-OnDeviceQueryRemove@HIDDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@44@Z @ 0x1800041DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?Provider@RawInputProvidersTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1800DFCF0 (-Provider@RawInputProvidersTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall RawInputProvidersTelemetry::LogRawInputDeviceQueryRemove(
        unsigned int a1,
        __int16 a2,
        __int16 a3,
        __int16 a4)
{
  __int64 v5; // rbp
  const struct _tlgProvider_t *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // [rsp+40h] [rbp-18h] BYREF
  __int16 v13; // [rsp+42h] [rbp-16h] BYREF
  __int16 v14; // [rsp+44h] [rbp-14h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h] BYREF

  v5 = a1;
  v8 = RawInputProvidersTelemetry::Provider();
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
  {
    v12 = a4;
    v13 = a3;
    v14 = a2;
    v15 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      v9,
      (__int64)&unk_180216074,
      v10,
      v11,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
}
