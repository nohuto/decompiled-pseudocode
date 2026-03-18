/*
 * XREFs of ?NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x14018FB4C
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14010BAD8 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1400068F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Pointer::NoTargetFound(
        const struct CPointerInputFrame *a1,
        const struct tagPOINTEREVENTINT *a2)
{
  __int64 v2; // r8
  __int16 *v3; // r9
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF
  __int16 v5; // [rsp+70h] [rbp+18h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 32LL) )
  {
    v5 = *v3;
    v6 = *(_QWORD *)(v2 + 72);
    v4[0] = *(_QWORD *)(v2 + 216);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>>(
      (__int64)&dword_1402A9E40,
      (__int64)&unk_14028A55A,
      v2,
      (__int64)v3,
      (__int64)v4,
      (__int64)&v6,
      (__int64)&v5);
  }
}
