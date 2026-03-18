/*
 * XREFs of ??$_Emplace_one_at_back@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAAEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@AEBU23@@Z @ 0x1801999C4
 * Callers:
 *     std::_Func_impl_no_alloc__CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage_::_2_::_lambda_1__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x180199860 (std--_Func_impl_no_alloc__CProcessResourceAttributionReporter--CheckAndReportHighResourceUsage_-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_one_at_back<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_reallocate<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
             a1,
             v3,
             a2,
             a1);
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v3 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v3 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v3 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(v3 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(v3 + 96) = *(_QWORD *)(a2 + 96);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 104;
  return result;
}
