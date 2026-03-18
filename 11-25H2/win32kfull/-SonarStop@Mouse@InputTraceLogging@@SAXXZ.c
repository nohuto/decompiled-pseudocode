/*
 * XREFs of ?SonarStop@Mouse@InputTraceLogging@@SAXXZ @ 0x1402877B0
 * Callers:
 *     StopSonar @ 0x140287A2C (StopSonar.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1401ABECC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

void InputTraceLogging::Mouse::SonarStop(void)
{
  if ( (unsigned int)dword_14039BB50 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_14039BB50, 64LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)&dword_14039BB50,
        byte_1403685FF);
  }
}
