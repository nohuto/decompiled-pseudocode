/*
 * XREFs of ?LogSuspendOutboundMessages@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@EEBAXII@Z @ 0x18011F070
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001DDC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::LogSuspendOutboundMessages(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  _DWORD v4[6]; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  if ( qword_180254640 && *(_DWORD *)qword_180254640 > 5u && tlgKeywordOn(qword_180254640, 1LL) )
  {
    v5 = v2;
    v4[0] = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v1,
      (__int64)&unk_18021CC07,
      v2,
      v3,
      (__int64)v4,
      (__int64)&v5);
  }
}
