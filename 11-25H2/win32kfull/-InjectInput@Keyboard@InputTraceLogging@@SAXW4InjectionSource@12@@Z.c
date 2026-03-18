/*
 * XREFs of ?InjectInput@Keyboard@InputTraceLogging@@SAXW4InjectionSource@12@@Z @ 0x1402173E4
 * Callers:
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x14027603C (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14020A778 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void InputTraceLogging::Keyboard::InjectInput()
{
  const char *v0; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14039BB50 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_14039BB50, 0x4000LL) )
    {
      v0 = "SendInput";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_14039BB50,
        byte_140366C5E,
        0LL,
        0LL,
        (void **)&v0);
    }
  }
}
