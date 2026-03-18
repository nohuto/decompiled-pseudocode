/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180114930
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x1801149A4 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x180115640 (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        PTP_CALLBACK_INSTANCE Instance,
        union _SLIST_HEADER *Context,
        PTP_WORK Work)
{
  struct CProcessResourceAttributionReporter::HighResourceUsageReport *v4; // rdi
  CProcessResourceAttributionReporter::HighResourceUsageReport *v5; // rbx
  unsigned int v6; // edx

  v4 = (struct CProcessResourceAttributionReporter::HighResourceUsageReport *)InterlockedFlushSList(Context + 1);
  while ( v4 )
  {
    v5 = v4;
    CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
      (CProcessResourceAttributionReporter *)Context,
      v4);
    v4 = *(struct CProcessResourceAttributionReporter::HighResourceUsageReport **)v4;
    CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(v5, v6);
  }
  std::_Atomic_storage<long,4>::store(&Context[4]);
}
