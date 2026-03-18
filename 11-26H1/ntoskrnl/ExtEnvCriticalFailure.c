/*
 * XREFs of ExtEnvCriticalFailure @ 0x14052DC00
 * Callers:
 *     HalpVpptUpdatePhysicalTimer @ 0x140426F38 (HalpVpptUpdatePhysicalTimer.c)
 *     HsaUpdateRemappingTableEntry @ 0x140504080 (HsaUpdateRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x14052DBAC (HsaGetDeviceAperture.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1405832A4 (HalpVpptInitializePhysicalTimer.c)
 *     IvtFreeDomain @ 0x1405A6550 (IvtFreeDomain.c)
 *     HsaFreeRemappingTableEntry @ 0x1405A9970 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
