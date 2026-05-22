/*
 * XREFs of ?LogSendUndocked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x1801999A4
 * Callers:
 *     ?Undocked@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x18019AC80 (-Undocked@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180004270 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoPenEventsClientProxyImpl::LogSendUndocked(BamoImpl::BamoPenEventsClientProxyImpl *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  int v5; // edx
  _DWORD v6[6]; // [rsp+40h] [rbp-18h] BYREF
  char v7; // [rsp+70h] [rbp+18h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v7 = v3;
    v5 = *(_DWORD *)(v4 + 36);
    v6[0] = *(_DWORD *)(v2 + 24);
    v8 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v1,
      (__int64)&unk_180228B0C,
      v2,
      v3,
      (__int64)v6,
      (__int64)&v8,
      (__int64)&v7);
  }
}
