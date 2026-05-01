/*
 * XREFs of ??$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBG$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x180656634
 * Callers:
 *     ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x18065B2B0 (-OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011334 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrap.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@CloudPCTelemetryCore@@SAPEBU_tlgProvider_t@@XZ @ 0x18064156C (-Provider@CloudPCTelemetryCore@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,unsigned int,unsigned short (&)[260],unsigned short const *,bool,enum CloudPCTelemetryCore::SourceOfDisconnect>(
        int *a1,
        int *a2,
        __int64 a3,
        __int64 *a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  int v13; // [rsp+70h] [rbp+1Fh] BYREF
  int v14; // [rsp+74h] [rbp+23h] BYREF
  __int64 v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v17; // [rsp+88h] [rbp+37h] BYREF

  v8 = CloudPCTelemetryCore::Provider((__int64)a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v8, 0x800000000000LL);
    if ( (_BYTE)v8 )
    {
      v15 = 0x1000000LL;
      v17 = a3;
      v16 = *a4;
      v13 = *a2;
      v14 = *a1;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v11,
                     (__int64)&unk_18082E2B0,
                     v9,
                     v10,
                     (__int64)&v14,
                     (__int64)&v13,
                     &v17,
                     &v16);
    }
  }
  return (char)v8;
}
