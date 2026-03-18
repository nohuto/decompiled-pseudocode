/*
 * XREFs of _ACPIInternalError @ 0x14004B798
 * Callers:
 *     ACPIDevicePowerProcessGenericPhase @ 0x140018E98 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerDpc @ 0x140019030 (ACPIDevicePowerDpc.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIBuildProcessGenericList @ 0x1400290E4 (ACPIBuildProcessGenericList.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1400348C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x140035C00 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003A378 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetWorkerForBuffer @ 0x140043EA0 (ACPIGetWorkerForBuffer.c)
 *     ACPIRootIrpSetPower @ 0x140045690 (ACPIRootIrpSetPower.c)
 *     ACPITableLoad @ 0x140049220 (ACPITableLoad.c)
 *     ACPITableLoadCallBack @ 0x1400510E0 (ACPITableLoadCallBack.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x14005D1C0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIGetConvertToClassCode @ 0x140061078 (ACPIGetConvertToClassCode.c)
 *     LinkNodepRunSrsWorker @ 0x1400719F0 (LinkNodepRunSrsWorker.c)
 *     AcpiArblibScoreRequirement @ 0x1400AD6E0 (AcpiArblibScoreRequirement.c)
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400C1504 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInitializeWorker @ 0x1400DC090 (ACPIInitializeWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ACPIInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA3u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
