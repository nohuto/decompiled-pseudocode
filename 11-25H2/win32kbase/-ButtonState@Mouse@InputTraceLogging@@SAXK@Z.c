/*
 * XREFs of ?ButtonState@Mouse@InputTraceLogging@@SAXK@Z @ 0x14021F7CC
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14007B6DC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Mouse::ButtonState()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 64LL) )
  {
    v2 = v0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      byte_140281BC2,
      v0,
      v1,
      (__int64)&v2);
  }
}
