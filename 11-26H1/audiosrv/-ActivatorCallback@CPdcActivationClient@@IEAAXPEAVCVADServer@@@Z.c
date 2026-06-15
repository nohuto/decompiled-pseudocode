/*
 * XREFs of ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x180081C30
 * Callers:
 *     ?PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x180109B20 (-PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007CC50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_18007CC50.c)
 *     __std_find_trivial_8 @ 0x1800B1B60 (__std_find_trivial_8.c)
 *     ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x180113100 (-ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 */

void __fastcall CPdcActivationClient::ActivatorCallback(CPdcActivationClient *this, struct CVADServer *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  CVADServer **trivial_8; // rax
  struct CVADServer *v8; // [rsp+40h] [rbp+8h] BYREF

  std::_Mutex_base::lock((CPdcActivationClient *)((char *)this + 32));
  v4 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*(_BYTE *)(v4 + 16) & 0x40) != 0
    && (*(_QWORD *)(v4 + 24) & 0x40LL) == *(_QWORD *)(v4 + 24) )
  {
    v8 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v4,
      byte_1801A6F52,
      v5,
      v6,
      (__int64)&v8);
  }
  trivial_8 = (CVADServer **)_std_find_trivial_8(*((_QWORD *)this + 1), *((_QWORD *)this + 2), a2);
  if ( trivial_8 != *((CVADServer ***)this + 2) )
    CVADServer::ReevaluateTimerActivationRequest(*trivial_8);
  _Mtx_unlock((CPdcActivationClient *)((char *)this + 32));
}
