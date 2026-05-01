/*
 * XREFs of ??$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x18045F5C8
 * Callers:
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180462FE4 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180097004 (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18016F55C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

char __fastcall StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[11]>(const WCHAR *a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  const WCHAR *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  v1 = LauncherTelemetryLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v1, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v5 = L"sihost.exe";
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                     v2,
                     byte_180806086,
                     0LL,
                     v3,
                     &v5);
    }
  }
  return (char)v1;
}
