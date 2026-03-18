/*
 * XREFs of MmEnumerateSystemImages @ 0x1404E5150
 * Callers:
 *     Phase1Initialization @ 0x14077FEA0 (Phase1Initialization.c)
 *     IopInitializeBootLogging @ 0x140794CC0 (IopInitializeBootLogging.c)
 *     PipKsrDeferredHardwareInit @ 0x1407B2E04 (PipKsrDeferredHardwareInit.c)
 *     EtwpCoverageSamplerStart @ 0x1408314FC (EtwpCoverageSamplerStart.c)
 *     MmLockRegistryRecoverySections @ 0x1408646F8 (MmLockRegistryRecoverySections.c)
 *     EtwpSysModuleRunDown @ 0x14096F07C (EtwpSysModuleRunDown.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140B22D10 (PopIdleWakeGenerateInterruptDescriptionString.c)
 * Callees:
 *     MiEnumerateSystemImages @ 0x1404E5184 (MiEnumerateSystemImages.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 a1, __int64 a2)
{
  return MiEnumerateSystemImages(a1, a2, 0LL);
}
