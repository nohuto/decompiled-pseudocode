/*
 * XREFs of HalpInterruptRestoreAllControllerState @ 0x140C09970
 * Callers:
 *     HalpInterruptMaskLevelTriggeredLines @ 0x140599FF0 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptUnmaskLevelTriggeredLines @ 0x14059A1A0 (HalpInterruptUnmaskLevelTriggeredLines.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140BEE7C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpInterruptRestoreController @ 0x1404DE24C (HalpInterruptRestoreController.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
