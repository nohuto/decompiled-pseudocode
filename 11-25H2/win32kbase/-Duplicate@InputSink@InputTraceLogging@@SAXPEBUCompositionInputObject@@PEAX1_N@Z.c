/*
 * XREFs of ?Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z @ 0x140057C30
 * Callers:
 *     ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1400577E0 (-OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140009E04 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::InputSink::Duplicate(
        const struct CompositionInputObject *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // [rsp+40h] [rbp-18h] BYREF
  const struct CompositionInputObject *v5; // [rsp+48h] [rbp-10h] BYREF
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  LOBYTE(v7) = a4;
  v6 = a2;
  if ( (unsigned int)dword_14029EE20 > 5 && (qword_14029EE30 & 4) != 0 && (qword_14029EE38 & 4) == qword_14029EE38 )
  {
    v4 = 0LL;
    v5 = a1;
    v7 = 1;
    v6 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_140283206,
      a3,
      a4,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v6,
      (__int64)&v7);
  }
}
