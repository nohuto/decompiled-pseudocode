/*
 * XREFs of ?UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@_N2@Z @ 0x140081D58
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400030C4 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?MonitorDisplayStateToString@InputTraceLogging@@CAPEBDW4_MONITOR_DISPLAY_STATE@@@Z @ 0x1401AFB64 (-MonitorDisplayStateToString@InputTraceLogging@@CAPEBDW4_MONITOR_DISPLAY_STATE@@@Z.c)
 *     ?MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401AFB9C (-MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

void __fastcall InputTraceLogging::Power::UpdateDisplayState(
        enum _MONITOR_DISPLAY_STATE a1,
        enum POWER_MONITOR_REQUEST_REASON a2,
        __int64 a3)
{
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // r9
  enum _MONITOR_DISPLAY_STATE v5; // r11d
  enum POWER_MONITOR_REQUEST_REASON v6; // r10d
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+44h] [rbp-24h] BYREF
  const char *v11; // [rsp+48h] [rbp-20h] BYREF
  const char *v12; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 2LL, a3) )
    {
      v9 = v4;
      v10 = v3;
      v11 = InputTraceLogging::MonitorDisplayStateToString(v5);
      v12 = InputTraceLogging::MonitorRequestReasonToString(v6);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_1402785D4,
        v7,
        v8,
        (void **)&v12,
        (void **)&v11,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
}
