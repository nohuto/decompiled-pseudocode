/*
 * XREFs of VfIsVerifierEnabled @ 0x1404F5560
 * Callers:
 *     PipDmgIsDmaVerifierEnabled @ 0x1407AA5F0 (PipDmgIsDmaVerifierEnabled.c)
 *     KsepPatchDriverImportsTable @ 0x1407C0BE8 (KsepPatchDriverImportsTable.c)
 *     MiCallDllUnload @ 0x14087B384 (MiCallDllUnload.c)
 *     MiIssueDllInitializeCall @ 0x14087B6CC (MiIssueDllInitializeCall.c)
 *     IopLoadUnloadDriver @ 0x140A39590 (IopLoadUnloadDriver.c)
 *     PopMarkComponentsBootPhase @ 0x140C00E30 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 *     VfUtilGetDriverImportBaseAddress @ 0x140C277C0 (VfUtilGetDriverImportBaseAddress.c)
 *     VfDriverUnloadImage @ 0x140C4CD98 (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
