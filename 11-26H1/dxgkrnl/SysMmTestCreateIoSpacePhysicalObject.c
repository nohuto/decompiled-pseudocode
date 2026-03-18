/*
 * XREFs of SysMmTestCreateIoSpacePhysicalObject @ 0x14009D480
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14003EC94 (-SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TY.c)
 */

__int64 __fastcall SysMmTestCreateIoSpacePhysicalObject(
        int a1,
        __int16 a2,
        __int16 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  return SysMmCreateIoSpacePhysicalObject(a1, a2, a3, a4, a5, 9, a6, a7);
}
