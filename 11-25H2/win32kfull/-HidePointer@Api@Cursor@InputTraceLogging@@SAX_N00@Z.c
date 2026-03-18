/*
 * XREFs of ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x140121C88
 * Callers:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3333@Z @ 0x140005A68 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140122004 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::HidePointer()
{
  if ( (unsigned __int8)InputTraceLogging::Enabled(8LL, 0LL) )
  {
    IS_USERCRIT_OWNED_AT_ALL();
    IS_USERCRIT_OWNED_EXCLUSIVE();
    if ( (unsigned int)dword_14039BB50 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_14039BB50, 8LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          (__int64)&dword_14039BB50,
          (__int64)&unk_14036AE2E);
    }
  }
}
