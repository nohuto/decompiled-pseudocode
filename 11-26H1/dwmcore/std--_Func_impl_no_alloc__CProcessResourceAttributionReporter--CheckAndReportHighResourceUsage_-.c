/*
 * XREFs of std::_Func_impl_no_alloc__CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage_::_2_::_lambda_1__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x180199860
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x180115640 (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 *     ??$_Emplace_one_at_back@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAAEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@AEBU23@@Z @ 0x1801999C4 (--$_Emplace_one_at_back@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$v.c)
 *     ??$?4U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@$0A@@?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180199A2C (--$-4U-$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@$0A@@.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

char __fastcall std::_Func_impl_no_alloc__CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage_::_2_::_lambda_1__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Do_call(
        __int64 a1,
        CProcessResourceAttributionReporter::HighResourceUsageReport *a2,
        _DWORD *a3,
        __int64 *a4,
        int a5,
        int *a6,
        _DWORD *a7)
{
  int v8; // ebx
  int v9; // esi
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  char result; // al
  int v15; // ebx
  CProcessResourceAttributionReporter::HighResourceUsageReport *v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-61h] BYREF
  __int64 v19; // [rsp+28h] [rbp-59h]
  int v20; // [rsp+6Ch] [rbp-15h]
  int v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+74h] [rbp-Dh]
  int v23; // [rsp+78h] [rbp-9h]
  int v24; // [rsp+7Ch] [rbp-5h]
  int v25; // [rsp+80h] [rbp-1h]
  BOOL v26; // [rsp+84h] [rbp+3h]
  __int64 v27; // [rsp+D0h] [rbp+4Fh]
  CProcessResourceAttributionReporter::HighResourceUsageReport *v28; // [rsp+D8h] [rbp+57h] BYREF

  v28 = a2;
  v8 = *a6;
  v27 = *a4;
  LODWORD(v28) = *a3;
  v9 = a7[20];
  v10 = a7[16];
  v11 = a7[19];
  v12 = a7[15];
  v13 = a7[18];
  LODWORD(a6) = a7[17];
  result = (int)a6 > 5000 || v12 > 500 || v9 > 1000 || v10 > 10000 || v11 > 200 || v13 > 1000;
  v15 = v8 & 0x20;
  if ( result || v15 )
  {
    memset_0(&v18, 0, 0x68uLL);
    v18 = (int)v28;
    v19 = v27;
    v22 = (int)a6;
    v25 = v9;
    v21 = v10;
    v24 = v11;
    v20 = v12;
    v23 = v13;
    v26 = v15 != 0;
    if ( !**(_QWORD **)(a1 + 8) )
    {
      v16 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)operator new(0x30uLL);
      if ( v16 )
      {
        *(_QWORD *)v16 = 0LL;
        *((_QWORD *)v16 + 1) = 0LL;
        *((_QWORD *)v16 + 5) = 0LL;
        *((_QWORD *)v16 + 2) = 0LL;
        *((_QWORD *)v16 + 3) = 0LL;
        *((_QWORD *)v16 + 4) = 0LL;
      }
      else
      {
        v16 = 0LL;
      }
      v17 = *(_QWORD *)(a1 + 8);
      v28 = v16;
      std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::operator=<std::default_delete<CProcessResourceAttributionReporter::HighResourceUsageReport>,0>(
        v17,
        &v28);
      if ( v28 )
        CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(v28);
    }
    return std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_one_at_back<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
             **(_QWORD **)(a1 + 8) + 16LL,
             &v18);
  }
  return result;
}
