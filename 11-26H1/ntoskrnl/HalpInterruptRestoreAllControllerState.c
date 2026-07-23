/*
 * XREFs of HalpInterruptRestoreAllControllerState @ 0x140C0FB80
 * Callers:
 *     HalpInterruptMaskLevelTriggeredLines @ 0x14059C770 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptUnmaskLevelTriggeredLines @ 0x14059C920 (HalpInterruptUnmaskLevelTriggeredLines.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140BF47C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpInterruptRestoreController @ 0x1404D792C (HalpInterruptRestoreController.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR *HalpInterruptRestoreAllControllerState()
{
  ULONG_PTR *v0; // rbx
  ULONG_PTR *result; // rax
  __int64 v2; // rcx
  int v3; // eax

  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( 1 )
  {
    result = &HalpRegisteredInterruptControllers;
    if ( v0 == &HalpRegisteredInterruptControllers )
      break;
    v2 = (__int64)v0;
    v0 = (ULONG_PTR *)*v0;
    v3 = HalpInterruptRestoreController(v2, 0);
    if ( v3 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 3uLL, v3);
  }
  HalpInterruptPicStateIntact = 1;
  return result;
}
