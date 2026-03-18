/*
 * XREFs of VfIsVerifierEnabled @ 0x1404BD130
 * Callers:
 *     PipDmgIsDmaVerifierEnabled @ 0x14071B6A4 (PipDmgIsDmaVerifierEnabled.c)
 *     KsepPatchDriverImportsTable @ 0x140733664 (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x1407564A0 (PopDripsWatchdogTakeAction.c)
 *     MiIssueDllInitializeCall @ 0x1407D77CC (MiIssueDllInitializeCall.c)
 *     MiUnloadApproved @ 0x1407D79F4 (MiUnloadApproved.c)
 *     IopLoadUnloadDriver @ 0x140ABFF10 (IopLoadUnloadDriver.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     PopMarkComponentsBootPhase @ 0x140B4D604 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B6A96C (KdEnterDebugger.c)
 *     VfDriverUnloadImage @ 0x140B7A5E0 (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
