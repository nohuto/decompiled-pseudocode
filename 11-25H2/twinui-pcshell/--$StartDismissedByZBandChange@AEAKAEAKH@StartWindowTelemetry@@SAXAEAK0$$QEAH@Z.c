/*
 * XREFs of ??$StartDismissedByZBandChange@AEAKAEAKH@StartWindowTelemetry@@SAXAEAK0$$QEAH@Z @ 0x180046BD0
 * Callers:
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18005F3A0 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 * Callees:
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004738C (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180047F3C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

const struct _tlgProvider_t *__fastcall StartWindowTelemetry::StartDismissedByZBandChange<unsigned long &,unsigned long &,int>(
        _DWORD *a1,
        int *a2,
        int *a3)
{
  const struct _tlgProvider_t *result; // rax
  int v7; // r9d
  int v8; // edx
  int v9; // r8d
  int v10; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v11[5]; // [rsp+44h] [rbp-14h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  result = LauncherTelemetryLogging::Provider();
  if ( *(_DWORD *)result > 4u )
  {
    v8 = *a2;
    v9 = *a3;
    v11[0] = *a1;
    v10 = v8;
    v12 = v9;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807CFCC0,
                                            v9,
                                            v7,
                                            (__int64)v11,
                                            (__int64)&v10,
                                            (__int64)&v12);
  }
  return result;
}
