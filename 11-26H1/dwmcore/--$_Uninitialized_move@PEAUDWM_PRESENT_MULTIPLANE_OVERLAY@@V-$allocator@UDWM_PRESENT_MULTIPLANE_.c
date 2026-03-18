/*
 * XREFs of ??$_Uninitialized_move@PEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@YAPEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@QEAU1@0PEAU1@AEAV?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@0@@Z @ 0x1801A44F4
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800D6DA4 (--$_Reallocate@$0A@@-$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@UDWM_PRESENT_MULTIPLA.c)
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@AEBU2@@Z @ 0x18019B164 (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UDWM_PRESENT_MULTIPLANE_OVE.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 */

char *__fastcall std::_Uninitialized_move<DWM_PRESENT_MULTIPLANE_OVERLAY *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
    a1,
    a2,
    a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFF80uLL];
}
