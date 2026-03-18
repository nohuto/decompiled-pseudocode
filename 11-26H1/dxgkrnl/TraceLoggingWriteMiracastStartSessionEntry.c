/*
 * XREFs of TraceLoggingWriteMiracastStartSessionEntry @ 0x1400695E8
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140004C6C (--$Write@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 */

void TraceLoggingWriteMiracastStartSessionEntry()
{
  __int64 v0; // rcx
  __int64 v1; // r9
  __int64 v2[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned int)dword_140166660 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140166660, 0x400000000000LL) )
    {
      v2[0] = v1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>>(
        v0,
        (__int64)&unk_14014576A,
        v1,
        v1,
        v2);
    }
  }
}
