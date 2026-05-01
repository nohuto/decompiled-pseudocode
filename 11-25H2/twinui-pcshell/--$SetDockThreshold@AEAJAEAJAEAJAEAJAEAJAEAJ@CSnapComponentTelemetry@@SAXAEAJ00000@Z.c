/*
 * XREFs of ??$SetDockThreshold@AEAJAEAJAEAJAEAJAEAJAEAJ@CSnapComponentTelemetry@@SAXAEAJ00000@Z @ 0x1802BEC20
 * Callers:
 *     ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x1801FF328 (-SetDockThreshold@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x18000C84C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *CSnapComponentTelemetry::SetDockThreshold<long &,long &,long &,long &,long &,long &>()
{
  const struct _tlgProvider_t *result; // rax

  result = WindowManagementLogging::Provider();
  if ( *(_DWORD *)result > 5u )
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (__int64)result,
                                            (__int64)&unk_1807E5DA5);
  return result;
}
