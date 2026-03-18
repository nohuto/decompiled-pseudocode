/*
 * XREFs of ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x180115640
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180114930 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 *     ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x180114C10 (--1-$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U-$default_delete@.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x180114C30 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     std::_Func_impl_no_alloc__CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage_::_2_::_lambda_1__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x180199860 (std--_Func_impl_no_alloc__CProcessResourceAttributionReporter--CheckAndReportHighResourceUsage_-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CProcessResourceAttributionReporter::HighResourceUsageReport *__fastcall CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(
        CProcessResourceAttributionReporter::HighResourceUsageReport *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, 8 * ((__int64)(*((_QWORD *)this + 4) - (_QWORD)v2) >> 3));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  operator delete(this, 0x30uLL);
  return this;
}
