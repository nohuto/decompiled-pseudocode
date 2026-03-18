/*
 * XREFs of AcpiAllocateGsivForSecondaryInterrupt @ 0x1400AF960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 AcpiAllocateGsivForSecondaryInterrupt()
{
  return ((__int64 (*)(void))HalPrivateDispatchTable[63])();
}
