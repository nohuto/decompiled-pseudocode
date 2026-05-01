/*
 * XREFs of ?TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z @ 0x1803EFF0C
 * Callers:
 *     _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x1803EC5F8 (_lambda_c6edb9ea9ae2a095d75d0a6fb7353035_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperArray@$07@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperArray@$07@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18000515C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperArray@$07@@U-$_tlgWrapperByVal@$00@@U1@@-$_tl.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802AB878 (-Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupPerf_(
        TaskFlowDataEngineTelemetry *this)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // r10

  v1 = TaskFlowDataEngineTelemetry::Provider((__int64)this);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        v2,
        (__int64)&unk_1807CB70A);
  }
}
