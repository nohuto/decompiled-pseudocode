/*
 * XREFs of MmMapViewOfSectionEx @ 0x1404BCA5C
 * Callers:
 *     VmMapSectionExecuteNoAcg @ 0x14081BBB0 (VmMapSectionExecuteNoAcg.c)
 *     MiMapProcessExecutable @ 0x140962988 (MiMapProcessExecutable.c)
 *     PspMapSystemDll @ 0x140962C14 (PspMapSystemDll.c)
 *     MiMapSecurePureReserveView @ 0x140AC4500 (MiMapSecurePureReserveView.c)
 *     MiMapImageForEnclaveUse @ 0x140B5ED58 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x1409F1570 (MiMapViewOfSectionExCommon.c)
 */

__int64 __fastcall MmMapViewOfSectionEx(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        volatile void *a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        int a13)
{
  return MiMapViewOfSectionExCommon(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11, 0, a13);
}
