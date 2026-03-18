/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180219590
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x1801149A4 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 * Callees:
 *     ??1?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x18021960C (--1-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@.c)
 *     ??$?4U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@$0A@@?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180231740 (--$-4U-$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionRep.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 8; i != v3; i += 8LL )
    std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
      i - 8,
      i);
  std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::~unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>(*(_QWORD *)(a1 + 8) - 8LL);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
