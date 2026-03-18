/*
 * XREFs of ?StartDesktopRecalc@DesktopRecalc@InputTraceLogging@@SAXIW4InputTracing_DesktopRecalcInitReason@@@Z @ 0x14015CC24
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x14000156C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void InputTraceLogging::DesktopRecalc::StartDesktopRecalc()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // r10d
  const char *v3; // rax
  int v4; // [rsp+50h] [rbp+18h] BYREF
  const char *v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1403AA9C0, 0x80000LL) )
  {
    if ( (_DWORD)v1 )
    {
      if ( (_DWORD)v1 == 1 )
        v3 = "SPI_SETWORKAREA";
      else
        v3 = "UNKNOWN";
    }
    else
    {
      v3 = "Mode Change";
    }
    v5 = v3;
    v4 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1403AA9C0,
      (__int64)&unk_140377ED6,
      v0,
      v1,
      (__int64)&v4,
      (void **)&v5);
  }
}
