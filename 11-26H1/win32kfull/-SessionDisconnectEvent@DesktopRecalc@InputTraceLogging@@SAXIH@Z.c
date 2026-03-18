/*
 * XREFs of ?SessionDisconnectEvent@DesktopRecalc@InputTraceLogging@@SAXIH@Z @ 0x14015C048
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x14000156C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall InputTraceLogging::DesktopRecalc::SessionDisconnectEvent(int a1, int a2)
{
  const char *v2; // rax
  int v3; // [rsp+50h] [rbp+18h] BYREF
  const char *v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4
    && (qword_1403AA9D0 & 0x80000) != 0
    && (qword_1403AA9D8 & 0x80000) == qword_1403AA9D8 )
  {
    v3 = a1;
    v2 = "Disconnect";
    if ( !a2 )
      v2 = "Reconnect";
    v4 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1403AA9C0,
      (__int64)&unk_140377F3C,
      (__int64)"Reconnect",
      0x80000LL,
      (__int64)&v3,
      (void **)&v4);
  }
}
