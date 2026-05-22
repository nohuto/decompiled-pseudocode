/*
 * XREFs of ?UpdateCursorOrientationForInputType@Cursor@InputTraceLogging@@SAXW4InputType@@N@Z @ 0x1800F5578
 * Callers:
 *     ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x18007DEA4 (-ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800051A4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800737A4 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 */

char __fastcall InputTraceLogging::Cursor::UpdateCursorOrientationForInputType(__int64 a1, double a2)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // edx
  __int64 v4; // r8
  __int64 v5; // r9
  double v7; // [rsp+50h] [rbp+18h] BYREF
  const char *v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 8LL);
    if ( (_BYTE)v2 )
    {
      v7 = a2;
      v8 = InputTraceLogging::InputTypeToString(v3 - 6);
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
                     v4,
                     (__int64)&unk_18021782E,
                     v4,
                     v5,
                     (const unsigned __int16 **)&v8,
                     (__int64)&v7);
    }
  }
  return (char)v2;
}
