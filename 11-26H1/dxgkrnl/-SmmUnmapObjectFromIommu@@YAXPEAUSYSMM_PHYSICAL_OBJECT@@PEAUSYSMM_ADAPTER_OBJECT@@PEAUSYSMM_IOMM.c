/*
 * XREFs of ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x140040978
 * Callers:
 *     SmmClosePhysicalObject @ 0x14003F43C (SmmClosePhysicalObject.c)
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140040410 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmMapExistingMemoryToDomain @ 0x14009C300 (SmmMapExistingMemoryToDomain.c)
 * Callees:
 *     SmmUnmapNonPagedObjectFromIommu @ 0x140040B5C (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x14006BC64 (SmmUnmapPagedObjectFromIommu.c)
 */

void __fastcall SmmUnmapObjectFromIommu(
        struct SYSMM_PHYSICAL_OBJECT *a1,
        struct SYSMM_ADAPTER_OBJECT *a2,
        struct SYSMM_IOMMU *a3)
{
  if ( (*((_DWORD *)a1 + 11) & 1) != 0 )
    SmmUnmapNonPagedObjectFromIommu(a1, a2, a3);
  else
    SmmUnmapPagedObjectFromIommu(a1, a2, a3);
}
