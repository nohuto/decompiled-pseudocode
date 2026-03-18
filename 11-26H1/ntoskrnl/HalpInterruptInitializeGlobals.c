/*
 * XREFs of HalpInterruptInitializeGlobals @ 0x14057D470
 * Callers:
 *     HalpInterruptInitSystem @ 0x140BEB450 (HalpInterruptInitSystem.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *HalpInterruptInitializeGlobals()
{
  ULONG_PTR *result; // rax

  result = &HalpRegisteredInterruptControllers;
  HalpInterruptControllerCount = 0;
  qword_140FBCD98 = (__int64)&HalpRegisteredInterruptControllers;
  HalpRegisteredInterruptControllers = (ULONG_PTR)&HalpRegisteredInterruptControllers;
  HalpInterruptPreAllocatedHeapLock = 0LL;
  return result;
}
