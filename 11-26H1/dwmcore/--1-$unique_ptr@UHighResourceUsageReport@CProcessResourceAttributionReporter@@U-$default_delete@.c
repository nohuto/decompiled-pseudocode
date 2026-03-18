/*
 * XREFs of ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x180114C10
 * Callers:
 *     ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180231828 (--1CProcessResourceAttributionReporter@@AEAA@XZ.c)
 * Callees:
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x180115640 (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::~unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>(
        CProcessResourceAttributionReporter::HighResourceUsageReport **a1,
        unsigned int a2)
{
  CProcessResourceAttributionReporter::HighResourceUsageReport *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(v2, a2);
  return result;
}
