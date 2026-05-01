/*
 * XREFs of ??$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z @ 0x1801CF8B8
 * Callers:
 *     ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1801CF670 (-OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180047AD0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@P6AXXZ@Z @ 0x1801CF940 (-get@-$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@.c)
 */

int __fastcall DesktopBlueLightReductionManagerTelemetry::IdleStateFlagsChanged<unsigned int,unsigned int>(
        int *a1,
        int *a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<BlueLightReductionLogging>::get(
         a1,
         _lambda_8fbe65ba72b2d61923eb3411a963ff67_::_lambda_invoker_cdecl_);
  v6 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)v6 > 5u && (*(_QWORD *)(v6 + 16) & 0x400000000000LL) != 0 )
  {
    v4 = *(_QWORD *)(v6 + 24) & 0x400000000000LL;
    if ( v4 == *(_QWORD *)(v6 + 24) )
    {
      v8 = *a2;
      v9 = *a1;
      LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      v6,
                      byte_1807BA961,
                      0LL,
                      v5,
                      (__int64)&v9,
                      (__int64)&v8);
    }
  }
  return v4;
}
