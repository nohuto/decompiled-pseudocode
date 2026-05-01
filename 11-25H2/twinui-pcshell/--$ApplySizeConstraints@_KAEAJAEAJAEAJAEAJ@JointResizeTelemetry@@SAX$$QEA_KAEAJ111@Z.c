/*
 * XREFs of ??$ApplySizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z @ 0x180513CCC
 * Callers:
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x18051516C (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4443@Z @ 0x18000ADA0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *JointResizeTelemetry::ApplySizeConstraints<unsigned __int64,long &,long &,long &,long &>()
{
  const struct _tlgProvider_t *result; // rax

  result = WindowManagementLogging::Provider();
  if ( *(_DWORD *)result > 5u )
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                                            (__int64)result,
                                            (__int64)&unk_1807E15B7);
  return result;
}
