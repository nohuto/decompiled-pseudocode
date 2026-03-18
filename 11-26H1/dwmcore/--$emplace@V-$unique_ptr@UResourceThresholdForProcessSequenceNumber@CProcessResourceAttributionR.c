/*
 * XREFs of ??$emplace@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@@Z @ 0x180213F0C
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x1801149A4 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1801E4EB8 (--$_Emplace_reallocate@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResource.c)
 *     ??1?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x18021960C (--1-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@.c)
 *     ??$?4U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@$0A@@?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180231740 (--$-4U-$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionRep.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::emplace<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = (__int64 *)a1[1];
  if ( v4 == (__int64 *)a1[2] )
  {
    *a2 = std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::_Emplace_reallocate<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
            a1,
            a3,
            a4);
  }
  else
  {
    v7 = *a4;
    *a4 = 0LL;
    if ( (__int64 *)a3 == v4 )
    {
      *v4 = v7;
      a1[1] += 8LL;
    }
    else
    {
      v8 = v4 - 1;
      v11[0] = v7;
      v9 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = v9;
      a1[1] += 8LL;
      while ( v8 != (__int64 *)a3 )
        std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
          --v4,
          --v8);
      std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
        a3,
        v11);
      std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::~unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>(v11);
    }
    *a2 = a3;
  }
  return a2;
}
