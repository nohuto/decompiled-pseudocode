/*
 * XREFs of ??$_Uninitialized_move@PEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@YAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU12@0PEAU12@AEAV?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@0@@Z @ 0x1801C36A8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x180199AB0 (--$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$ve.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 */

char *__fastcall std::_Uninitialized_move<CProcessResourceAttributionReporter::ProcessResourceUsageRecord *>(
        void *a1,
        __int64 a2,
        char *a3)
{
  std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
    a1,
    a2,
    a3);
  return &a3[104 * ((a2 - (__int64)a1) / 104)];
}
