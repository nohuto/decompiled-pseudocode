/*
 * XREFs of ExtEnvCriticalFailure @ 0x140530120
 * Callers:
 *     HalpVpptUpdatePhysicalTimer @ 0x140434048 (HalpVpptUpdatePhysicalTimer.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404FD950 (HsaUpdateRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x1405300CC (HsaGetDeviceAperture.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1405857C4 (HalpVpptInitializePhysicalTimer.c)
 *     IvtFreeDomain @ 0x1405A8D60 (IvtFreeDomain.c)
 *     HsaFreeRemappingTableEntry @ 0x1405AC180 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn ExtEnvCriticalFailure(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x5Cu, a2, a3, a4, BugCheckParameter4);
}
