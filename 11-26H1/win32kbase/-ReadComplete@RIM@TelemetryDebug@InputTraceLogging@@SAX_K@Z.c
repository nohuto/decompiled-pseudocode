/*
 * XREFs of ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x140098F68
 * Callers:
 *     rimSignalReadComplete @ 0x140098988 (rimSignalReadComplete.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14005B6B0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::RIM::ReadComplete(__int64 a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 *v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // edx
  int v12; // ecx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 19480)
    && (v9 = *(_DWORD *)(W32GetUserSessionState(v5, v4, v6) + 19484),
        (unsigned int)W32GetCurrentWin32kSessionId(v10) == v9)
    && !*(_DWORD *)(W32GetUserSessionState(v12, v11, v6) + 19536) )
  {
    if ( (unsigned int)dword_1402A9E40 > 7 && (unsigned __int8)tlgKeywordOn(&dword_1402A9E40, 0x10000LL) )
    {
      v8 = (unsigned __int8 *)&unk_1402870E8;
      goto LABEL_7;
    }
  }
  else if ( (unsigned int)dword_1402A9E40 > 7
         && (qword_1402A9E50 & 0x10000) != 0
         && (qword_1402A9E58 & 0x10000) == qword_1402A9E58 )
  {
    v8 = (unsigned __int8 *)&unk_14028709D;
LABEL_7:
    v13 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)&dword_1402A9E40,
      v8,
      v6,
      v7,
      (__int64)&v13);
  }
}
