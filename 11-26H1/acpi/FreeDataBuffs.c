/*
 * XREFs of FreeDataBuffs @ 0x140007570
 * Callers:
 *     FreeContext @ 0x140003D30 (FreeContext.c)
 *     ParseScope @ 0x140005CE0 (ParseScope.c)
 *     ParseTerm @ 0x140006120 (ParseTerm.c)
 *     FreeData @ 0x1400075B0 (FreeData.c)
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     FreeNameSpaceObjects @ 0x14000DBBC (FreeNameSpaceObjects.c)
 *     ProcessIncDec @ 0x14000DFF0 (ProcessIncDec.c)
 *     Index @ 0x1400120A0 (Index.c)
 *     ExprOp2_64 @ 0x140012500 (ExprOp2_64.c)
 *     Store @ 0x140013D20 (Store.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     ConvertToInteger @ 0x140015028 (ConvertToInteger.c)
 *     ConvertToBuffer @ 0x1400150F8 (ConvertToBuffer.c)
 *     Concat @ 0x140015240 (Concat.c)
 *     Match_64 @ 0x140016110 (Match_64.c)
 *     ConvertToString @ 0x140016ABC (ConvertToString.c)
 *     ACPIFanFSTCallback @ 0x140016F90 (ACPIFanFSTCallback.c)
 *     Match_32 @ 0x1400175CC (Match_32.c)
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIIoctlEvalControlMethod @ 0x140023DBC (ACPIIoctlEvalControlMethod.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x140026EB0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x140029650 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIThermalTMPCallback @ 0x140029BA0 (ACPIThermalTMPCallback.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1400345A0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140034B80 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x140035060 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x140035770 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1400358A0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x140035AB0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x140035FC0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1400362C0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIGetWorkerForInteger @ 0x140037430 (ACPIGetWorkerForInteger.c)
 *     ACPIBuildMissingEjectionRelations @ 0x140039C58 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIGetWorkerForString @ 0x14003A900 (ACPIGetWorkerForString.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     ACPIGetWorkerForData @ 0x14003DDE0 (ACPIGetWorkerForData.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x14003FB40 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 *     ACPIGetWorkerForBuffer @ 0x140043EA0 (ACPIGetWorkerForBuffer.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x140044940 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x14004767C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlEnumChildren @ 0x140048808 (ACPIIoctlEnumChildren.c)
 *     ACPIGetWorkerForNothing @ 0x140049580 (ACPIGetWorkerForNothing.c)
 *     ACPIInitDosDeviceName @ 0x14004C538 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x14004DBF0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ConvertToDDBHandle @ 0x1400557FC (ConvertToDDBHandle.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x140058380 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1400588E0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1400589F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIThermalGetSensorDevice @ 0x140069E88 (ACPIThermalGetSensorDevice.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 *     Simulator_CallbackWorker @ 0x14006C690 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x14006E4EC (ParseDLMObjectInternal.c)
 *     ParseNestedContext @ 0x1400707F0 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400D74F4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x1400075B0 (FreeData.c)
 */

__int64 __fastcall FreeDataBuffs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = FreeData(a1);
      a1 += 40LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
