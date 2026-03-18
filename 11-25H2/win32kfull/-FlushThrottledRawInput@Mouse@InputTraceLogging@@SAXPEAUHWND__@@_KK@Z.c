/*
 * XREFs of ?FlushThrottledRawInput@Mouse@InputTraceLogging@@SAXPEAUHWND__@@_KK@Z @ 0x1401C9DC0
 * Callers:
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x14017F348 (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14012AFE0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall InputTraceLogging::Mouse::FlushThrottledRawInput(HWND a1)
{
  if ( (unsigned int)dword_14039BB50 > 4 && (qword_14039BB60 & 0x40) != 0 && (qword_14039BB68 & 0x40) == qword_14039BB68 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BB50,
      (__int64)&unk_140366D57);
}
