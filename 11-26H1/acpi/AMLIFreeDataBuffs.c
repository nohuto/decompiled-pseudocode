/*
 * XREFs of AMLIFreeDataBuffs @ 0x14003C918
 * Callers:
 *     ACPIFanSetTripPoints @ 0x1400A8500 (ACPIFanSetTripPoints.c)
 *     ACPIQuerySpareDsm @ 0x1400AA5C0 (ACPIQuerySpareDsm.c)
 *     ACPIAmliEvaluatePcch @ 0x1400ACDE4 (ACPIAmliEvaluatePcch.c)
 *     ACPIEcGetGpeVector @ 0x1400AEFA4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1400AF048 (ACPIEcGetUid.c)
 *     ACPIEvaluateDsmMethodInOrderQueryHandling @ 0x1400AF248 (ACPIEvaluateDsmMethodInOrderQueryHandling.c)
 *     ACPIEvaluateDsmMethodOnBurstModeThreshold @ 0x1400AF3D4 (ACPIEvaluateDsmMethodOnBurstModeThreshold.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1400B0460 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIGetUniqueId @ 0x1400B1FE0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1400B20B0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1400B21A0 (ACPIModuleIsValidSpare.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1400B3A04 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     ACPIPepEpmNotify @ 0x1400B4270 (ACPIPepEpmNotify.c)
 *     ACPIPepInitializeEpmNotificationSupport @ 0x1400B434C (ACPIPepInitializeEpmNotificationSupport.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1400B4674 (ACPIPepInitializePlatformNotificationSupport.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1400B843C (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1400B967C (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus @ 0x1400B97FC (ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus.c)
 *     ACPIThermalBuildConstraints @ 0x1400BAA20 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalStartDevice @ 0x1400BAC70 (ACPIThermalStartDevice.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1400C0430 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400C1884 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessorDeviceControl @ 0x1400C5FF0 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalWorker @ 0x1400C6DC0 (ACPIThermalWorker.c)
 *     AcpiGetIdleWakeInfo @ 0x1400CCFC0 (AcpiGetIdleWakeInfo.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1400CD164 (ACPIPepPlatformEntryExitNotify.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1400CD25C (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1400D3B78 (ACPIQueryCacheCoherencyAttribute.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_14008ED38 = 0;
  pszDest = 0;
  return FreeDataBuffs(a1, 1u);
}
