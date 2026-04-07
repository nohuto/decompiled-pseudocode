/*
 * XREFs of ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800BE294
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800BE360 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180001B28 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 */

void __fastcall WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rcx
  int v3; // ecx

  v2 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(a1, a2) + 1);
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v3,
        (int)&unk_180100B76,
        0);
  }
}
