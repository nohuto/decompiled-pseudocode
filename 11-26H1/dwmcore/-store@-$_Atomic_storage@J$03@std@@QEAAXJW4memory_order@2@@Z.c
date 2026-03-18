/*
 * XREFs of ?store@?$_Atomic_storage@J$03@std@@QEAAXJW4memory_order@2@@Z @ 0x180114998
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180114930 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Atomic_storage<long,4>::store(volatile __int32 *a1)
{
  return (unsigned int)_InterlockedExchange(a1, 0);
}
