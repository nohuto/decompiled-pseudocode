/*
 * XREFs of ?SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003EDA8
 * Callers:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140040410 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmMapExistingMemoryToDomain @ 0x14009C300 (SmmMapExistingMemoryToDomain.c)
 * Callees:
 *     SmmMapNonPagedObjectToIommu @ 0x14004099C (SmmMapNonPagedObjectToIommu.c)
 *     SmmMapPagedObjectToIommu @ 0x14006AEE8 (SmmMapPagedObjectToIommu.c)
 */

__int64 __fastcall SmmMapObjectToIommu(
        struct SYSMM_PHYSICAL_OBJECT *a1,
        struct SYSMM_ADAPTER_OBJECT *a2,
        struct SYSMM_IOMMU *a3)
{
  if ( (*((_DWORD *)a1 + 11) & 1) != 0 )
    return SmmMapNonPagedObjectToIommu(a1, a2, a3);
  else
    return SmmMapPagedObjectToIommu(a1, a2, a3);
}
