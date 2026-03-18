/*
 * XREFs of ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1400F91D8
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x1400F8A80 (_anonymous_namespace_--RenderCursor.c)
 *     TransitionCursorSuppressionState @ 0x1400F8F50 (TransitionCursorSuppressionState.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x1400F9310 (_anonymous_namespace_--xxxSwitchCursors.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x140224070 (NtUserEnableMouseInputForCursorSuppression.c)
 *     PowerOnGdi @ 0x140248020 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x140253020 (PowerOffGdi.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33@Z @ 0x14025B048 (--$Write@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x14025BF64 (-CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::SetCursorSuppression(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // r10d
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
  {
    v9 = InputTraceLogging::CursorSuppressionToString(a3);
    v7 = InputTraceLogging::CursorSuppressionToString(v3);
    v8 = InputTraceLogging::CursorSuppressionToString(v4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      (unsigned int)&dword_1403AA9C0,
      (unsigned int)&unk_140373B62,
      v5,
      v6,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v9);
  }
}
