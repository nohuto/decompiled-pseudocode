/*
 * XREFs of SmmIommuDeleteDomain @ 0x1402853E4
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140284D58 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x140285400 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285654 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x140285730 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 SmmIommuDeleteDomain()
{
  return ((__int64 (*)(void))qword_1401695E8)();
}
