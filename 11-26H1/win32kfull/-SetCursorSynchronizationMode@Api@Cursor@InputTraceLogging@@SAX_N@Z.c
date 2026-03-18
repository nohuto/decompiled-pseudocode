/*
 * XREFs of ?SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1400F776C
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?TraceCurrentState@CursorApiRouter@@QEBAXXZ @ 0x1400F7ABC (-TraceCurrentState@CursorApiRouter@@QEBAXXZ.c)
 *     ?HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z @ 0x1400F9C18 (-HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1401E21C0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::SetCursorSynchronizationMode(char a1)
{
  __int64 v1; // rax
  const char *v2; // rax
  const char *v3; // [rsp+48h] [rbp+10h] BYREF

  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 8) != 0 )
    {
      v1 = qword_1403AA9D8 & 8;
      if ( v1 == qword_1403AA9D8 && (unsigned int)dword_1403AA9C0 > 4 && v1 == qword_1403AA9D8 )
      {
        v2 = "DwmLPC";
        if ( !a1 )
          v2 = "Direct";
        v3 = v2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (unsigned int)&dword_1403AA9C0,
          (unsigned int)&unk_1403782C2,
          0,
          0,
          (__int64)&v3);
      }
    }
  }
}
