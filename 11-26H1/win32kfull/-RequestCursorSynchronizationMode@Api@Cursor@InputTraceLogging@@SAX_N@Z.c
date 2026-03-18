/*
 * XREFs of ?RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402EEA7C
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?UpdateRoutingState@CursorApiRouter@@AEAA?AW4RoutingStateActionNeeded@1@_N@Z @ 0x1400F9C78 (-UpdateRoutingState@CursorApiRouter@@AEAA-AW4RoutingStateActionNeeded@1@_N@Z.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x14019873C (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1401E21C0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::RequestCursorSynchronizationMode()
{
  unsigned int v0; // r8d
  char v1; // r9
  const char *v2; // rax
  const char *v3; // [rsp+48h] [rbp+10h] BYREF

  if ( InputTraceLogging::Enabled(8, 0)
    && (unsigned int)dword_1403AA9C0 > 4
    && tlgKeywordOn((__int64)&dword_1403AA9C0, v0) )
  {
    v2 = "DwmLPC";
    if ( !v1 )
      v2 = "Direct";
    v3 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1403AA9C0,
      byte_14037827F,
      0LL,
      0LL,
      (void **)&v3);
  }
}
