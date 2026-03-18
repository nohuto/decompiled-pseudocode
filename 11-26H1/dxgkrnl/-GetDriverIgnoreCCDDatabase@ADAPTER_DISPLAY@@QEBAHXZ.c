/*
 * XREFs of ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1400615D4
 * Callers:
 *     ?IsCcdDatabaseIgnored@MONITOR_MGR@@UEBA_NXZ @ 0x140273B70 (-IsCcdDatabaseIgnored@MONITOR_MGR@@UEBA_NXZ.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x140338A90 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(ADAPTER_DISPLAY *this)
{
  if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 3160LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7103;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsDisplayAdapter()",
      7103LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *((unsigned int *)this + 115);
}
