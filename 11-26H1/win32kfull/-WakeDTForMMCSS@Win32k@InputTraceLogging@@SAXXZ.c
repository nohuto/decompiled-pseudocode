/*
 * XREFs of ?WakeDTForMMCSS@Win32k@InputTraceLogging@@SAXXZ @ 0x14025E950
 * Callers:
 *     _lambda_a483737acf4a7731ac5a5433698ef540_::_lambda_invoker_cdecl_ @ 0x1402A4CD0 (_lambda_a483737acf4a7731ac5a5433698ef540_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1401E21C0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void InputTraceLogging::Win32k::WakeDTForMMCSS(void)
{
  const char *v0; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 2LL) )
    {
      v0 = "EnableMMCSS";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1403AA9C0,
        byte_1403755B0,
        0LL,
        0LL,
        (void **)&v0);
    }
  }
}
