/*
 * XREFs of ?AllocationFailure@Monitors@InputTraceLogging@@SAXXZ @ 0x1401C3A60
 * Callers:
 *     ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x14011DBC0 (-CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x14011DC04 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1400F2EB8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

void InputTraceLogging::Monitors::AllocationFailure(void)
{
  if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 0x80000LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1402A9E40,
      (__int64)&unk_14028252B);
}
