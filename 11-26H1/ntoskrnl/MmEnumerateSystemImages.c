/*
 * XREFs of MmEnumerateSystemImages @ 0x1404DE6F0
 * Callers:
 *     Phase1Initialization @ 0x1407829A0 (Phase1Initialization.c)
 *     IopInitializeBootLogging @ 0x1407977F0 (IopInitializeBootLogging.c)
 *     PipKsrDeferredHardwareInit @ 0x1407B5E64 (PipKsrDeferredHardwareInit.c)
 *     EtwpCoverageSamplerStart @ 0x14083773C (EtwpCoverageSamplerStart.c)
 *     MmLockRegistryRecoverySections @ 0x14086AAD8 (MmLockRegistryRecoverySections.c)
 *     EtwpSysModuleRunDown @ 0x1409BC6CC (EtwpSysModuleRunDown.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140B25110 (PopIdleWakeGenerateInterruptDescriptionString.c)
 * Callees:
 *     MiEnumerateSystemImages @ 0x1404DE724 (MiEnumerateSystemImages.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 a1, __int64 a2)
{
  return MiEnumerateSystemImages(a1, a2, 0LL);
}
