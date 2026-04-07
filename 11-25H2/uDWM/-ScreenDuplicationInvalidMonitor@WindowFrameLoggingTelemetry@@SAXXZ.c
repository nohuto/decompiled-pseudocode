/*
 * XREFs of ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800C07EC
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800C2880 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180001B30 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004DA1C (-Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18007C780 (_tlgKeywordOn.c)
 */

void __fastcall WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rcx
  int v2; // ecx

  v1 = WindowFrameLogging::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x200000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v2,
        (int)&unk_180105720,
        0);
  }
}
