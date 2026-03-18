/*
 * XREFs of ??$_Uninitialized_move@PEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@YAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@QEAU1@0PEAU1@AEAV?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@0@@Z @ 0x1801A4F9C
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXAEA_K@Z @ 0x180034298 (--$_Reallocate@$0A@@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_MULT.c)
 *     ??$_Emplace_reallocate@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@$$QEAU2@@Z @ 0x1802A52FC (--$_Emplace_reallocate@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@U_DXGI_PRESENT_MULTIPLANE_OV.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 */

char *__fastcall std::_Uninitialized_move<_DXGI_PRESENT_MULTIPLANE_OVERLAY *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
    a1,
    a2,
    a3);
  return &a3[136 * ((a2 - (__int64)a1) / 136)];
}
