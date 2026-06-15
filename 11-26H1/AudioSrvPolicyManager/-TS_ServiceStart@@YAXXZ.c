/*
 * XREFs of ?TS_ServiceStart@@YAXXZ @ 0x180044028
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180047388 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180021364 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003D660 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void TS_ServiceStart(void)
{
  const char *v0; // r9
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v5; // [rsp+40h] [rbp+8h] BYREF
  struct TSSession *v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( !(unsigned __int8)WinStationQueryEnforcementCore(0LL, 0LL, 1LL, &g_MaxSessions, 4, &v5) )
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x9B0,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      v0);
    g_MaxSessions = 1;
  }
  v6 = 0LL;
  TsSessionCreate(0, &v6);
  v1 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v1 > 4u && tlgKeywordOn((__int64)v1, 0x20000LL) )
  {
    LODWORD(v6) = g_MaxSessions;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v2,
      byte_18005B052,
      v2,
      v3,
      (__int64)&v6);
  }
}
