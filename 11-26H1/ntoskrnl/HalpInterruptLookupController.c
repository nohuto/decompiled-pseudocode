/*
 * XREFs of HalpInterruptLookupController @ 0x140426C98
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x14032DA80 (HalPerformEndOfInterrupt.c)
 *     HalDisableInterrupt @ 0x1404240E0 (HalDisableInterrupt.c)
 *     HalpInterruptFindLines @ 0x1404265EC (HalpInterruptFindLines.c)
 *     HalpInterruptFindControllerAndLineState @ 0x140426644 (HalpInterruptFindControllerAndLineState.c)
 *     HalpMaskInterrupt @ 0x140426960 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140426AB0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x140428F00 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140429194 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetLineState @ 0x1404294DC (HalpInterruptSetLineState.c)
 *     HalpInterruptEnableNmi @ 0x140429E90 (HalpInterruptEnableNmi.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404B7014 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     ExtEnvSetVpptTarget @ 0x1404D20BC (ExtEnvSetVpptTarget.c)
 *     HalpInterruptLineToGsi @ 0x1404E2B0C (HalpInterruptLineToGsi.c)
 *     HalpInterruptRemap @ 0x14057BD44 (HalpInterruptRemap.c)
 *     HalpInterruptRequestInterrupt @ 0x14057D7A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x14057D8C8 (HalpInterruptRestoreClock.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140584840 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x14059AC04 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x14059B0C4 (HalpInterruptRegisterLine.c)
 *     HalpInterruptUnmap @ 0x140781218 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140C08BC0 (HalpInterruptMaskAcpi.c)
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
