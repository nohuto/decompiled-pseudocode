/*
 * XREFs of ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x140035F54
 * Callers:
 *     rimSignalReadComplete @ 0x140035980 (rimSignalReadComplete.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400F3920 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::RIM::ReadComplete(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r8d
  int v7; // r9d
  void *v8; // rdx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 19448)
    && (v9 = *(_DWORD *)(W32GetUserSessionState(v4, v3) + 19452), (unsigned int)W32GetCurrentWin32kSessionId() == v9)
    && !*(_DWORD *)(W32GetUserSessionState(v11, v10) + 19504) )
  {
    if ( (unsigned int)dword_14029EE20 > 7 && (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 0x10000LL, v5) )
    {
      v8 = &unk_14027CCA0;
LABEL_12:
      v12 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (unsigned int)&dword_14029EE20,
        (_DWORD)v8,
        v6,
        v7,
        (__int64)&v12);
    }
  }
  else if ( (unsigned int)dword_14029EE20 > 7 && (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 0x10000LL, v5) )
  {
    v8 = &unk_14027CB59;
    goto LABEL_12;
  }
}
