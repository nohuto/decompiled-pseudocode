/*
 * XREFs of ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x140102BA8
 * Callers:
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     UpdateDCEInUseCount @ 0x1401028C8 (UpdateDCEInUseCount.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x140138A8C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall TraceLoggingGlobalDCsInUse()
{
  __int64 v0; // r8
  int v1; // r9d
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1402A9E78 > 5 && tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
  {
    v2 = v0;
    v3 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1402A9E78,
      (unsigned int)&unk_14028327A,
      v0,
      v1,
      (__int64)&v3,
      (__int64)&v2);
  }
}
