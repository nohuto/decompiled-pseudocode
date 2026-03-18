/*
 * XREFs of ?SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14003EC94
 * Callers:
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x14003EF60 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     SysMmTestCreateIoSpacePhysicalObject @ 0x14009D480 (SysMmTestCreateIoSpacePhysicalObject.c)
 * Callees:
 *     SmmCreatePhysicalObjectForPhysicalMemory @ 0x14003ED44 (SmmCreatePhysicalObjectForPhysicalMemory.c)
 */

__int64 __fastcall SysMmCreateIoSpacePhysicalObject(
        int a1,
        __int16 a2,
        __int16 a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  if ( (a3 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1310;
    return 3221225485LL;
  }
  if ( (a2 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1317;
    return 3221225485LL;
  }
  return SmmCreatePhysicalObjectForPhysicalMemory(a1, a3, a2, a4, 0, a5, a6, a7, a8);
}
