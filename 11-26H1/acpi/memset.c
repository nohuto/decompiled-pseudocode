/*
 * XREFs of memset @ 0x140072740
 * Callers:
 *     PushAccFieldObj @ 0x1400010C0 (PushAccFieldObj.c)
 *     NewObjOwner @ 0x1400015D0 (NewObjOwner.c)
 *     PushTerm @ 0x140002590 (PushTerm.c)
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     PushCall @ 0x140003230 (PushCall.c)
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     InitContext @ 0x14000A6D8 (InitContext.c)
 *     AccFieldUnit @ 0x14000ACF0 (AccFieldUnit.c)
 *     NewContext @ 0x14000B4B8 (NewContext.c)
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     FreeObjOwner @ 0x14000C7F0 (FreeObjOwner.c)
 *     ReadField @ 0x14000CB30 (ReadField.c)
 *     WriteField @ 0x14000D02C (WriteField.c)
 *     NewNameSpaceObject @ 0x14000FA34 (NewNameSpaceObject.c)
 *     ParseObjName @ 0x14000FE10 (ParseObjName.c)
 *     Field @ 0x1400102A0 (Field.c)
 *     OpRegion @ 0x140010510 (OpRegion.c)
 *     CopyObjBuffer @ 0x140010868 (CopyObjBuffer.c)
 *     ParseField @ 0x140010AC8 (ParseField.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     CreateXField @ 0x140011840 (CreateXField.c)
 *     ACPIEcOpRegionHandler @ 0x14001EE90 (ACPIEcOpRegionHandler.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     PciConfigSpaceHandlerWorker @ 0x1400214B0 (PciConfigSpaceHandlerWorker.c)
 *     ACPIDeviceInitializePowerRequest @ 0x140025FA4 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x140027900 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1400280E0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1400283E0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     IsPciBusAsync @ 0x140028690 (IsPciBusAsync.c)
 *     ACPIBuildRunMethodRequest @ 0x140029960 (ACPIBuildRunMethodRequest.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x14002D530 (ACPIGpeHalEnableDisableEvents.c)
 *     IndexField @ 0x140030BC0 (IndexField.c)
 *     BankField @ 0x140030DC0 (BankField.c)
 *     ACPIWakeDisableAsync @ 0x140032438 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032F20 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x140035060 (ACPIBuildProcessDevicePhasePrw.c)
 *     Buffer @ 0x1400395A0 (Buffer.c)
 *     Package @ 0x14003C780 (Package.c)
 *     EnableDisableCMOSRegions @ 0x14003DA1C (EnableDisableCMOSRegions.c)
 *     Method @ 0x14003E490 (Method.c)
 *     RtlStringCchPrintfExW @ 0x14003E964 (RtlStringCchPrintfExW.c)
 *     FindNSObj @ 0x14003F6A0 (FindNSObj.c)
 *     RtlStringCbPrintfExW @ 0x14003FED0 (RtlStringCbPrintfExW.c)
 *     ACPIAssociateWakeInterrupt @ 0x1400401CC (ACPIAssociateWakeInterrupt.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140041C64 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x140043C28 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPICMLidPowerStateCallBack @ 0x1400442D0 (ACPICMLidPowerStateCallBack.c)
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     ACPIBuildDeviceRequest @ 0x14004712C (ACPIBuildDeviceRequest.c)
 *     ACPIInternalQueryExtendedAddress @ 0x140048364 (ACPIInternalQueryExtendedAddress.c)
 *     RtlStringCchPrintfExA @ 0x14004AEC8 (RtlStringCchPrintfExA.c)
 *     InitMutex @ 0x14004D640 (InitMutex.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x14004F558 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIBuildDeviceExtension @ 0x14004F860 (ACPIBuildDeviceExtension.c)
 *     Simulator_AllocAndInitTestData @ 0x14005168C (Simulator_AllocAndInitTestData.c)
 *     ACPIBuildThermalZoneRequest @ 0x14005215C (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x140052970 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIWriteEventLogEntry @ 0x1400535C0 (ACPIWriteEventLogEntry.c)
 *     AcpiHandleDeviceFirmwareLock @ 0x140053F50 (AcpiHandleDeviceFirmwareLock.c)
 *     IrqLibpGetVectorInput @ 0x1400544C0 (IrqLibpGetVectorInput.c)
 *     AcpiSetupNativeMethodContext @ 0x1400545E0 (AcpiSetupNativeMethodContext.c)
 *     ACPIEcLogError @ 0x140055894 (ACPIEcLogError.c)
 *     RtlStringExHandleOtherFlagsW @ 0x14005761C (RtlStringExHandleOtherFlagsW.c)
 *     ACPIBuildPowerResourceRequest @ 0x14005808C (ACPIBuildPowerResourceRequest.c)
 *     RtlStringExHandleOtherFlagsW_0 @ 0x14005B764 (RtlStringExHandleOtherFlagsW_0.c)
 *     PerformHandlerInvocation @ 0x14005CBA8 (PerformHandlerInvocation.c)
 *     ACPIDispatchAddDevice @ 0x14005E070 (ACPIDispatchAddDevice.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1400612A4 (RtlStringExHandleOtherFlagsA.c)
 *     ACPIGpeClearEventMasks @ 0x1400613E4 (ACPIGpeClearEventMasks.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x140061920 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x140062040 (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1400621FC (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlGetDeviceInformation @ 0x140062C28 (ACPIIoctlGetDeviceInformation.c)
 *     EnableDisableDeviceRegionSpace @ 0x140066FA8 (EnableDisableDeviceRegionSpace.c)
 *     ACPIWakeInitializePmeRouting @ 0x14006B128 (ACPIWakeInitializePmeRouting.c)
 *     ACPIWmiRegisterGuids @ 0x14006BBAC (ACPIWmiRegisterGuids.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D1E8 (AMLICreateNativeNamespaceObject.c)
 *     SetLogSize @ 0x14006F4CC (SetLogSize.c)
 *     Debugger @ 0x14006F69C (Debugger.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     InitEvent @ 0x14006F924 (InitEvent.c)
 *     PowerRes @ 0x14006FAA0 (PowerRes.c)
 *     Processor @ 0x14006FC20 (Processor.c)
 *     RtlSetVolatileMemory @ 0x140072340 (RtlSetVolatileMemory.c)
 *     memset$thunk$772440563353939046 @ 0x140073020 (memset$thunk$772440563353939046.c)
 *     ACPIConnectWakeInterrupt @ 0x1400A924C (ACPIConnectWakeInterrupt.c)
 *     ArbBootAllocation @ 0x1400A9B80 (ArbBootAllocation.c)
 *     WppTraceCallback @ 0x1400AC8B0 (WppTraceCallback.c)
 *     AcpiArblibIsAliasedRangeAvailable @ 0x1400AD534 (AcpiArblibIsAliasedRangeAvailable.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1400AEDF0 (ACPIEcConnectGpioInterrupt.c)
 *     QueryExternalTranslatorInterface @ 0x1400AFF64 (QueryExternalTranslatorInterface.c)
 *     EnableDisableIPMIRegions @ 0x1400B18A0 (EnableDisableIPMIRegions.c)
 *     ACPIEvaluateSpareDsm @ 0x1400B1EB4 (ACPIEvaluateSpareDsm.c)
 *     ACPIPccInterruptDeviceStart @ 0x1400B2AB0 (ACPIPccInterruptDeviceStart.c)
 *     AcpiSetupNativeMethodInterface @ 0x1400B4E54 (AcpiSetupNativeMethodInterface.c)
 *     UnRegisterOperationRegionHandler @ 0x1400B56D4 (UnRegisterOperationRegionHandler.c)
 *     AcpiQueryPrmInterface @ 0x1400B6548 (AcpiQueryPrmInterface.c)
 *     PcisuppInitializePciRouting @ 0x1400BC558 (PcisuppInitializePciRouting.c)
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 *     IrqArbpQueryConflictIsa @ 0x1400BE8CC (IrqArbpQueryConflictIsa.c)
 *     ArbQueryConflict @ 0x1400BF550 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1400BFAD0 (ArbRetestAllocation.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1400C098C (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400C1504 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1400C1E54 (ACPIFilterQueryBusD3ColdSupport.c)
 *     AcpiQueryPciBusInterface @ 0x1400C2130 (AcpiQueryPciBusInterface.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1400C2610 (ACPIInternalGetDeviceCapabilities.c)
 *     ACPIMatchHardwareAddress @ 0x1400C268C (ACPIMatchHardwareAddress.c)
 *     ACPIMatchHardwareId @ 0x1400C29C8 (ACPIMatchHardwareId.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1400C31C4 (IrqTranslatepQueryDeviceIrql.c)
 *     IcUpdateControllers @ 0x1400C380C (IcUpdateControllers.c)
 *     PcisuppIsPciDevice @ 0x1400C3ACC (PcisuppIsPciDevice.c)
 *     IcClearPossibleData @ 0x1400C4400 (IcClearPossibleData.c)
 *     IrqPolicyGetDevicePolicy @ 0x1400C50A8 (IrqPolicyGetDevicePolicy.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1400CB6B0 (ACPIBusIrpQueryCompatibleId.c)
 *     ArbpBuildAllocationStack @ 0x1400D0F6C (ArbpBuildAllocationStack.c)
 *     RegisterOperationRegionHandler @ 0x1400D4214 (RegisterOperationRegionHandler.c)
 *     AcpipInitPciBusStatePool @ 0x1400D8ACC (AcpipInitPciBusStatePool.c)
 *     DriverEntry @ 0x1400D8CB0 (DriverEntry.c)
 *     OSInterruptVector @ 0x1400D959C (OSInterruptVector.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1400DC53C (Simulator_NotifyTablesAreLoaded.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1400DC718 (InitIllegalIOAddressListFromHAL.c)
 *     IrqLibpSetSciConnectionData @ 0x1400DCAB4 (IrqLibpSetSciConnectionData.c)
 *     ProcessorInitGlobalState @ 0x1400DCBDC (ProcessorInitGlobalState.c)
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
