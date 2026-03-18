/*
 * XREFs of ??$SmmInitializePushLock@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x14006DD0C
 * Callers:
 *     ?SmmInitializeIommu@@YAJPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x1402850B4 (-SmmInitializeIommu@@YAJPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z.c)
 *     SmmInitializeLogicalAllocator @ 0x140287E80 (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmInitializePushLock<1>(_QWORD *a1)
{
  *a1 = 0LL;
}
