/*
 * XREFs of HalpMmAllocCtxAlloc @ 0x140359D9C
 * Callers:
 *     HalpAllocatePmcCounterSetEx @ 0x140357CC0 (HalpAllocatePmcCounterSetEx.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140358724 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpBuddyAllocatorSplitNode @ 0x140359CA0 (HalpBuddyAllocatorSplitNode.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpCmciInitializeErrorPacket @ 0x14044CC58 (HalpCmciInitializeErrorPacket.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404756D4 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404CB450 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpIommuGetDeviceId @ 0x1404F04C0 (HalpIommuGetDeviceId.c)
 *     HalpHvInitMcaPcrContext @ 0x140502EFC (HalpHvInitMcaPcrContext.c)
 *     HalpIommuGetHardwareDomain @ 0x14050D954 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuCloneDeviceId @ 0x140513FB8 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     HalpAcpiAllocateMemory @ 0x140527BBC (HalpAcpiAllocateMemory.c)
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 *     HalInitializeBios @ 0x14057A9D0 (HalInitializeBios.c)
 *     HalpDmaAllocateDeviceCreationConfigurations @ 0x14057AE68 (HalpDmaAllocateDeviceCreationConfigurations.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14057C2D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14057FEF8 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpTscReserveResources @ 0x140586310 (HalpTscReserveResources.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1405874D0 (HalpHvInitMcaStatusMsrCache.c)
 *     IommupPasidDeviceCreate @ 0x14058AAEC (IommupPasidDeviceCreate.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14058B358 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaAllocateDomain @ 0x14058CB90 (HalpDmaAllocateDomain.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14058CF5C (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x14058D24C (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x14058D2D4 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     HalpDmaInitializeControllers @ 0x14058E0AC (HalpDmaInitializeControllers.c)
 *     HalpIommuAllocateDmaDomain @ 0x14058F814 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x14058FB54 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpNumaAddRangeProximity @ 0x140593FD0 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x140597230 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x1405976C4 (EmonAllocateResources.c)
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14059A394 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpRegisterUsbController @ 0x14059C9B4 (HalpRegisterUsbController.c)
 *     IommuEnableDevicePasid @ 0x14059E450 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x14059EC30 (IommuGetLibraryContext.c)
 *     IommupGetSystemContext @ 0x14059F680 (IommupGetSystemContext.c)
 *     IommupMapDeviceInternal @ 0x14059F814 (IommupMapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x1405A12E0 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x1405A14F0 (IommuDomainAttachDeviceEx.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x1405A1BB0 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuRegisterInterfaceStateChangeCallbackLegacy @ 0x1405A1DF0 (IommuRegisterInterfaceStateChangeCallbackLegacy.c)
 *     IommuReserveLogicalAddressRange @ 0x1405A1F80 (IommuReserveLogicalAddressRange.c)
 *     HalpIommuCreateDmarPageTable @ 0x1405A30AC (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1405A5810 (Amd64AddProfileSource.c)
 *     Amd64InitializeUncoreStatus @ 0x1405A6B28 (Amd64InitializeUncoreStatus.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x1405AE1AC (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407854E0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1407857E4 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpMcaInitializePcrContext @ 0x140BF0068 (HalpMcaInitializePcrContext.c)
 *     HalpInitMemoryCachingRequirementsTable @ 0x140BF05D0 (HalpInitMemoryCachingRequirementsTable.c)
 *     HalpBuildResumeStructures @ 0x140BF0FB0 (HalpBuildResumeStructures.c)
 *     HalpUpdateTiledCR3Mapping @ 0x140BF2904 (HalpUpdateTiledCR3Mapping.c)
 *     HalpMapNvsArea @ 0x140C10598 (HalpMapNvsArea.c)
 *     HalpMceInitializeErrorPacket @ 0x140C11148 (HalpMceInitializeErrorPacket.c)
 *     HalpAcpiDetectPiix4 @ 0x140CB52E4 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140CB538C (HalpAcpiPopulateTableCache.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140CB6140 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140CB6260 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140CB6404 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140CB6464 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140CB653C (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB6CB8 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     HalpMmAllocCtxAllocBuffer @ 0x14035AB60 (HalpMmAllocCtxAllocBuffer.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpMmAllocCtxAlloc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  KIRQL v7; // al
  __int64 v8; // rdi
  KIRQL v9; // r12
  __int64 ClearBits; // r15
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx

  v2 = 0LL;
  if ( !a2 )
    KeBugCheckEx(0xACu, 0LL, 0xA0A0uLL, (ULONG_PTR)"minkernel\\hals\\lib\\mm\\memory.c", 0xBCBuLL);
  v3 = 4096LL;
  v4 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = v4 + 16;
  if ( v4 >= 0x1000 )
    v5 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = v5 >> 4;
  if ( v5 >= 0x1000 )
  {
    v5 = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v14 = v5;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140FBD010);
    v8 = HalpNPPoolAllocCtx;
    v9 = v7;
    while ( (__int64 *)v8 != &HalpNPPoolAllocCtx )
    {
      ClearBits = RtlFindClearBits((PRTL_BITMAP)(v8 + 32), v6, *(_DWORD *)(v8 + 24));
      if ( ClearBits != 0xFFFFFFFFLL )
        goto LABEL_9;
      v8 = *(_QWORD *)v8;
    }
    KeReleaseSpinLock(&qword_140FBD010, v9);
    v14 = 0x4000LL;
  }
  v8 = HalpMmAllocCtxAllocBuffer(v3, v14);
  if ( v8 )
  {
    ClearBits = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(&qword_140FBD010);
LABEL_9:
    RtlSetBits((PRTL_BITMAP)(v8 + 32), ClearBits, v6);
    *(_DWORD *)(v8 + 24) = ClearBits + v6;
    v11 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8
      || (v12 = *(__int64 **)(v8 + 8), *v12 != v8)
      || (*v12 = v11,
          *(_QWORD *)(v11 + 8) = v12,
          v13 = HalpNPPoolAllocCtx,
          *(__int64 **)(HalpNPPoolAllocCtx + 8) != &HalpNPPoolAllocCtx) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v8 = HalpNPPoolAllocCtx;
    *(_QWORD *)(v8 + 8) = &HalpNPPoolAllocCtx;
    *(_QWORD *)(v13 + 8) = v8;
    HalpNPPoolAllocCtx = v8;
    KeReleaseSpinLock(&qword_140FBD010, v9);
    v2 = 16 * ClearBits + *(_QWORD *)(v8 + 16);
    if ( v5 < 0x1000 )
    {
      *(_QWORD *)v2 = v8;
      *(_DWORD *)(v2 + 8) = v6;
      v2 += 16LL;
    }
    else
    {
      *(_DWORD *)(v8 + 28) = v6;
    }
  }
  return v2;
}
