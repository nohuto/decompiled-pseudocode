/*
 * XREFs of ?ReloadCursorSizes@Cursor@InputTraceLogging@@SAXI_N@Z @ 0x140273BA8
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401B79FC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401E5E48 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::Cursor::ReloadCursorSizes(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int8 *v4; // rdx
  int v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( (unsigned int)dword_14039BB50 > 5 && tlgKeywordOn((__int64)&dword_14039BB50, 8LL) )
    {
      v4 = (unsigned __int8 *)&unk_140366206;
LABEL_8:
      v5 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_14039BB50,
        v4,
        v2,
        v3,
        (__int64)&v5);
    }
  }
  else if ( (unsigned int)dword_14039BB50 > 5 && tlgKeywordOn((__int64)&dword_14039BB50, 8LL) )
  {
    v4 = (unsigned __int8 *)&unk_1403661CE;
    goto LABEL_8;
  }
}
