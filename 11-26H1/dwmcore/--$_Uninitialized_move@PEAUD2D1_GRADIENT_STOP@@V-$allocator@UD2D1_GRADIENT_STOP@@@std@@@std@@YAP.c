/*
 * XREFs of ??$_Uninitialized_move@PEAUD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@YAPEAUD2D1_GRADIENT_STOP@@QEAU1@0PEAU1@AEAV?$allocator@UD2D1_GRADIENT_STOP@@@0@@Z @ 0x1801CA8C0
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801B7400 (--$_Reallocate@$0A@@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@.c)
 *     ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x18027E7CC (--$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 */

char *__fastcall std::_Uninitialized_move<D2D1_GRADIENT_STOP *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
    a1,
    a2,
    a3);
  return &a3[20 * ((a2 - (__int64)a1) / 20)];
}
