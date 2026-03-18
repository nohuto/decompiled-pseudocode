/*
 * XREFs of ?EndAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14002AA90
 * Callers:
 *     RIMEndAllActiveContacts @ 0x14002C860 (RIMEndAllActiveContacts.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400F3920 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::RIM::EndAllActiveContacts(const struct RIMDEV *a1)
{
  __int64 v1; // r8
  int v2; // r9d
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 256LL, a1) )
    {
      v3 = v1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (unsigned int)&dword_14029EE20,
        (unsigned int)&unk_14027AD4D,
        v1,
        v2,
        (__int64)&v3);
    }
  }
}
