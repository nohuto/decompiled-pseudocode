/*
 * XREFs of ?HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z @ 0x140296E08
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14023D7A8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::RawInput::HijackHidData(void *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 0x40000LL) )
    {
      v3 = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)&dword_1403AA9C0,
        byte_1403750CC,
        v1,
        v2,
        (__int64)&v3);
    }
  }
}
