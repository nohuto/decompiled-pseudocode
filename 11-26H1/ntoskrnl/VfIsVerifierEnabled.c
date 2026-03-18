/*
 * XREFs of VfIsVerifierEnabled @ 0x1404FC020
 * Callers:
 *     PipDmgIsDmaVerifierEnabled @ 0x1407A7A40 (PipDmgIsDmaVerifierEnabled.c)
 *     KsepPatchDriverImportsTable @ 0x1407BDB88 (KsepPatchDriverImportsTable.c)
 *     MiCallDllUnload @ 0x140874FA0 (MiCallDllUnload.c)
 *     MiIssueDllInitializeCall @ 0x1408752E8 (MiIssueDllInitializeCall.c)
 *     IopLoadUnloadDriver @ 0x140A264F0 (IopLoadUnloadDriver.c)
 *     PopMarkComponentsBootPhase @ 0x140BFAE30 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 *     KdExitDebugger @ 0x140C12008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140C17858 (KdEnterDebugger.c)
 *     VfUtilGetDriverImportBaseAddress @ 0x140C217B0 (VfUtilGetDriverImportBaseAddress.c)
 *     VfDriverUnloadImage @ 0x140C46D88 (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
