/*
 * XREFs of ??$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z @ 0x18061E928
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180629EF8 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000FB40 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTe.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@CloudPCTelemetryCore@@SAPEBU_tlgProvider_t@@XZ @ 0x18061BBD0 (-Provider@CloudPCTelemetryCore@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CloudPCTelemetryCore::RemoteDesktopProcessRegistered<unsigned int &,unsigned int,unsigned short const *,unsigned short const *>(
        int *a1,
        int *a2,
        __int64 *a3,
        __int64 *a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+54h] [rbp-24h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF
  __int64 v18; // [rsp+68h] [rbp-10h] BYREF

  v8 = CloudPCTelemetryCore::Provider((__int64)a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v8, 0x800000000000LL);
    if ( (_BYTE)v8 )
    {
      v12 = *a4;
      v18 = *a3;
      v14 = *a2;
      v15 = *a1;
      v17 = v12;
      v16 = 0x1000000LL;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v11,
                     (__int64)&unk_1807EF9E4,
                     v9,
                     v10,
                     (__int64)&v15,
                     (__int64)&v14,
                     &v18,
                     &v17);
    }
  }
  return (char)v8;
}
