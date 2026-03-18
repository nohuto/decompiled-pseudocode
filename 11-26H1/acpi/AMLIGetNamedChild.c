/*
 * XREFs of AMLIGetNamedChild @ 0x140025CA0
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x140025630 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1400258B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIFilterIrpSetPower @ 0x1400262F0 (ACPIFilterIrpSetPower.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x140026640 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x140026900 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x140027900 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x140027C50 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     IsPciBusAsyncWorker @ 0x140028760 (IsPciBusAsyncWorker.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x14002D7E0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x14002F2C0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031890 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1400345A0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1400348C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x140035060 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1400355E0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1400358A0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x140035AB0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x140035C00 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x140035FC0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1400362C0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIGetConvertToDevicePresence @ 0x140037624 (ACPIGetConvertToDevicePresence.c)
 *     ACPIGetProcessorStatus @ 0x1400378D8 (ACPIGetProcessorStatus.c)
 *     ACPIBuildMissingEjectionRelations @ 0x140039C58 (ACPIBuildMissingEjectionRelations.c)
 *     EnableDisableCMOSRegions @ 0x14003DA1C (EnableDisableCMOSRegions.c)
 *     ACPIEcRunQueryMethod @ 0x14003E600 (ACPIEcRunQueryMethod.c)
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140045930 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x140048440 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x140048E10 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x140048F20 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1400496F0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004A9C0 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x14004C1C0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIInitDosDeviceName @ 0x14004C538 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x14004F1C0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     IsPciDeviceWorker @ 0x1400503C0 (IsPciDeviceWorker.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x140058500 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x140058720 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1400589F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x140058E40 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneHrv @ 0x1400591C0 (ACPIBuildProcessThermalZoneHrv.c)
 *     ACPIBuildProcessThermalZoneSub @ 0x140059430 (ACPIBuildProcessThermalZoneSub.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x140059520 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIInternalEvaluateOST @ 0x1400621FC (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x140066FA8 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x140067804 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     ACPIThermalGetSensorDevice @ 0x140069E88 (ACPIThermalGetSensorDevice.c)
 *     LinkNodepRunSrsWorker @ 0x1400719F0 (LinkNodepRunSrsWorker.c)
 *     ACPIFanStartDevice @ 0x1400A89C0 (ACPIFanStartDevice.c)
 *     ACPIQuerySpareDsm @ 0x1400AA5C0 (ACPIQuerySpareDsm.c)
 *     ACPIDockIrpEject @ 0x1400AB490 (ACPIDockIrpEject.c)
 *     ACPIAmliEvaluatePcch @ 0x1400ACDE4 (ACPIAmliEvaluatePcch.c)
 *     ACPIEcGetGpeVector @ 0x1400AEFA4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1400AF048 (ACPIEcGetUid.c)
 *     EnableDisableIPMIRegions @ 0x1400B18A0 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1400B1FE0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1400B20B0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1400B21A0 (ACPIModuleIsValidSpare.c)
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 *     ACPIThermalStartDevice @ 0x1400BAC70 (ACPIThermalStartDevice.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     LinkNodeWriteStateToHardware @ 0x1400C49DC (LinkNodeWriteStateToHardware.c)
 *     ACPIThermalWorker @ 0x1400C6DC0 (ACPIThermalWorker.c)
 *     ACPIInitStopDevice @ 0x1400C7F58 (ACPIInitStopDevice.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1400CCFC0 (AcpiGetIdleWakeInfo.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1400D3A90 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1400D3B78 (ACPIQueryCacheCoherencyAttribute.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall AMLIGetNamedChild(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // rcx
  __int64 *result; // rax

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  while ( 1 )
  {
    if ( v7 == v6 )
    {
      ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
      return 0LL;
    }
    if ( a2 == *((_DWORD *)v6 + 10) )
      break;
    v6 = (__int64 *)*v6;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( !v6 )
    return 0LL;
  result = v6 + 15;
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 32);
  return result;
}
