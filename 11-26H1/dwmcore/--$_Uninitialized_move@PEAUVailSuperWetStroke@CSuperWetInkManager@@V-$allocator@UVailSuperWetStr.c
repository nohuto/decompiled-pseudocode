/*
 * XREFs of ??$_Uninitialized_move@PEAUVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x1802300E4
 * Callers:
 *     ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x18022FDFC (--$_Emplace_reallocate@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailS.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 */

char *__fastcall std::_Uninitialized_move<CSuperWetInkManager::VailSuperWetStroke *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
    a1,
    a2,
    a3);
  return &a3[120 * ((a2 - (__int64)a1) / 120)];
}
