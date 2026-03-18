/*
 * XREFs of SmmCreatePhysicalObjectForPhysicalMemory @ 0x14003ED44
 * Callers:
 *     ?SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14003EC94 (-SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TY.c)
 *     SysMmTestCreatePhysicalObjectForExistingPhysicalMemory @ 0x14009D580 (SysMmTestCreatePhysicalObjectForExistingPhysicalMemory.c)
 * Callees:
 *     SmmCreatePhysicalObject @ 0x14003FCC0 (SmmCreatePhysicalObject.c)
 */

__int64 __fastcall SmmCreatePhysicalObjectForPhysicalMemory(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  return SmmCreatePhysicalObject(a1, a4, a5, a6, a7, a8, a9);
}
