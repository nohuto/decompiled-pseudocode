/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800AB2A8
 * Callers:
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x180138ECC (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x180138FA4 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x1801CA920 (-StopInteraction@CInteractionContextWrapper@@UEAAJXZ.c)
 *     ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801D0A50 (-ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ??0CRenderThreadWaitTick@@QEAA@PEC_K@Z @ 0x180202DC0 (--0CRenderThreadWaitTick@@QEAA@PEC_K@Z.c)
 *     ?OnUpdatesCompletedForResource@CInteractionTracker2@@UEAAJI@Z @ 0x180274770 (-OnUpdatesCompletedForResource@CInteractionTracker2@@UEAAJI@Z.c)
 *     ?SetMaxScaleInternal@CInteractionTracker2@@AEAAXM@Z @ 0x1802763A4 (-SetMaxScaleInternal@CInteractionTracker2@@AEAAXM@Z.c)
 *     ?SetMinScaleInternal@CInteractionTracker2@@AEAAXM@Z @ 0x18027655C (-SetMinScaleInternal@CInteractionTracker2@@AEAAXM@Z.c)
 *     ?OnUpdatesCompletedForResource@CInteractionTrackerBindingManager@@UEAAJI@Z @ 0x180278760 (-OnUpdatesCompletedForResource@CInteractionTrackerBindingManager@@UEAAJI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL);
}
