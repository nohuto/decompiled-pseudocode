/*
 * XREFs of HalpInterruptLookupController @ 0x140433DA8
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     HalDisableInterrupt @ 0x1404311D0 (HalDisableInterrupt.c)
 *     HalpInterruptFindLines @ 0x1404336FC (HalpInterruptFindLines.c)
 *     HalpInterruptFindControllerAndLineState @ 0x140433754 (HalpInterruptFindControllerAndLineState.c)
 *     HalpMaskInterrupt @ 0x140433A70 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140433BC0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetDestinationInternal @ 0x140435518 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x1404357AC (HalpInterruptFindBestRouting.c)
 *     HalpInterruptLineToGsi @ 0x140435864 (HalpInterruptLineToGsi.c)
 *     ExtEnvSetVpptTarget @ 0x1404358D0 (ExtEnvSetVpptTarget.c)
 *     HalpInterruptEnableNmi @ 0x140435DF0 (HalpInterruptEnableNmi.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404B0844 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 *     HalpInterruptRequestInterrupt @ 0x14057FCC0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x14057FDE8 (HalpInterruptRestoreClock.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140586D60 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x14059D384 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x14059D844 (HalpInterruptRegisterLine.c)
 *     HalpInterruptUnmap @ 0x140783D18 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140C0EDD0 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall HalpInterruptLookupController(int a1)
{
  ULONG_PTR *v1; // rdx
  ULONG_PTR *result; // rax

  v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v1 != &HalpRegisteredInterruptControllers )
  {
    result = v1;
    v1 = (ULONG_PTR *)*v1;
    if ( *((_DWORD *)result + 64) == a1 )
      return result;
  }
  return 0LL;
}
