/*
 * XREFs of SysMmTestCreatePhysicalObjectForExistingPhysicalMemory @ 0x14009D580
 * Callers:
 *     <none>
 * Callees:
 *     SmmCreatePhysicalObjectForPhysicalMemory @ 0x14003ED44 (SmmCreatePhysicalObjectForPhysicalMemory.c)
 */

__int64 __fastcall SysMmTestCreatePhysicalObjectForExistingPhysicalMemory(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return SmmCreatePhysicalObjectForPhysicalMemory(a1, a2, a3, 3, 1, a4, 9, a5, a6);
}
