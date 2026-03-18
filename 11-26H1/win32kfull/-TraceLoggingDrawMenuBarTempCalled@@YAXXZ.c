/*
 * XREFs of ?TraceLoggingDrawMenuBarTempCalled@@YAXXZ @ 0x1402D1F20
 * Callers:
 *     NtUserDrawMenuBarTemp @ 0x1402B1810 (NtUserDrawMenuBarTemp.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14023D7A8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void TraceLoggingDrawMenuBarTempCalled(void)
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1403AAA30 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AAA30, 0x200000000000LL) )
    {
      v2 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)&dword_1403AAA30,
        byte_140377447,
        v0,
        v1,
        (__int64)&v2);
    }
  }
}
