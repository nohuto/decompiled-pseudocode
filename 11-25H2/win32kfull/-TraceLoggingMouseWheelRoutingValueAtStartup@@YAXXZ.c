/*
 * XREFs of ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x14021F574
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003A40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void TraceLoggingMouseWheelRoutingValueAtStartup(void)
{
  UPDWORDPointer(8220LL);
  if ( (unsigned int)dword_14039BBC0 > 5
    && (qword_14039BBD0 & 0x200000000000LL) != 0
    && (qword_14039BBD8 & 0x200000000000LL) == qword_14039BBD8 )
  {
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBC0,
      (__int64)&unk_140369E39);
  }
}
